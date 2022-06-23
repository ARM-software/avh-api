#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_app_ready_response.h"



static agent_app_ready_response_t *agent_app_ready_response_create_internal(
    int ready
    ) {
    agent_app_ready_response_t *agent_app_ready_response_local_var = malloc(sizeof(agent_app_ready_response_t));
    if (!agent_app_ready_response_local_var) {
        return NULL;
    }
    agent_app_ready_response_local_var->ready = ready;

    agent_app_ready_response_local_var->_library_owned = 1;
    return agent_app_ready_response_local_var;
}

__attribute__((deprecated)) agent_app_ready_response_t *agent_app_ready_response_create(
    int ready
    ) {
    return agent_app_ready_response_create_internal (
        ready
        );
}

void agent_app_ready_response_free(agent_app_ready_response_t *agent_app_ready_response) {
    if(NULL == agent_app_ready_response){
        return ;
    }
    if(agent_app_ready_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_app_ready_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(agent_app_ready_response);
}

cJSON *agent_app_ready_response_convertToJSON(agent_app_ready_response_t *agent_app_ready_response) {
    cJSON *item = cJSON_CreateObject();

    // agent_app_ready_response->ready
    if (!agent_app_ready_response->ready) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "ready", agent_app_ready_response->ready) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_app_ready_response_t *agent_app_ready_response_parseFromJSON(cJSON *agent_app_ready_responseJSON){

    agent_app_ready_response_t *agent_app_ready_response_local_var = NULL;

    // agent_app_ready_response->ready
    cJSON *ready = cJSON_GetObjectItemCaseSensitive(agent_app_ready_responseJSON, "ready");
    if (cJSON_IsNull(ready)) {
        ready = NULL;
    }
    if (!ready) {
        goto end;
    }

    
    if(!cJSON_IsBool(ready))
    {
    goto end; //Bool
    }


    agent_app_ready_response_local_var = agent_app_ready_response_create_internal (
        ready->valueint
        );

    return agent_app_ready_response_local_var;
end:
    return NULL;

}
