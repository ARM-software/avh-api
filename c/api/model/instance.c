#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance.h"


char* stateinstance_ToString(arm_api_instance__e state) {
    char* stateArray[] =  { "NULL", "on", "off", "deleting", "creating", "restoring", "paused", "rebooting", "error" };
	return stateArray[state];
}

arm_api_instance__e stateinstance_FromString(char* state){
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "on", "off", "deleting", "creating", "restoring", "paused", "rebooting", "error" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

instance_t *instance_create(
    char *id,
    char *name,
    char *key,
    char *flavor,
    char *type,
    char *project,
    instance_state_t *state,
    char *state_changed,
    char *user_task,
    char *task_state,
    char *error,
    instance_boot_options_t *boot_options,
    char *service_ip,
    char *wifi_ip,
    instance_services_t *services,
    int panicked,
    char *created,
    char *model,
    char *ipsw,
    char *os,
    char *agent,
    instance_netmon_state_t *netmon,
    char *expose_port,
    int fault,
    list_t *patches
    ) {
    instance_t *instance_local_var = malloc(sizeof(instance_t));
    if (!instance_local_var) {
        return NULL;
    }
    instance_local_var->id = id;
    instance_local_var->name = name;
    instance_local_var->key = key;
    instance_local_var->flavor = flavor;
    instance_local_var->type = type;
    instance_local_var->project = project;
    instance_local_var->state = state;
    instance_local_var->state_changed = state_changed;
    instance_local_var->user_task = user_task;
    instance_local_var->task_state = task_state;
    instance_local_var->error = error;
    instance_local_var->boot_options = boot_options;
    instance_local_var->service_ip = service_ip;
    instance_local_var->wifi_ip = wifi_ip;
    instance_local_var->services = services;
    instance_local_var->panicked = panicked;
    instance_local_var->created = created;
    instance_local_var->model = model;
    instance_local_var->ipsw = ipsw;
    instance_local_var->os = os;
    instance_local_var->agent = agent;
    instance_local_var->netmon = netmon;
    instance_local_var->expose_port = expose_port;
    instance_local_var->fault = fault;
    instance_local_var->patches = patches;

    return instance_local_var;
}


void instance_free(instance_t *instance) {
    if(NULL == instance){
        return ;
    }
    listEntry_t *listEntry;
    if (instance->id) {
        free(instance->id);
        instance->id = NULL;
    }
    if (instance->name) {
        free(instance->name);
        instance->name = NULL;
    }
    if (instance->key) {
        free(instance->key);
        instance->key = NULL;
    }
    if (instance->flavor) {
        free(instance->flavor);
        instance->flavor = NULL;
    }
    if (instance->type) {
        free(instance->type);
        instance->type = NULL;
    }
    if (instance->project) {
        free(instance->project);
        instance->project = NULL;
    }
    if (instance->state) {
        instance_state_free(instance->state);
        instance->state = NULL;
    }
    if (instance->state_changed) {
        free(instance->state_changed);
        instance->state_changed = NULL;
    }
    if (instance->user_task) {
        free(instance->user_task);
        instance->user_task = NULL;
    }
    if (instance->task_state) {
        free(instance->task_state);
        instance->task_state = NULL;
    }
    if (instance->error) {
        free(instance->error);
        instance->error = NULL;
    }
    if (instance->boot_options) {
        instance_boot_options_free(instance->boot_options);
        instance->boot_options = NULL;
    }
    if (instance->service_ip) {
        free(instance->service_ip);
        instance->service_ip = NULL;
    }
    if (instance->wifi_ip) {
        free(instance->wifi_ip);
        instance->wifi_ip = NULL;
    }
    if (instance->services) {
        instance_services_free(instance->services);
        instance->services = NULL;
    }
    if (instance->created) {
        free(instance->created);
        instance->created = NULL;
    }
    if (instance->model) {
        free(instance->model);
        instance->model = NULL;
    }
    if (instance->ipsw) {
        free(instance->ipsw);
        instance->ipsw = NULL;
    }
    if (instance->os) {
        free(instance->os);
        instance->os = NULL;
    }
    if (instance->agent) {
        free(instance->agent);
        instance->agent = NULL;
    }
    if (instance->netmon) {
        instance_netmon_state_free(instance->netmon);
        instance->netmon = NULL;
    }
    if (instance->expose_port) {
        free(instance->expose_port);
        instance->expose_port = NULL;
    }
    if (instance->patches) {
        list_ForEach(listEntry, instance->patches) {
            free(listEntry->data);
        }
        list_freeList(instance->patches);
        instance->patches = NULL;
    }
    free(instance);
}

cJSON *instance_convertToJSON(instance_t *instance) {
    cJSON *item = cJSON_CreateObject();

    // instance->id
    if(instance->id) { 
    if(cJSON_AddStringToObject(item, "id", instance->id) == NULL) {
    goto fail; //String
    }
     } 


    // instance->name
    if(instance->name) { 
    if(cJSON_AddStringToObject(item, "name", instance->name) == NULL) {
    goto fail; //String
    }
     } 


    // instance->key
    if(instance->key) { 
    if(cJSON_AddStringToObject(item, "key", instance->key) == NULL) {
    goto fail; //String
    }
     } 


    // instance->flavor
    if(instance->flavor) { 
    if(cJSON_AddStringToObject(item, "flavor", instance->flavor) == NULL) {
    goto fail; //String
    }
     } 


    // instance->type
    if(instance->type) { 
    if(cJSON_AddStringToObject(item, "type", instance->type) == NULL) {
    goto fail; //String
    }
     } 


    // instance->project
    if(instance->project) { 
    if(cJSON_AddStringToObject(item, "project", instance->project) == NULL) {
    goto fail; //String
    }
     } 


    // instance->state
    
    cJSON *state_local_JSON = instance_state_convertToJSON(instance->state);
    if(state_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "state", state_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    


    // instance->state_changed
    if(instance->state_changed) { 
    if(cJSON_AddStringToObject(item, "stateChanged", instance->state_changed) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // instance->user_task
    if(instance->user_task) { 
    if(cJSON_AddStringToObject(item, "userTask", instance->user_task) == NULL) {
    goto fail; //String
    }
     } 


    // instance->task_state
    if(instance->task_state) { 
    if(cJSON_AddStringToObject(item, "taskState", instance->task_state) == NULL) {
    goto fail; //String
    }
     } 


    // instance->error
    if(instance->error) { 
    if(cJSON_AddStringToObject(item, "error", instance->error) == NULL) {
    goto fail; //String
    }
     } 


    // instance->boot_options
    if(instance->boot_options) { 
    cJSON *boot_options_local_JSON = instance_boot_options_convertToJSON(instance->boot_options);
    if(boot_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bootOptions", boot_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // instance->service_ip
    if(instance->service_ip) { 
    if(cJSON_AddStringToObject(item, "serviceIp", instance->service_ip) == NULL) {
    goto fail; //String
    }
     } 


    // instance->wifi_ip
    if(instance->wifi_ip) { 
    if(cJSON_AddStringToObject(item, "wifiIp", instance->wifi_ip) == NULL) {
    goto fail; //String
    }
     } 


    // instance->services
    if(instance->services) { 
    cJSON *services_local_JSON = instance_services_convertToJSON(instance->services);
    if(services_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "services", services_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // instance->panicked
    if(instance->panicked) { 
    if(cJSON_AddBoolToObject(item, "panicked", instance->panicked) == NULL) {
    goto fail; //Bool
    }
     } 


    // instance->created
    if(instance->created) { 
    if(cJSON_AddStringToObject(item, "created", instance->created) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // instance->model
    if(instance->model) { 
    if(cJSON_AddStringToObject(item, "model", instance->model) == NULL) {
    goto fail; //String
    }
     } 


    // instance->ipsw
    if(instance->ipsw) { 
    if(cJSON_AddStringToObject(item, "ipsw", instance->ipsw) == NULL) {
    goto fail; //String
    }
     } 


    // instance->os
    if(instance->os) { 
    if(cJSON_AddStringToObject(item, "os", instance->os) == NULL) {
    goto fail; //String
    }
     } 


    // instance->agent
    if(instance->agent) { 
    if(cJSON_AddStringToObject(item, "agent", instance->agent) == NULL) {
    goto fail; //String
    }
     } 


    // instance->netmon
    if(instance->netmon) { 
    cJSON *netmon_local_JSON = instance_netmon_state_convertToJSON(instance->netmon);
    if(netmon_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "netmon", netmon_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // instance->expose_port
    if(instance->expose_port) { 
    if(cJSON_AddStringToObject(item, "exposePort", instance->expose_port) == NULL) {
    goto fail; //String
    }
     } 


    // instance->fault
    if(instance->fault) { 
    if(cJSON_AddBoolToObject(item, "fault", instance->fault) == NULL) {
    goto fail; //Bool
    }
     } 


    // instance->patches
    if(instance->patches) { 
    cJSON *patches = cJSON_AddArrayToObject(item, "patches");
    if(patches == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *patchesListEntry;
    list_ForEach(patchesListEntry, instance->patches) {
    if(cJSON_AddStringToObject(patches, "", (char*)patchesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

instance_t *instance_parseFromJSON(cJSON *instanceJSON){

    instance_t *instance_local_var = NULL;

    // define the local variable for instance->state
    instance_state_t *state_local_nonprim = NULL;

    // define the local variable for instance->boot_options
    instance_boot_options_t *boot_options_local_nonprim = NULL;

    // define the local variable for instance->services
    instance_services_t *services_local_nonprim = NULL;

    // define the local variable for instance->netmon
    instance_netmon_state_t *netmon_local_nonprim = NULL;

    // instance->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(instanceJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }

    // instance->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(instanceJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // instance->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(instanceJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }
    }

    // instance->flavor
    cJSON *flavor = cJSON_GetObjectItemCaseSensitive(instanceJSON, "flavor");
    if (flavor) { 
    if(!cJSON_IsString(flavor))
    {
    goto end; //String
    }
    }

    // instance->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(instanceJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // instance->project
    cJSON *project = cJSON_GetObjectItemCaseSensitive(instanceJSON, "project");
    if (project) { 
    if(!cJSON_IsString(project))
    {
    goto end; //String
    }
    }

    // instance->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(instanceJSON, "state");
    if (state) { 
    state_local_nonprim = instance_state_parseFromJSON(state); //custom
    }

    // instance->state_changed
    cJSON *state_changed = cJSON_GetObjectItemCaseSensitive(instanceJSON, "stateChanged");
    if (state_changed) { 
    if(!cJSON_IsString(state_changed))
    {
    goto end; //DateTime
    }
    }

    // instance->user_task
    cJSON *user_task = cJSON_GetObjectItemCaseSensitive(instanceJSON, "userTask");
    if (user_task) { 
    if(!cJSON_IsString(user_task))
    {
    goto end; //String
    }
    }

    // instance->task_state
    cJSON *task_state = cJSON_GetObjectItemCaseSensitive(instanceJSON, "taskState");
    if (task_state) { 
    if(!cJSON_IsString(task_state))
    {
    goto end; //String
    }
    }

    // instance->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(instanceJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }

    // instance->boot_options
    cJSON *boot_options = cJSON_GetObjectItemCaseSensitive(instanceJSON, "bootOptions");
    if (boot_options) { 
    boot_options_local_nonprim = instance_boot_options_parseFromJSON(boot_options); //nonprimitive
    }

    // instance->service_ip
    cJSON *service_ip = cJSON_GetObjectItemCaseSensitive(instanceJSON, "serviceIp");
    if (service_ip) { 
    if(!cJSON_IsString(service_ip))
    {
    goto end; //String
    }
    }

    // instance->wifi_ip
    cJSON *wifi_ip = cJSON_GetObjectItemCaseSensitive(instanceJSON, "wifiIp");
    if (wifi_ip) { 
    if(!cJSON_IsString(wifi_ip))
    {
    goto end; //String
    }
    }

    // instance->services
    cJSON *services = cJSON_GetObjectItemCaseSensitive(instanceJSON, "services");
    if (services) { 
    services_local_nonprim = instance_services_parseFromJSON(services); //nonprimitive
    }

    // instance->panicked
    cJSON *panicked = cJSON_GetObjectItemCaseSensitive(instanceJSON, "panicked");
    if (panicked) { 
    if(!cJSON_IsBool(panicked))
    {
    goto end; //Bool
    }
    }

    // instance->created
    cJSON *created = cJSON_GetObjectItemCaseSensitive(instanceJSON, "created");
    if (created) { 
    if(!cJSON_IsString(created))
    {
    goto end; //DateTime
    }
    }

    // instance->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(instanceJSON, "model");
    if (model) { 
    if(!cJSON_IsString(model))
    {
    goto end; //String
    }
    }

    // instance->ipsw
    cJSON *ipsw = cJSON_GetObjectItemCaseSensitive(instanceJSON, "ipsw");
    if (ipsw) { 
    if(!cJSON_IsString(ipsw))
    {
    goto end; //String
    }
    }

    // instance->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(instanceJSON, "os");
    if (os) { 
    if(!cJSON_IsString(os))
    {
    goto end; //String
    }
    }

    // instance->agent
    cJSON *agent = cJSON_GetObjectItemCaseSensitive(instanceJSON, "agent");
    if (agent) { 
    if(!cJSON_IsString(agent))
    {
    goto end; //String
    }
    }

    // instance->netmon
    cJSON *netmon = cJSON_GetObjectItemCaseSensitive(instanceJSON, "netmon");
    if (netmon) { 
    netmon_local_nonprim = instance_netmon_state_parseFromJSON(netmon); //nonprimitive
    }

    // instance->expose_port
    cJSON *expose_port = cJSON_GetObjectItemCaseSensitive(instanceJSON, "exposePort");
    if (expose_port) { 
    if(!cJSON_IsString(expose_port))
    {
    goto end; //String
    }
    }

    // instance->fault
    cJSON *fault = cJSON_GetObjectItemCaseSensitive(instanceJSON, "fault");
    if (fault) { 
    if(!cJSON_IsBool(fault))
    {
    goto end; //Bool
    }
    }

    // instance->patches
    cJSON *patches = cJSON_GetObjectItemCaseSensitive(instanceJSON, "patches");
    list_t *patchesList;
    if (patches) { 
    cJSON *patches_local;
    if(!cJSON_IsArray(patches)) {
        goto end;//primitive container
    }
    patchesList = list_createList();

    cJSON_ArrayForEach(patches_local, patches)
    {
        if(!cJSON_IsString(patches_local))
        {
            goto end;
        }
        list_addElement(patchesList , strdup(patches_local->valuestring));
    }
    }


    instance_local_var = instance_create (
        id ? strdup(id->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        key ? strdup(key->valuestring) : NULL,
        flavor ? strdup(flavor->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        project ? strdup(project->valuestring) : NULL,
        state ? state_local_nonprim : NULL,
        state_changed ? strdup(state_changed->valuestring) : NULL,
        user_task ? strdup(user_task->valuestring) : NULL,
        task_state ? strdup(task_state->valuestring) : NULL,
        error ? strdup(error->valuestring) : NULL,
        boot_options ? boot_options_local_nonprim : NULL,
        service_ip ? strdup(service_ip->valuestring) : NULL,
        wifi_ip ? strdup(wifi_ip->valuestring) : NULL,
        services ? services_local_nonprim : NULL,
        panicked ? panicked->valueint : 0,
        created ? strdup(created->valuestring) : NULL,
        model ? strdup(model->valuestring) : NULL,
        ipsw ? strdup(ipsw->valuestring) : NULL,
        os ? strdup(os->valuestring) : NULL,
        agent ? strdup(agent->valuestring) : NULL,
        netmon ? netmon_local_nonprim : NULL,
        expose_port ? strdup(expose_port->valuestring) : NULL,
        fault ? fault->valueint : 0,
        patches ? patchesList : NULL
        );

    return instance_local_var;
end:
    if (state_local_nonprim) {
        instance_state_free(state_local_nonprim);
        state_local_nonprim = NULL;
    }
    if (boot_options_local_nonprim) {
        instance_boot_options_free(boot_options_local_nonprim);
        boot_options_local_nonprim = NULL;
    }
    if (services_local_nonprim) {
        instance_services_free(services_local_nonprim);
        services_local_nonprim = NULL;
    }
    if (netmon_local_nonprim) {
        instance_netmon_state_free(netmon_local_nonprim);
        netmon_local_nonprim = NULL;
    }
    return NULL;

}
