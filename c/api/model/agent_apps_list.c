#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_apps_list.h"



static agent_apps_list_t *agent_apps_list_create_internal(
    list_t *apps,
    char *frontmost
    ) {
    agent_apps_list_t *agent_apps_list_local_var = malloc(sizeof(agent_apps_list_t));
    if (!agent_apps_list_local_var) {
        return NULL;
    }
    agent_apps_list_local_var->apps = apps;
    agent_apps_list_local_var->frontmost = frontmost;

    agent_apps_list_local_var->_library_owned = 1;
    return agent_apps_list_local_var;
}

__attribute__((deprecated)) agent_apps_list_t *agent_apps_list_create(
    list_t *apps,
    char *frontmost
    ) {
    return agent_apps_list_create_internal (
        apps,
        frontmost
        );
}

void agent_apps_list_free(agent_apps_list_t *agent_apps_list) {
    if(NULL == agent_apps_list){
        return ;
    }
    if(agent_apps_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_apps_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_apps_list->apps) {
        list_ForEach(listEntry, agent_apps_list->apps) {
            agent_app_free(listEntry->data);
        }
        list_freeList(agent_apps_list->apps);
        agent_apps_list->apps = NULL;
    }
    if (agent_apps_list->frontmost) {
        free(agent_apps_list->frontmost);
        agent_apps_list->frontmost = NULL;
    }
    free(agent_apps_list);
}

cJSON *agent_apps_list_convertToJSON(agent_apps_list_t *agent_apps_list) {
    cJSON *item = cJSON_CreateObject();

    // agent_apps_list->apps
    if(agent_apps_list->apps) {
    cJSON *apps = cJSON_AddArrayToObject(item, "apps");
    if(apps == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *appsListEntry;
    if (agent_apps_list->apps) {
    list_ForEach(appsListEntry, agent_apps_list->apps) {
    cJSON *itemLocal = agent_app_convertToJSON(appsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(apps, itemLocal);
    }
    }
    }


    // agent_apps_list->frontmost
    if(agent_apps_list->frontmost) {
    if(cJSON_AddStringToObject(item, "frontmost", agent_apps_list->frontmost) == NULL) {
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

agent_apps_list_t *agent_apps_list_parseFromJSON(cJSON *agent_apps_listJSON){

    agent_apps_list_t *agent_apps_list_local_var = NULL;

    // define the local list for agent_apps_list->apps
    list_t *appsList = NULL;

    // agent_apps_list->apps
    cJSON *apps = cJSON_GetObjectItemCaseSensitive(agent_apps_listJSON, "apps");
    if (cJSON_IsNull(apps)) {
        apps = NULL;
    }
    if (apps) { 
    cJSON *apps_local_nonprimitive = NULL;
    if(!cJSON_IsArray(apps)){
        goto end; //nonprimitive container
    }

    appsList = list_createList();

    cJSON_ArrayForEach(apps_local_nonprimitive,apps )
    {
        if(!cJSON_IsObject(apps_local_nonprimitive)){
            goto end;
        }
        agent_app_t *appsItem = agent_app_parseFromJSON(apps_local_nonprimitive);

        list_addElement(appsList, appsItem);
    }
    }

    // agent_apps_list->frontmost
    cJSON *frontmost = cJSON_GetObjectItemCaseSensitive(agent_apps_listJSON, "frontmost");
    if (cJSON_IsNull(frontmost)) {
        frontmost = NULL;
    }
    if (frontmost) { 
    if(!cJSON_IsString(frontmost))
    {
    goto end; //String
    }
    }


    agent_apps_list_local_var = agent_apps_list_create_internal (
        apps ? appsList : NULL,
        frontmost ? strdup(frontmost->valuestring) : NULL
        );

    return agent_apps_list_local_var;
end:
    if (appsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, appsList) {
            agent_app_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(appsList);
        appsList = NULL;
    }
    return NULL;

}
