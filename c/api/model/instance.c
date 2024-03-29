#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance.h"



static instance_t *instance_create_internal(
    char *id,
    char *name,
    char *key,
    char *flavor,
    char *type,
    char *project,
    arm_api_instance_state__e state,
    char *state_changed,
    char *started_at,
    char *user_task,
    char *task_state,
    char *error,
    instance_boot_options_t *boot_options,
    char *service_ip,
    char *wifi_ip,
    char *secondary_ip,
    instance_services_t *services,
    int panicked,
    char *created,
    char *model,
    char *fwpackage,
    char *os,
    instance_agent_state_t *agent,
    instance_netmon_state_t *netmon,
    char *expose_port,
    int fault,
    list_t *patches,
    created_by_t *created_by
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
    instance_local_var->started_at = started_at;
    instance_local_var->user_task = user_task;
    instance_local_var->task_state = task_state;
    instance_local_var->error = error;
    instance_local_var->boot_options = boot_options;
    instance_local_var->service_ip = service_ip;
    instance_local_var->wifi_ip = wifi_ip;
    instance_local_var->secondary_ip = secondary_ip;
    instance_local_var->services = services;
    instance_local_var->panicked = panicked;
    instance_local_var->created = created;
    instance_local_var->model = model;
    instance_local_var->fwpackage = fwpackage;
    instance_local_var->os = os;
    instance_local_var->agent = agent;
    instance_local_var->netmon = netmon;
    instance_local_var->expose_port = expose_port;
    instance_local_var->fault = fault;
    instance_local_var->patches = patches;
    instance_local_var->created_by = created_by;

    instance_local_var->_library_owned = 1;
    return instance_local_var;
}

__attribute__((deprecated)) instance_t *instance_create(
    char *id,
    char *name,
    char *key,
    char *flavor,
    char *type,
    char *project,
    arm_api_instance_state__e state,
    char *state_changed,
    char *started_at,
    char *user_task,
    char *task_state,
    char *error,
    instance_boot_options_t *boot_options,
    char *service_ip,
    char *wifi_ip,
    char *secondary_ip,
    instance_services_t *services,
    int panicked,
    char *created,
    char *model,
    char *fwpackage,
    char *os,
    instance_agent_state_t *agent,
    instance_netmon_state_t *netmon,
    char *expose_port,
    int fault,
    list_t *patches,
    created_by_t *created_by
    ) {
    return instance_create_internal (
        id,
        name,
        key,
        flavor,
        type,
        project,
        state,
        state_changed,
        started_at,
        user_task,
        task_state,
        error,
        boot_options,
        service_ip,
        wifi_ip,
        secondary_ip,
        services,
        panicked,
        created,
        model,
        fwpackage,
        os,
        agent,
        netmon,
        expose_port,
        fault,
        patches,
        created_by
        );
}

