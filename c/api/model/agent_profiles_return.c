#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_profiles_return.h"



static agent_profiles_return_t *agent_profiles_return_create_internal(
    list_t *profiles
    ) {
    agent_profiles_return_t *agent_profiles_return_local_var = malloc(sizeof(agent_profiles_return_t));
    if (!agent_profiles_return_local_var) {
        return NULL;
    }
    agent_profiles_return_local_var->profiles = profiles;

    agent_profiles_return_local_var->_library_owned = 1;
    return agent_profiles_return_local_var;
}

__attribute__((deprecated)) agent_profiles_return_t *agent_profiles_return_create(
    list_t *profiles
    ) {
    return agent_profiles_return_create_internal (
        profiles
        );
}

void agent_profiles_return_free(agent_profiles_return_t *agent_profiles_return) {
    if(NULL == agent_profiles_return){
        return ;
    }
    if(agent_profiles_return->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_profiles_return_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_profiles_return->profiles) {
        list_ForEach(listEntry, agent_profiles_return->profiles) {
            free(listEntry->data);
        }
        list_freeList(agent_profiles_return->profiles);
        agent_profiles_return->profiles = NULL;
    }
    free(agent_profiles_return);
}

cJSON *agent_profiles_return_convertToJSON(agent_profiles_return_t *agent_profiles_return) {
    cJSON *item = cJSON_CreateObject();

    // agent_profiles_return->profiles
    if (!agent_profiles_return->profiles) {
        goto fail;
    }
    cJSON *profiles = cJSON_AddArrayToObject(item, "profiles");
    if(profiles == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *profilesListEntry;
    list_ForEach(profilesListEntry, agent_profiles_return->profiles) {
    if(cJSON_AddStringToObject(profiles, "", (char*)profilesListEntry->data) == NULL)
    {
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

agent_profiles_return_t *agent_profiles_return_parseFromJSON(cJSON *agent_profiles_returnJSON){

    agent_profiles_return_t *agent_profiles_return_local_var = NULL;

    // define the local list for agent_profiles_return->profiles
    list_t *profilesList = NULL;

    // agent_profiles_return->profiles
    cJSON *profiles = cJSON_GetObjectItemCaseSensitive(agent_profiles_returnJSON, "profiles");
    if (cJSON_IsNull(profiles)) {
        profiles = NULL;
    }
    if (!profiles) {
        goto end;
    }

    
    cJSON *profiles_local = NULL;
    if(!cJSON_IsArray(profiles)) {
        goto end;//primitive container
    }
    profilesList = list_createList();

    cJSON_ArrayForEach(profiles_local, profiles)
    {
        if(!cJSON_IsString(profiles_local))
        {
            goto end;
        }
        list_addElement(profilesList , strdup(profiles_local->valuestring));
    }


    agent_profiles_return_local_var = agent_profiles_return_create_internal (
        profilesList
        );

    return agent_profiles_return_local_var;
end:
    if (profilesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, profilesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(profilesList);
        profilesList = NULL;
    }
    return NULL;

}
