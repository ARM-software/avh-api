#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

#include <libwebsockets.h>

#include <arm_api/include/apiClient.h>
#include <arm_api/api/ArmAPI.h>

static int interrupted = 0;

static void sigint_handler(int sig)
{
    interrupted = 1;
}

/* Prints an error string along with the latest status code from the web api */
static void report_api_error(apiClient_t *api_client, const char *str)
{
    if(api_client->response_code)
        printf("%s - error code: %ld\n", str, api_client->response_code);
    else
        printf("%s\n", str);
}

static char *get_a_project_id(apiClient_t *api_client)
{
    list_t *list = NULL;
    listEntry_t *first_entry = NULL;
    cJSON *project = NULL;
    char *project_id = NULL;

    printf("Finding a project...\n");
    list = ArmAPI_v1GetProjects(api_client, NULL, 1);
    if(!list) {
        report_api_error(api_client, "Failed to retrieve project list");
        return NULL;
    }

    first_entry = list_getElementAt(list, 0);
    if(!first_entry) {
        printf("No projects available\n");
        goto fail;
    }
    project = cJSON_Parse(first_entry->data);
    if(!cJSON_IsObject(project)) {
        printf("Project list seems malformed\n");
        goto fail;
    }
    project_id = cJSON_GetStringValue(cJSON_GetObjectItem(project, "id"));
    if(!project_id) {
        printf("First project has no id\n");
        goto fail;
    }
    project_id = strdup(project_id);

fail:
    cJSON_Delete(project);
    clear_and_free_string_list(list);
    return project_id;
}

static model_t *get_stm32u5_model(apiClient_t *api_client)
{
    list_t *list = NULL;
    listEntry_t *current = NULL;
    char flavor_prefix[] = "stm32u5";
    model_t *model = NULL;

    printf("Getting our model...\n");
    list = ArmAPI_v1GetModels(api_client);
    if(!list) {
        report_api_error(api_client, "Failed to retrieve model list");
        return NULL;
    }

    for(current = list->firstEntry; current; current = current->nextListEntry) {
        char *json = current->data;
        cJSON *data = NULL;
        model_t *curr_model = NULL;

        data = cJSON_Parse(json);
        curr_model = model_parseFromJSON(data);
        cJSON_Delete(data);
        if(!curr_model) {
            printf("Model data seems malformed\n");
            goto fail;
        }
        if(strncmp(curr_model->flavor, flavor_prefix, sizeof(flavor_prefix) - 1) == 0) {
            model = curr_model;
            break;
        }
        model_free(curr_model);
    }

fail:
    clear_and_free_string_list(list);
    return model;
}

static firmware_t *get_a_model_firmware(apiClient_t *api_client, model_t *model)
{
    list_t *list = NULL;
    listEntry_t *first_entry = NULL;
    cJSON *firmware_json = NULL;
    firmware_t *firmware = NULL;

    printf("Finding a a software version for flavor %s...\n", model->flavor);
    list = ArmAPI_v1GetModelSoftware(api_client, model->model);
    if(!list) {
        report_api_error(api_client, "Failed to retrieve software list for model");
        return NULL;
    }

    first_entry = list_getElementAt(list, 0);
    if(!first_entry) {
        printf("No software available\n");
        goto fail;
    }

    firmware_json = cJSON_Parse(first_entry->data);
    firmware = firmware_parseFromJSON(firmware_json);
    cJSON_Delete(firmware_json);
fail:
    clear_and_free_string_list(list);
    return firmware;
}

static instance_t *create_instance(apiClient_t *api_client, char *name, char *project_id, char *flavor, char *version)
{
    instance_create_options_t *options = NULL;
    instance_return_t *instance_ret = NULL;
    instance_t *instance = NULL;

    options = calloc(1, sizeof(*options));
    if(!options)
        return NULL;
    options->name = name;
    options->project = project_id;
    options->flavor = flavor;
    options->os = version;

    printf("Creating a device instance...\n");

    instance_ret = ArmAPI_v1CreateInstance(api_client, options);
    free(options);
    options = NULL;
    if(!instance_ret)
        return NULL;

    instance = ArmAPI_v1GetInstance(api_client, instance_ret->id, NULL);
    instance_return_free(instance_ret);
    instance_ret = NULL;
    return instance;
}

