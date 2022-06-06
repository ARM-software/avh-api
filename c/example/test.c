#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "apiClient.h"
#include "ArmAPI.h"

static char *get_a_project_id(apiClient_t *api_client)
{
    list_t *list = NULL;
    listEntry_t *first_entry = NULL;
    cJSON *project = NULL;
    char *project_id = NULL;

    printf("Finding a project...\n");
    list = ArmAPI_v1GetProjects(api_client, NULL, 1);
    if(!list) {
        printf("Failed to retrieve project list\n");
        exit(1);
    }

    first_entry = list_getElementAt(list, 0);
    if(!first_entry) {
        printf("No projects available\n");
        exit(1);
    }
    project = cJSON_Parse(first_entry->data);
    if(!cJSON_IsObject(project)) {
        printf("Project list seems malformed\n");
        exit(1);
    }
    project_id = cJSON_GetStringValue(cJSON_GetObjectItem(project, "id"));
    if(!project_id) {
        printf("First project has no id\n");
        exit(1);
    }
    project_id = strdup(project_id);
    if(!project_id)
        exit(1);

    cJSON_Delete(project);
    list_freeList(list); /* Leaks... */
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
        printf("Failed to retrieve model list\n");
        exit(1);
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
            exit(1);
        }
        if(strncmp(curr_model->flavor, flavor_prefix, sizeof(flavor_prefix) - 1) == 0) {
            model = curr_model;
            break;
        }
        model_free(curr_model);
    }

    list_freeList(list);
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
        printf("Failed to retrieve software list for model\n");
        exit(1);
    }

    first_entry = list_getElementAt(list, 0);
    if(!first_entry) {
        printf("No software available\n");
        exit(1);
    }

    firmware_json = cJSON_Parse(first_entry->data);
    firmware = firmware_parseFromJSON(firmware_json);
    cJSON_Delete(firmware_json);
    list_freeList(list); /* Leaks... */
    return firmware;
}

static instance_t *create_instance(apiClient_t *api_client, char *name, char *project_id, char *flavor, char *version)
{
    instance_create_options_t *options = NULL;
    instance_return_t *instance_ret = NULL;
    instance_t *instance = NULL;

    options = calloc(1, sizeof(*options));
    if(!options)
        exit(1);
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

    printf("Waiting for the device to get ready");
    fflush(stdout);

    while(instance->state != arm_api_instance_state__on) {
        instance_t *temp = NULL;

        printf(".");
        fflush(stdout);
        sleep(1);

        temp = ArmAPI_v1GetInstance(api_client, instance->id, NULL);
        if(!temp) {
            printf(" device seems to be gone\n");
            return 1;
        }
        instance_free(instance);
        instance = temp;
        temp = NULL;
    }

    printf(" done\n");
    *instance_p = instance;
    return 0;
}

static void get_console_socket(apiClient_t *api_client, instance_t *instance)
{
    instance_console_endpoint_t *endpoint = NULL;

    endpoint = ArmAPI_v1GetInstanceConsole(api_client, instance->id);
    if(!endpoint)
        return;
    printf("%s\n", endpoint->url);
}

static int stop_instance(apiClient_t *api_client, instance_t **instance_p)
{
    instance_t *instance = *instance_p;

    printf("Powering down the device");
    fflush(stdout);

    ArmAPI_v1StopInstance(api_client, instance->id, NULL);

    while(instance->state != arm_api_instance_state__off) {
        instance_t *temp = NULL;

        printf(".");
        fflush(stdout);
        sleep(1);

        temp = ArmAPI_v1GetInstance(api_client, instance->id, NULL);
        if(!temp) {
            printf(" device seems to be gone\n");
            return 1;
        }
        instance_free(instance);
        instance = temp;
        temp = NULL;
    }

    printf(" done\n");
    *instance_p = instance;
    return 0;
}

