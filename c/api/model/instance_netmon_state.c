#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_netmon_state.h"



static instance_netmon_state_t *instance_netmon_state_create_internal(
    int enabled
    ) {
    instance_netmon_state_t *instance_netmon_state_local_var = malloc(sizeof(instance_netmon_state_t));
    if (!instance_netmon_state_local_var) {
        return NULL;
    }
    instance_netmon_state_local_var->enabled = enabled;

    instance_netmon_state_local_var->_library_owned = 1;
    return instance_netmon_state_local_var;
}

__attribute__((deprecated)) instance_netmon_state_t *instance_netmon_state_create(
    int enabled
    ) {
    return instance_netmon_state_create_internal (
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
    free(instance_netmon_state);
}

cJSON *instance_netmon_state_convertToJSON(instance_netmon_state_t *instance_netmon_state) {
    cJSON *item = cJSON_CreateObject();

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
        enabled ? enabled->valueint : 0
        );

    return instance_netmon_state_local_var;
end:
    return NULL;

}