static int instance_wait_until_ready(apiClient_t *api_client, instance_t **instance_p)
{
    instance_t *instance = *instance_p;

    printf("Waiting for the device to get ready...");
    fflush(stdout);

    while(instance->state != arm_api_instance_state__on) {
        instance_t *temp = NULL;

        printf(".");
        fflush(stdout);
        sleep(1);

        if(interrupted) {
            printf(" interrupted!\n");
            interrupted = 0;
            return 1;
        }

        temp = ArmAPI_v1GetInstance(api_client, instance->id, NULL);
        if(!temp) {
            report_api_error(api_client, " device seems to be gone");
            return 1;
        }
        instance_free(instance);
        *instance_p = instance = temp;
        temp = NULL;
    }

    printf(" done\n");
    return 0;
}

#define WIFI_SSID_REQUESTED 1
#define WIFI_PASS_REQUESTED 2
static int console_request = 0;
static char *ipAddress = NULL;

/* Must be enough for "Arm" or "password", plus the newline */
#define LWS_MAX_OUTLEN   16
#define LWS_PREBUF ((LWS_PRE/8 + 1) * 8)

static int wifi_callback(struct lws *socket, enum lws_callback_reasons reason, void *user, void *in, size_t len)
{
    const char *outstr = NULL;
    unsigned char buf[LWS_PREBUF + LWS_MAX_OUTLEN];
    unsigned char *outbuf = buf + LWS_PREBUF;
    static char *data = NULL;
    static unsigned int data_length = 0;
    size_t outlen;

    if (!data) {
      data = malloc(0);
    }

    switch(reason) {
    case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
        interrupted = 1;
        printf("ERROR: %.*s\n", (int)len, (char *)in);
        break;
    case LWS_CALLBACK_CLIENT_RECEIVE:
        if(len < 1)
            break;
        char *newdata = realloc(data, data_length + len);
        if (newdata == NULL) {
          perror("Unable to allocate memory");
          exit(1);
        }
        data = newdata;
        memcpy(data + data_length, in, len);
        data_length += len;

        char *line = (char*)data;
        char *saveptr = line;
        for (saveptr = strchr(line, '\n'); saveptr != NULL; line = saveptr+1, saveptr = strchr(line, '\n')) {
          *saveptr = '\0';
          printf("<< %s\n", line);
          if(strstr(line, "Please enter your wifi ssid")) {
            console_request = WIFI_SSID_REQUESTED;
            lws_callback_on_writable(socket);
          } else if(strstr(line, "Please enter your wifi password")) {
            console_request = WIFI_PASS_REQUESTED;
            lws_callback_on_writable(socket);
          } else if(strstr(line, "IP address :")) {
            char *ip = strchr(line, ':');
            while (!(*ip >= '0' && *ip <= '9')) {
              ip++;
            }
            char *trailingDot = strrchr(ip, '.');
            *trailingDot = '\0';
            if (ipAddress) {
              free(ipAddress);
            }
            ipAddress = strdup(ip);
          } else if(strstr(line, "Listening started")) {
            interrupted = 1; // Done
          }
        }
        data_length -= line - data;
        memmove(data, line, data_length);
        break;
    case LWS_CALLBACK_CLIENT_WRITEABLE:
        memset(outbuf, 0, LWS_MAX_OUTLEN);
        if(console_request == WIFI_SSID_REQUESTED) {
            outstr = "Arm";
        } else if(console_request == WIFI_PASS_REQUESTED) {
            outstr = "password";
        } else {
            interrupted = 1; // This should never happen
            break;
        }
        console_request = 0;
        outlen = snprintf((char *)outbuf, LWS_MAX_OUTLEN, "%s\n", outstr);
        fprintf(stderr, ">> %s", outbuf);
        if(lws_write(socket, outbuf, outlen, LWS_WRITE_TEXT) < 0) {
            printf("Websockets write failed\n");
            interrupted = 1;
        }
        break;
    default:
        break;
    }
    if (interrupted && data) {
      free(data);
      data = NULL;
    }
    return 0;
}

static struct lws_protocols protocols[] = {
    {
        .name = "wifi-protocol",
        .callback = wifi_callback,
        .per_session_data_size = 0,
        .rx_buffer_size = 1024,
    },
    {0}
};

static struct lws *get_console_socket(apiClient_t *api_client, instance_t *instance, struct lws_context *context)
{
    struct lws_client_connect_info info = {0};
    instance_console_endpoint_t *endpoint = NULL;
    struct lws *console = NULL;
    const char scheme[] = "wss://";
    char *host = NULL, *path = NULL, *slash = NULL;

    endpoint = ArmAPI_v1GetInstanceConsole(api_client, instance->id);
    if(!endpoint)
        return NULL;

    printf("Connecting to console url: %s\n", endpoint->url);