void instance_free(instance_t *instance) {
    if(NULL == instance){
        return ;
    }
    if(instance->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_free");
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
    if (instance->state_changed) {
        free(instance->state_changed);
        instance->state_changed = NULL;
    }
    if (instance->started_at) {
        free(instance->started_at);
        instance->started_at = NULL;
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
    if (instance->secondary_ip) {
        free(instance->secondary_ip);
        instance->secondary_ip = NULL;
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
    if (instance->fwpackage) {
        free(instance->fwpackage);
        instance->fwpackage = NULL;
    }
    if (instance->os) {
        free(instance->os);
        instance->os = NULL;
    }
    if (instance->agent) {
        instance_agent_state_free(instance->agent);
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
    if (instance->created_by) {
        created_by_free(instance->created_by);
        instance->created_by = NULL;
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
    if(instance->state != arm_api_instance_state__NULL) {
    cJSON *state_local_JSON = instance_state_convertToJSON(instance->state);
    if(state_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "state", state_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // instance->state_changed
    if(instance->state_changed) {
    if(cJSON_AddStringToObject(item, "stateChanged", instance->state_changed) == NULL) {
    goto fail; //Date-Time
    }
    }


    // instance->started_at
    if(instance->started_at) {
    if(cJSON_AddStringToObject(item, "startedAt", instance->started_at) == NULL) {
    goto fail; //String
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


    // instance->secondary_ip
    if(instance->secondary_ip) {
    if(cJSON_AddStringToObject(item, "secondaryIp", instance->secondary_ip) == NULL) {
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


    // instance->fwpackage
    if(instance->fwpackage) {
    if(cJSON_AddStringToObject(item, "fwpackage", instance->fwpackage) == NULL) {
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
    cJSON *agent_local_JSON = instance_agent_state_convertToJSON(instance->agent);
    if(agent_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "agent", agent_local_JSON);
    if(item->child == NULL) {
    goto fail;
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


    // instance->created_by
    if(instance->created_by) {
    cJSON *created_by_local_JSON = created_by_convertToJSON(instance->created_by);
    if(created_by_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "createdBy", created_by_local_JSON);
    if(item->child == NULL) {
    goto fail;
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
    arm_api_instance_state__e state_local_nonprim = 0;

    // define the local variable for instance->boot_options
    instance_boot_options_t *boot_options_local_nonprim = NULL;

    // define the local variable for instance->services
    instance_services_t *services_local_nonprim = NULL;

    // define the local variable for instance->agent
    instance_agent_state_t *agent_local_nonprim = NULL;

    // define the local variable for instance->netmon
    instance_netmon_state_t *netmon_local_nonprim = NULL;

    // define the local list for instance->patches
    list_t *patchesList = NULL;

    // define the local variable for instance->created_by
    created_by_t *created_by_local_nonprim = NULL;

    // instance->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(instanceJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }

    // instance->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(instanceJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // instance->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(instanceJSON, "key");
    if (cJSON_IsNull(key)) {
        key = NULL;
    }
    if (key) { 
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }
    }

    // instance->flavor
    cJSON *flavor = cJSON_GetObjectItemCaseSensitive(instanceJSON, "flavor");
    if (cJSON_IsNull(flavor)) {
        flavor = NULL;
    }
    if (flavor) { 
    if(!cJSON_IsString(flavor))
    {
    goto end; //String
    }
    }

    // instance->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(instanceJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // instance->project
    cJSON *project = cJSON_GetObjectItemCaseSensitive(instanceJSON, "project");
    if (cJSON_IsNull(project)) {
        project = NULL;
    }
    if (project) { 
    if(!cJSON_IsString(project))
    {
    goto end; //String
    }
    }

    // instance->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(instanceJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    state_local_nonprim = instance_state_parseFromJSON(state); //custom
    }

    // instance->state_changed
    cJSON *state_changed = cJSON_GetObjectItemCaseSensitive(instanceJSON, "stateChanged");
    if (cJSON_IsNull(state_changed)) {
        state_changed = NULL;
    }
    if (state_changed) { 
    if(!cJSON_IsString(state_changed))
    {
    goto end; //DateTime
    }
    }

    // instance->started_at
    cJSON *started_at = cJSON_GetObjectItemCaseSensitive(instanceJSON, "startedAt");
    if (cJSON_IsNull(started_at)) {
        started_at = NULL;
    }
    if (started_at) { 
    if(!cJSON_IsString(started_at))
    {
    goto end; //String
    }
    }

    // instance->user_task
    cJSON *user_task = cJSON_GetObjectItemCaseSensitive(instanceJSON, "userTask");
    if (cJSON_IsNull(user_task)) {
        user_task = NULL;
    }
    if (user_task) { 
    if(!cJSON_IsString(user_task))
    {
    goto end; //String
    }
    }

    // instance->task_state
    cJSON *task_state = cJSON_GetObjectItemCaseSensitive(instanceJSON, "taskState");
    if (cJSON_IsNull(task_state)) {
        task_state = NULL;
    }
    if (task_state) { 
    if(!cJSON_IsString(task_state))
    {
    goto end; //String
    }
    }

    // instance->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(instanceJSON, "error");
    if (cJSON_IsNull(error)) {
        error = NULL;
    }
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }

    // instance->boot_options
    cJSON *boot_options = cJSON_GetObjectItemCaseSensitive(instanceJSON, "bootOptions");
    if (cJSON_IsNull(boot_options)) {
        boot_options = NULL;
    }
    if (boot_options) { 
    boot_options_local_nonprim = instance_boot_options_parseFromJSON(boot_options); //nonprimitive
    }

    // instance->service_ip
    cJSON *service_ip = cJSON_GetObjectItemCaseSensitive(instanceJSON, "serviceIp");
    if (cJSON_IsNull(service_ip)) {
        service_ip = NULL;
    }
    if (service_ip) { 
    if(!cJSON_IsString(service_ip))
    {
    goto end; //String
    }
    }

    // instance->wifi_ip
    cJSON *wifi_ip = cJSON_GetObjectItemCaseSensitive(instanceJSON, "wifiIp");
    if (cJSON_IsNull(wifi_ip)) {
        wifi_ip = NULL;
    }
    if (wifi_ip) { 
    if(!cJSON_IsString(wifi_ip))
    {
    goto end; //String
    }
    }

    // instance->secondary_ip
    cJSON *secondary_ip = cJSON_GetObjectItemCaseSensitive(instanceJSON, "secondaryIp");
    if (cJSON_IsNull(secondary_ip)) {
        secondary_ip = NULL;
    }
    if (secondary_ip) { 
    if(!cJSON_IsString(secondary_ip))
    {
    goto end; //String
    }
    }

    // instance->services
    cJSON *services = cJSON_GetObjectItemCaseSensitive(instanceJSON, "services");
    if (cJSON_IsNull(services)) {
        services = NULL;
    }
    if (services) { 
    services_local_nonprim = instance_services_parseFromJSON(services); //nonprimitive
    }

    // instance->panicked
    cJSON *panicked = cJSON_GetObjectItemCaseSensitive(instanceJSON, "panicked");
    if (cJSON_IsNull(panicked)) {
        panicked = NULL;
    }
    if (panicked) { 
    if(!cJSON_IsBool(panicked))
    {
    goto end; //Bool
    }
    }

    // instance->created
    cJSON *created = cJSON_GetObjectItemCaseSensitive(instanceJSON, "created");
    if (cJSON_IsNull(created)) {
        created = NULL;
    }
    if (created) { 
    if(!cJSON_IsString(created))
    {
    goto end; //DateTime
    }
    }

    // instance->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(instanceJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (model) { 
    if(!cJSON_IsString(model))
    {
    goto end; //String
    }
    }

    // instance->fwpackage
    cJSON *fwpackage = cJSON_GetObjectItemCaseSensitive(instanceJSON, "fwpackage");
    if (cJSON_IsNull(fwpackage)) {
        fwpackage = NULL;
    }
    if (fwpackage) { 
    if(!cJSON_IsString(fwpackage))
    {
    goto end; //String
    }
    }

    // instance->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(instanceJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (os) { 
    if(!cJSON_IsString(os))
    {
    goto end; //String
    }
    }

    // instance->agent
    cJSON *agent = cJSON_GetObjectItemCaseSensitive(instanceJSON, "agent");
    if (cJSON_IsNull(agent)) {
        agent = NULL;
    }
    if (agent) { 
    agent_local_nonprim = instance_agent_state_parseFromJSON(agent); //nonprimitive
    }

    // instance->netmon
    cJSON *netmon = cJSON_GetObjectItemCaseSensitive(instanceJSON, "netmon");
    if (cJSON_IsNull(netmon)) {
        netmon = NULL;
    }
    if (netmon) { 
    netmon_local_nonprim = instance_netmon_state_parseFromJSON(netmon); //nonprimitive
    }

    // instance->expose_port
    cJSON *expose_port = cJSON_GetObjectItemCaseSensitive(instanceJSON, "exposePort");
    if (cJSON_IsNull(expose_port)) {
        expose_port = NULL;
    }
    if (expose_port) { 
    if(!cJSON_IsString(expose_port))
    {
    goto end; //String
    }
    }

    // instance->fault
    cJSON *fault = cJSON_GetObjectItemCaseSensitive(instanceJSON, "fault");
    if (cJSON_IsNull(fault)) {
        fault = NULL;
    }
    if (fault) { 
    if(!cJSON_IsBool(fault))
    {
    goto end; //Bool
    }
    }

    // instance->patches
    cJSON *patches = cJSON_GetObjectItemCaseSensitive(instanceJSON, "patches");
    if (cJSON_IsNull(patches)) {
        patches = NULL;
    }
    if (patches) { 
    cJSON *patches_local = NULL;
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

    // instance->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(instanceJSON, "createdBy");
    if (cJSON_IsNull(created_by)) {
        created_by = NULL;
    }
    if (created_by) { 
    created_by_local_nonprim = created_by_parseFromJSON(created_by); //nonprimitive
    }


    instance_local_var = instance_create_internal (
        id ? strdup(id->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        key ? strdup(key->valuestring) : NULL,
        flavor ? strdup(flavor->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        project ? strdup(project->valuestring) : NULL,
        state ? state_local_nonprim : 0,
        state_changed ? strdup(state_changed->valuestring) : NULL,
        started_at ? strdup(started_at->valuestring) : NULL,
        user_task ? strdup(user_task->valuestring) : NULL,
        task_state ? strdup(task_state->valuestring) : NULL,
        error ? strdup(error->valuestring) : NULL,
        boot_options ? boot_options_local_nonprim : NULL,
        service_ip ? strdup(service_ip->valuestring) : NULL,
        wifi_ip ? strdup(wifi_ip->valuestring) : NULL,
        secondary_ip ? strdup(secondary_ip->valuestring) : NULL,
        services ? services_local_nonprim : NULL,
        panicked ? panicked->valueint : 0,
        created ? strdup(created->valuestring) : NULL,
        model ? strdup(model->valuestring) : NULL,
        fwpackage ? strdup(fwpackage->valuestring) : NULL,
        os ? strdup(os->valuestring) : NULL,
        agent ? agent_local_nonprim : NULL,
        netmon ? netmon_local_nonprim : NULL,
        expose_port ? strdup(expose_port->valuestring) : NULL,
        fault ? fault->valueint : 0,
        patches ? patchesList : NULL,
        created_by ? created_by_local_nonprim : NULL
        );

    return instance_local_var;
end:
    if (state_local_nonprim) {
        state_local_nonprim = 0;
    }
    if (boot_options_local_nonprim) {
        instance_boot_options_free(boot_options_local_nonprim);
        boot_options_local_nonprim = NULL;
    }
    if (services_local_nonprim) {
        instance_services_free(services_local_nonprim);
        services_local_nonprim = NULL;
    }
    if (agent_local_nonprim) {
        instance_agent_state_free(agent_local_nonprim);
        agent_local_nonprim = NULL;
    }
    if (netmon_local_nonprim) {
        instance_netmon_state_free(netmon_local_nonprim);
        netmon_local_nonprim = NULL;
    }
    if (patchesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, patchesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(patchesList);
        patchesList = NULL;
    }
    if (created_by_local_nonprim) {
        created_by_free(created_by_local_nonprim);
        created_by_local_nonprim = NULL;
    }
    return NULL;

}
