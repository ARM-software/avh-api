#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_system_adb_auth.h"



static agent_system_adb_auth_t *agent_system_adb_auth_create_internal(
    int enabled
    ) {
    agent_system_adb_auth_t *agent_system_adb_auth_local_var = malloc(sizeof(agent_system_adb_auth_t));
    if (!agent_system_adb_auth_local_var) {
        return NULL;
    }
    agent_system_adb_auth_local_var->enabled = enabled;

    agent_system_adb_auth_local_var->_library_owned = 1;
    return agent_system_adb_auth_local_var;
}

__attribute__((deprecated)) agent_system_adb_auth_t *agent_system_adb_auth_create(
    int enabled
    ) {
    return agent_system_adb_auth_create_internal (
        enabled
        );
}

void agent_system_adb_auth_free(agent_system_adb_auth_t *agent_system_adb_auth) {
    if(NULL == agent_system_adb_auth){
        return ;
    }
    if(agent_system_adb_auth->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_system_adb_auth_free");
        return ;
    }
    listEntry_t *listEntry;
    free(agent_system_adb_auth);
}

cJSON *agent_system_adb_auth_convertToJSON(agent_system_adb_auth_t *agent_system_adb_auth) {
    cJSON *item = cJSON_CreateObject();

    // agent_system_adb_auth->enabled
    if(agent_system_adb_auth->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", agent_system_adb_auth->enabled) == NULL) {
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

agent_system_adb_auth_t *agent_system_adb_auth_parseFromJSON(cJSON *agent_system_adb_authJSON){

    agent_system_adb_auth_t *agent_system_adb_auth_local_var = NULL;

    // agent_system_adb_auth->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(agent_system_adb_authJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    agent_system_adb_auth_local_var = agent_system_adb_auth_create_internal (
        enabled ? enabled->valueint : 0
        );

    return agent_system_adb_auth_local_var;
end:
    return NULL;

}