    if(strlen(endpoint->url) < sizeof(scheme) - 1) {
        printf("Websockets url is missing scheme\n");
        goto fail;
    }
    host = endpoint->url + sizeof(scheme) - 1;
    host = strdup(host);
    if(!host)
        goto fail;
    slash = strchr(host, '/');
    if(!slash) {
        printf("Websockets url is missing a path\n");
        goto fail;
    }
    path = strdup(slash);
    *slash = '\0';
    if(!path)
        goto fail;

    info.context = context;
    info.address = host;
    info.port = 443;
    info.host = host;
    info.origin = host;
    info.path = path;
    info.protocol = protocols[0].name;
    info.ssl_connection = LCCSCF_USE_SSL;

    console = lws_client_connect_via_info(&info);
fail:
    free(path);
    free(host);
    instance_console_endpoint_free(endpoint);
    return console;
}

static int connect_wifi(apiClient_t *api_client, instance_t *instance)
{
    struct lws_context_creation_info info = {0};
    struct lws_context *context = NULL;
    struct lws *console = NULL;
    int ret = 1;

    printf("Connecting to wifi...\n");

    info.options = LWS_SERVER_OPTION_H2_JUST_FIX_WINDOW_UPDATE_OVERFLOW | LWS_SERVER_OPTION_DO_SSL_GLOBAL_INIT;
    info.port = CONTEXT_PORT_NO_LISTEN;
    info.protocols = protocols;
    info.gid = -1;
    info.uid = -1;

    context = lws_create_context(&info);
    if(!context) {
        printf("libwebsockets init failed\n");
        return ret;
    }

    console = get_console_socket(api_client, instance, context);
    if(!console) {
        report_api_error(api_client, "Failed to connect to the console");
        goto fail;
    }

    printf("Handling the console websocket...\n");
    while(lws_service(context, 0) >= 0 && !interrupted)
        ;

    ret = 0;
fail:
    lws_context_destroy(context);
    interrupted = 0;
    return ret;
}

static int stop_instance(apiClient_t *api_client, instance_t **instance_p)
{
    instance_t *instance = *instance_p;

    printf("Powering down the device...");
    fflush(stdout);

    ArmAPI_v1StopInstance(api_client, instance->id, NULL);
    if(api_client->response_code != 204) {
        report_api_error(api_client, " instance won't stop");
        return 1;
    }

    while(instance->state != arm_api_instance_state__off) {
        instance_t *temp = NULL;

        printf(".");
        fflush(stdout);
        sleep(1);

        if(interrupted) {
            printf(" interrupted!\n");
            interrupted = 0;
            return 1;
        }

        temp = ArmAPI_v1GetInstance(api_client, instance->id, NULL);
        if(!temp) {
            report_api_error(api_client, " device seems to be gone");
            return 1;
        }
        instance_free(instance);
        *instance_p = instance = temp;
        temp = NULL;
    }

    printf(" done\n");
    return 0;
}

static int take_snapshot(apiClient_t *api_client, instance_t *instance)
{
    snapshot_creation_options_t options = { .name = "TestSnap" };
    snapshot_t *snapshot = NULL;
    int ret = 1;

    printf("Taking a snapshot\n");

    snapshot = ArmAPI_v1CreateSnapshot(api_client, instance->id, &options);
    if(!snapshot) {
        report_api_error(api_client, "Snapshot failed");
        return 1;
    }

    printf("Waiting for snapshot to complete...");
    fflush(stdout);
    while(snapshot->status && snapshot->status->task && strcmp(snapshot->status->task, "creating") == 0) {
        snapshot_t *temp = NULL;

        printf(".");
        fflush(stdout);
        sleep(1);

        if(interrupted) {
            printf(" interrupted!\n");
            interrupted = 0;
            goto fail;
        }

        temp = ArmAPI_v1GetSnapshot(api_client, snapshot->id);
        snapshot_free(snapshot);
        snapshot = temp;
        temp = NULL;

        if(!snapshot) {
            report_api_error(api_client, " snapshot seems to be gone");
            return 1;
        }
    }

    if(!snapshot->status || !snapshot->status->task) {
        printf(" failed to retrieve snapshot status\n");
        ret = 1;
    } else {
        printf(" done\n");
        ret = 0;
    }
fail:
    snapshot_free(snapshot);
    snapshot = NULL;
    return ret;
}

