#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_netmon_state.h"



static instance_netmon_state_t *instance_netmon_state_create_internal(
    char *hash,
    char *info,
    int enabled
    ) {
    instance_netmon_state_t *instance_netmon_state_local_var = malloc(sizeof(instance_netmon_state_t));
    if (!instance_netmon_state_local_var) {
        return NULL;
    }
    instance_netmon_state_local_var->hash = hash;
    instance_netmon_state_local_var->info = info;
    instance_netmon_state_local_var->enabled = enabled;

    instance_netmon_state_local_var->_library_owned = 1;
    return instance_netmon_state_local_var;
}

__attribute__((deprecated)) instance_netmon_state_t *instance_netmon_state_create(
    char *hash,
    char *info,
    int enabled
    ) {
    return instance_netmon_state_create_internal (
        hash,
        info,
        enabled
        );
}

void instance_netmon_state_free(instance_netmon_state_t *instance_netmon_state) {
    if(NULL == instance_netmon_state){
        return ;
    }
    if(instance_netmon_state->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_netmon_state_free");
        return ;
    }
    listEntry_t *listEntry;
    if (instance_netmon_state->hash) {
        free(instance_netmon_state->hash);
        instance_netmon_state->hash = NULL;
    }
    if (instance_netmon_state->info) {
        free(instance_netmon_state->info);
        instance_netmon_state->info = NULL;
    }
    free(instance_netmon_state);
}

cJSON *instance_netmon_state_convertToJSON(instance_netmon_state_t *instance_netmon_state) {
    cJSON *item = cJSON_CreateObject();

    // instance_netmon_state->hash
    if(instance_netmon_state->hash) {
    if(cJSON_AddStringToObject(item, "hash", instance_netmon_state->hash) == NULL) {
    goto fail; //String
    }
    }


    // instance_netmon_state->info
    if(instance_netmon_state->info) {
    if(cJSON_AddStringToObject(item, "info", instance_netmon_state->info) == NULL) {
    goto fail; //String
    }
    }


    // instance_netmon_state->enabled
    if(instance_netmon_state->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", instance_netmon_state->enabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

instance_netmon_state_t *instance_netmon_state_parseFromJSON(cJSON *instance_netmon_stateJSON){

    instance_netmon_state_t *instance_netmon_state_local_var = NULL;

    // instance_netmon_state->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(instance_netmon_stateJSON, "hash");
    if (cJSON_IsNull(hash)) {
        hash = NULL;
    }
    if (hash) { 
    if(!cJSON_IsString(hash))
    {
    goto end; //String
    }
    }

    // instance_netmon_state->info
    cJSON *info = cJSON_GetObjectItemCaseSensitive(instance_netmon_stateJSON, "info");
    if (cJSON_IsNull(info)) {
        info = NULL;
    }
    if (info) { 
    if(!cJSON_IsString(info))
    {
    goto end; //String
    }
    }

    // instance_netmon_state->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(instance_netmon_stateJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    instance_netmon_state_local_var = instance_netmon_state_create_internal (
        hash ? strdup(hash->valuestring) : NULL,
        info ? strdup(info->valuestring) : NULL,
        enabled ? enabled->valueint : 0
        );

    return instance_netmon_state_local_var;
end:
    return NULL;

}