static int take_snapshot(apiClient_t *api_client, instance_t *instance)
{
    snapshot_creation_options_t options = { .name = "TestSnap" };
    snapshot_t *snapshot = NULL;

    printf("Taking a snapshot\n");

    snapshot = ArmAPI_v1CreateSnapshot(api_client, instance->id, &options);
    if(!snapshot) {
        printf("Snapshot failed\n");
        return 1;
    }

    printf("Waiting for snapshot to complete");
    fflush(stdout);
    while(snapshot->status && snapshot->status->task && strcmp(snapshot->status->task, "creating") == 0) {
        snapshot_t *temp = NULL;

        printf(".");
        fflush(stdout);
        sleep(1);

        temp = ArmAPI_v1GetSnapshot(api_client, instance->id, snapshot->id);
        snapshot_free(snapshot);
        snapshot = temp;
        temp = NULL;

        if(!snapshot) {
            printf(" snapshot seems to be gone\n");
            return 1;
        }
    }
    if(!snapshot->status || !snapshot->status->task) {
        printf(" failed to retrieve snapshot status\n");
        return 1;
    }

    printf(" done\n");
    return 0;
}

static int list_snapshots(apiClient_t *api_client, instance_t *instance)
{
    list_t *list = NULL;
    listEntry_t *current = NULL;

    printf("Listing snapshots\n");

    list = ArmAPI_v1GetSnapshots(api_client, instance->id);
    if(!list) {
        printf("Failed to retrieve list of snapshots\n");
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
    list_freeList(list);
    return 0;
}

int main(int argc, char *argv[])
{
    const char *endpoint = NULL, *username = NULL, *password = NULL;
    apiClient_t *api_client = NULL;
    cJSON *auth_body_json = NULL;
    object_t *auth_body = NULL;
    token_t *token = NULL;
    char *project_id = NULL;
    model_t *model = NULL;
    firmware_t *firmware = NULL;
    instance_t *instance = NULL;
    int status = 1;

    if(argc != 4) {
        printf("Usage: %s <ApiEndpoint> <username> <password>\n", argv[0]);
        return 1;
    }
    endpoint = argv[1];
    username = argv[2];
    password = argv[3];

    api_client = apiClient_create_with_base_path(endpoint, NULL);

    auth_body_json = cJSON_CreateObject();
    if(!auth_body_json)
        exit(1);
    cJSON_AddStringToObject(auth_body_json, "username", username);
    cJSON_AddStringToObject(auth_body_json, "password", password);
    auth_body = object_parseFromJSON(auth_body_json);
    if(!auth_body)
        exit(1);

    token = ArmAPI_v1AuthLogin(api_client, auth_body);
    if(!token) {
        printf("Failure on authentication\n");
        return 1;
    }
    api_client->accessToken = strdup(token->token);
    if(!api_client->accessToken)
        exit(1);
    printf("Logged in\n");

    project_id = get_a_project_id(api_client);
    printf("Project id is %s\n", project_id);

    model = get_stm32u5_model(api_client);
    if(!model) {
        printf("No matching flavor was found.\n");
        exit(1);
    }
    printf("Model flavor is %s\n", model->flavor);

    firmware = get_a_model_firmware(api_client, model);
    if(!firmware) {
        printf("No firmware found for model %s\n", model->model);
        exit(1);
    }
    printf("Software version is %s\n", firmware->version);

    instance = create_instance(api_client, "STM32U5-C-API-Test", project_id, model->flavor, firmware->version);
    if(!instance) {
        printf("Failed to create an instance\n");
        exit(1);
    }
    if(instance_wait_until_ready(api_client, &instance))
        goto delete;

    get_console_socket(api_client, instance);

    if(stop_instance(api_client, &instance))
        goto delete;
    if(take_snapshot(api_client, instance))
        goto delete;
    if(list_snapshots(api_client, instance))
        goto delete;

    status = 0;
delete:
    ArmAPI_v1DeleteInstance(api_client, instance->id);
    return status;
}
