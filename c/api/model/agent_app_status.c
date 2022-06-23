#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_app_status.h"



static agent_app_status_t *agent_app_status_create_internal(
    int running,
    char *bundle_id
    ) {
    agent_app_status_t *agent_app_status_local_var = malloc(sizeof(agent_app_status_t));
    if (!agent_app_status_local_var) {
        return NULL;
    }
    agent_app_status_local_var->running = running;
    agent_app_status_local_var->bundle_id = bundle_id;

    agent_app_status_local_var->_library_owned = 1;
    return agent_app_status_local_var;
}

__attribute__((deprecated)) agent_app_status_t *agent_app_status_create(
    int running,
    char *bundle_id
    ) {
    return agent_app_status_create_internal (
        running,
        bundle_id
        );
}

void agent_app_status_free(agent_app_status_t *agent_app_status) {
    if(NULL == agent_app_status){
        return ;
    }
    if(agent_app_status->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_app_status_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_app_status->bundle_id) {
        free(agent_app_status->bundle_id);
        agent_app_status->bundle_id = NULL;
    }
    free(agent_app_status);
}

cJSON *agent_app_status_convertToJSON(agent_app_status_t *agent_app_status) {
    cJSON *item = cJSON_CreateObject();

    // agent_app_status->running
    if(agent_app_status->running) {
    if(cJSON_AddBoolToObject(item, "running", agent_app_status->running) == NULL) {
    goto fail; //Bool
    }
    }


    // agent_app_status->bundle_id
    if(agent_app_status->bundle_id) {
    if(cJSON_AddStringToObject(item, "bundleID", agent_app_status->bundle_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_app_status_t *agent_app_status_parseFromJSON(cJSON *agent_app_statusJSON){

    agent_app_status_t *agent_app_status_local_var = NULL;

    // agent_app_status->running
    cJSON *running = cJSON_GetObjectItemCaseSensitive(agent_app_statusJSON, "running");
    if (cJSON_IsNull(running)) {
        running = NULL;
    }
    if (running) { 
    if(!cJSON_IsBool(running))
    {
    goto end; //Bool
    }
    }

    // agent_app_status->bundle_id
    cJSON *bundle_id = cJSON_GetObjectItemCaseSensitive(agent_app_statusJSON, "bundleID");
    if (cJSON_IsNull(bundle_id)) {
        bundle_id = NULL;
    }
    if (bundle_id) { 
    if(!cJSON_IsString(bundle_id))
    {
    goto end; //String
    }
    }


    agent_app_status_local_var = agent_app_status_create_internal (
        running ? running->valueint : 0,
        bundle_id ? strdup(bundle_id->valuestring) : NULL
        );

    return agent_app_status_local_var;
end:
    return NULL;

}
