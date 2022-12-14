#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_agent_state.h"



static instance_agent_state_t *instance_agent_state_create_internal(
    char *hash,
    char *info
    ) {
    instance_agent_state_t *instance_agent_state_local_var = malloc(sizeof(instance_agent_state_t));
    if (!instance_agent_state_local_var) {
        return NULL;
    }
    instance_agent_state_local_var->hash = hash;
    instance_agent_state_local_var->info = info;

    instance_agent_state_local_var->_library_owned = 1;
    return instance_agent_state_local_var;
}

__attribute__((deprecated)) instance_agent_state_t *instance_agent_state_create(
    char *hash,
    char *info
    ) {
    return instance_agent_state_create_internal (
        hash,
        info
        );
}

void instance_agent_state_free(instance_agent_state_t *instance_agent_state) {
    if(NULL == instance_agent_state){
        return ;
    }
    if(instance_agent_state->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_agent_state_free");
        return ;
    }
    listEntry_t *listEntry;
    if (instance_agent_state->hash) {
        free(instance_agent_state->hash);
        instance_agent_state->hash = NULL;
    }
    if (instance_agent_state->info) {
        free(instance_agent_state->info);
        instance_agent_state->info = NULL;
    }
    free(instance_agent_state);
}

cJSON *instance_agent_state_convertToJSON(instance_agent_state_t *instance_agent_state) {
    cJSON *item = cJSON_CreateObject();

    // instance_agent_state->hash
    if(instance_agent_state->hash) {
    if(cJSON_AddStringToObject(item, "hash", instance_agent_state->hash) == NULL) {
    goto fail; //String
    }
    }


    // instance_agent_state->info
    if(instance_agent_state->info) {
    if(cJSON_AddStringToObject(item, "info", instance_agent_state->info) == NULL) {
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

instance_agent_state_t *instance_agent_state_parseFromJSON(cJSON *instance_agent_stateJSON){

    instance_agent_state_t *instance_agent_state_local_var = NULL;

    // instance_agent_state->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(instance_agent_stateJSON, "hash");
    if (cJSON_IsNull(hash)) {
        hash = NULL;
    }
    if (hash) { 
    if(!cJSON_IsString(hash))
    {
    goto end; //String
    }
    }

    // instance_agent_state->info
    cJSON *info = cJSON_GetObjectItemCaseSensitive(instance_agent_stateJSON, "info");
    if (cJSON_IsNull(info)) {
        info = NULL;
    }
    if (info) { 
    if(!cJSON_IsString(info))
    {
    goto end; //String
    }
    }


    instance_agent_state_local_var = instance_agent_state_create_internal (
        hash ? strdup(hash->valuestring) : NULL,
        info ? strdup(info->valuestring) : NULL
        );

    return instance_agent_state_local_var;
end:
    return NULL;

}