static int list_snapshots(apiClient_t *api_client, instance_t *instance)
{
    list_t *list = NULL;
    listEntry_t *current = NULL;

    printf("Listing snapshots\n");

    list = ArmAPI_v1GetInstanceSnapshots(api_client, instance->id);
    if(!list) {
        report_api_error(api_client, "Failed to retrieve list of snapshots");
        return 1;
    }

    for(current = list->firstEntry; current; current = current->nextListEntry) {
        char *json = current->data;
        cJSON *data = NULL;
        snapshot_t *curr_snap = NULL;

        data = cJSON_Parse(json);
        curr_snap = snapshot_parseFromJSON(data);
        cJSON_Delete(data);
        if(!curr_snap) {
            printf("Snapshot data seems malformed\n");
            return 1;
        }

        printf("\n");
        printf("id: %s\n", curr_snap->id ? : "null");
        printf("name: %s\n", curr_snap->name ? : "null");
        printf("instance: %s\n", curr_snap->instance ? : "null");
        if(curr_snap->status) {
            printf("status - task: %s\n", curr_snap->status->task ? : "null");
            printf("status - created: %s\n", curr_snap->status->created ? "yes" : "no");
        }
        printf("date: %f\n", curr_snap->date);
        printf("fresh: %s\n", curr_snap->fresh ? "yes" : "no");
        printf("live: %s\n", curr_snap->live ? "yes" : "no");
        printf("local: %s\n", curr_snap->local ? "yes" : "no");

        snapshot_free(curr_snap);
    }
    printf("\n");
    clear_and_free_string_list(list);
    return 0;
}

int main(int argc, char *argv[])
{
    struct sigaction int_action = { .sa_handler = sigint_handler };
    char *endpoint = NULL;
    apiClient_t *api_client = NULL;
    object_t *auth_body = NULL;
    token_t *token = NULL;
    char *project_id = NULL;
    model_t *model = NULL;
    firmware_t *firmware = NULL;
    instance_t *instance = NULL;
    int status = 1;

    apiClient_setupGlobalEnv();

    if(argc != 3) {
        printf("Usage: %s <ApiEndpoint> <ApiToken>\n\n\tApiEndpoint: https://app.avh.arm.com/api\n\tApiToken: Obtained from UI\n", argv[0]);
        return 1;
    }
    endpoint = argv[1];
    api_token_t api_token = { .api_token = argv[2] };

    api_client = apiClient_create_with_base_path(endpoint, NULL);

    token = ArmAPI_v1AuthLogin(api_client, &api_token);
    if(!token || !token->token) {
        report_api_error(api_client, "Failure on authentication");
        goto out;
    }
    api_client->accessToken = strdup(token->token);
    if(!api_client->accessToken)
        goto out;
    printf("Logged in\n");

    project_id = get_a_project_id(api_client);
    if(!project_id)
        goto out;
    printf("Project id is %s\n", project_id);

    model = get_stm32u5_model(api_client);
    if(!model) {
        printf("No matching flavor was found.\n");
        goto out;
    }
    printf("Model flavor is %s\n", model->flavor);

    firmware = get_a_model_firmware(api_client, model);
    if(!firmware || !firmware->version) {
        printf("No firmware found for model %s\n", model->model);
        goto out;
    }
    printf("Software version is %s\n", firmware->version);

    sigaction(SIGINT, &int_action, NULL);
    instance = create_instance(api_client, "STM32U5-C-API-Test", project_id, model->flavor, firmware->version);
    if(!instance) {
        report_api_error(api_client, "Failed to create an instance");
        goto out;
    }

    if(instance_wait_until_ready(api_client, &instance))
        goto out;

    if(connect_wifi(api_client, instance))
        printf("Failed to connect to wifi\n");

    if (ipAddress) {
        printf("Acquired IP: %s\n", ipAddress);
    }

    if(stop_instance(api_client, &instance))
        goto out;
    if(take_snapshot(api_client, instance))
        goto out;
    if(list_snapshots(api_client, instance))
        goto out;

    status = 0;
out:
    if(instance) {
        ArmAPI_v1DeleteInstance(api_client, instance->id);
        if(api_client->response_code != 204)
            report_api_error(api_client, "Failed to request deletion of device instance");
        instance_free(instance);
        instance = NULL;
    }
    firmware_free(firmware);
    firmware = NULL;
    model_free(model);
    model = NULL;
    free(project_id);
    project_id = NULL;
    token_free(token);
    token = NULL;
    if(auth_body) {
        object_free(auth_body);
        auth_body = NULL;
    }
    if(api_client) {
        apiClient_free(api_client);
        api_client = NULL;
    }
    apiClient_unsetupGlobalEnv();
    return status;
}
