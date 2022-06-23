#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_app.h"



static agent_app_t *agent_app_create_internal(
    list_t *tags,
    int running,
    int disk_usage,
    int date,
    char *application_type,
    char *name,
    char *bundle_id
    ) {
    agent_app_t *agent_app_local_var = malloc(sizeof(agent_app_t));
    if (!agent_app_local_var) {
        return NULL;
    }
    agent_app_local_var->tags = tags;
    agent_app_local_var->running = running;
    agent_app_local_var->disk_usage = disk_usage;
    agent_app_local_var->date = date;
    agent_app_local_var->application_type = application_type;
    agent_app_local_var->name = name;
    agent_app_local_var->bundle_id = bundle_id;

    agent_app_local_var->_library_owned = 1;
    return agent_app_local_var;
}

__attribute__((deprecated)) agent_app_t *agent_app_create(
    list_t *tags,
    int running,
    int disk_usage,
    int date,
    char *application_type,
    char *name,
    char *bundle_id
    ) {
    return agent_app_create_internal (
        tags,
        running,
        disk_usage,
        date,
        application_type,
        name,
        bundle_id
        );
}

void agent_app_free(agent_app_t *agent_app) {
    if(NULL == agent_app){
        return ;
    }
    if(agent_app->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_app_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_app->tags) {
        list_ForEach(listEntry, agent_app->tags) {
            free(listEntry->data);
        }
        list_freeList(agent_app->tags);
        agent_app->tags = NULL;
    }
    if (agent_app->application_type) {
        free(agent_app->application_type);
        agent_app->application_type = NULL;
    }
    if (agent_app->name) {
        free(agent_app->name);
        agent_app->name = NULL;
    }
    if (agent_app->bundle_id) {
        free(agent_app->bundle_id);
        agent_app->bundle_id = NULL;
    }
    free(agent_app);
}

cJSON *agent_app_convertToJSON(agent_app_t *agent_app) {
    cJSON *item = cJSON_CreateObject();

    // agent_app->tags
    if(agent_app->tags) {
    cJSON *tags = cJSON_AddArrayToObject(item, "tags");
    if(tags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *tagsListEntry;
    list_ForEach(tagsListEntry, agent_app->tags) {
    if(cJSON_AddStringToObject(tags, "", (char*)tagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // agent_app->running
    if(agent_app->running) {
    if(cJSON_AddBoolToObject(item, "running", agent_app->running) == NULL) {
    goto fail; //Bool
    }
    }


    // agent_app->disk_usage
    if(agent_app->disk_usage) {
    if(cJSON_AddNumberToObject(item, "diskUsage", agent_app->disk_usage) == NULL) {
    goto fail; //Numeric
    }
    }


    // agent_app->date
    if(agent_app->date) {
    if(cJSON_AddNumberToObject(item, "Date", agent_app->date) == NULL) {
    goto fail; //Numeric
    }
    }


    // agent_app->application_type
    if(agent_app->application_type) {
    if(cJSON_AddStringToObject(item, "applicationType", agent_app->application_type) == NULL) {
    goto fail; //String
    }
    }


    // agent_app->name
    if(agent_app->name) {
    if(cJSON_AddStringToObject(item, "name", agent_app->name) == NULL) {
    goto fail; //String
    }
    }


    // agent_app->bundle_id
    if(agent_app->bundle_id) {
    if(cJSON_AddStringToObject(item, "bundleID", agent_app->bundle_id) == NULL) {
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

agent_app_t *agent_app_parseFromJSON(cJSON *agent_appJSON){

    agent_app_t *agent_app_local_var = NULL;

    // define the local list for agent_app->tags
    list_t *tagsList = NULL;

    // agent_app->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(agent_appJSON, "tags");
    if (cJSON_IsNull(tags)) {
        tags = NULL;
    }
    if (tags) { 
    cJSON *tags_local = NULL;
    if(!cJSON_IsArray(tags)) {
        goto end;//primitive container
    }
    tagsList = list_createList();

    cJSON_ArrayForEach(tags_local, tags)
    {
        if(!cJSON_IsString(tags_local))
        {
            goto end;
        }
        list_addElement(tagsList , strdup(tags_local->valuestring));
    }
    }

    // agent_app->running
    cJSON *running = cJSON_GetObjectItemCaseSensitive(agent_appJSON, "running");
    if (cJSON_IsNull(running)) {
        running = NULL;
    }
    if (running) { 
    if(!cJSON_IsBool(running))
    {
    goto end; //Bool
    }
    }

    // agent_app->disk_usage
    cJSON *disk_usage = cJSON_GetObjectItemCaseSensitive(agent_appJSON, "diskUsage");
    if (cJSON_IsNull(disk_usage)) {
        disk_usage = NULL;
    }
    if (disk_usage) { 
    if(!cJSON_IsNumber(disk_usage))
    {
    goto end; //Numeric
    }
    }

    // agent_app->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(agent_appJSON, "Date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsNumber(date))
    {
    goto end; //Numeric
    }
    }

    // agent_app->application_type
    cJSON *application_type = cJSON_GetObjectItemCaseSensitive(agent_appJSON, "applicationType");
    if (cJSON_IsNull(application_type)) {
        application_type = NULL;
    }
    if (application_type) { 
    if(!cJSON_IsString(application_type))
    {
    goto end; //String
    }
    }

    // agent_app->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(agent_appJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // agent_app->bundle_id
    cJSON *bundle_id = cJSON_GetObjectItemCaseSensitive(agent_appJSON, "bundleID");
    if (cJSON_IsNull(bundle_id)) {
        bundle_id = NULL;
    }
    if (bundle_id) { 
    if(!cJSON_IsString(bundle_id))
    {
    goto end; //String
    }
    }


    agent_app_local_var = agent_app_create_internal (
        tags ? tagsList : NULL,
        running ? running->valueint : 0,
        disk_usage ? disk_usage->valuedouble : 0,
        date ? date->valuedouble : 0,
        application_type ? strdup(application_type->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        bundle_id ? strdup(bundle_id->valuestring) : NULL
        );

    return agent_app_local_var;
end:
    if (tagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tagsList);
        tagsList = NULL;
    }
    return NULL;

}
