#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project.h"



project_t *project_create(
    char *id,
    char *name,
    project_settings_t *settings,
    project_quota_t *quotas,
    project_usage_t *quotas_used
    ) {
    project_t *project_local_var = malloc(sizeof(project_t));
    if (!project_local_var) {
        return NULL;
    }
    project_local_var->id = id;
    project_local_var->name = name;
    project_local_var->settings = settings;
    project_local_var->quotas = quotas;
    project_local_var->quotas_used = quotas_used;

    return project_local_var;
}


void project_free(project_t *project) {
    if(NULL == project){
        return ;
    }
    listEntry_t *listEntry;
    if (project->id) {
        free(project->id);
        project->id = NULL;
    }
    if (project->name) {
        free(project->name);
        project->name = NULL;
    }
    if (project->settings) {
        project_settings_free(project->settings);
        project->settings = NULL;
    }
    if (project->quotas) {
        project_quota_free(project->quotas);
        project->quotas = NULL;
    }
    if (project->quotas_used) {
        project_usage_free(project->quotas_used);
        project->quotas_used = NULL;
    }
    free(project);
}

cJSON *project_convertToJSON(project_t *project) {
    cJSON *item = cJSON_CreateObject();

    // project->id
    if (!project->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", project->id) == NULL) {
    goto fail; //String
    }


    // project->name
    if(project->name) { 
    if(cJSON_AddStringToObject(item, "name", project->name) == NULL) {
    goto fail; //String
    }
     } 


    // project->settings
    if(project->settings) { 
    cJSON *settings_local_JSON = project_settings_convertToJSON(project->settings);
    if(settings_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "settings", settings_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // project->quotas
    if(project->quotas) { 
    cJSON *quotas_local_JSON = project_quota_convertToJSON(project->quotas);
    if(quotas_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "quotas", quotas_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // project->quotas_used
    if(project->quotas_used) { 
    cJSON *quotas_used_local_JSON = project_usage_convertToJSON(project->quotas_used);
    if(quotas_used_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "quotasUsed", quotas_used_local_JSON);
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

project_t *project_parseFromJSON(cJSON *projectJSON){

    project_t *project_local_var = NULL;

    // define the local variable for project->settings
    project_settings_t *settings_local_nonprim = NULL;

    // define the local variable for project->quotas
    project_quota_t *quotas_local_nonprim = NULL;

    // define the local variable for project->quotas_used
    project_usage_t *quotas_used_local_nonprim = NULL;

    // project->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(projectJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // project->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(projectJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // project->settings
    cJSON *settings = cJSON_GetObjectItemCaseSensitive(projectJSON, "settings");
    if (settings) { 
    settings_local_nonprim = project_settings_parseFromJSON(settings); //nonprimitive
    }

    // project->quotas
    cJSON *quotas = cJSON_GetObjectItemCaseSensitive(projectJSON, "quotas");
    if (quotas) { 
    quotas_local_nonprim = project_quota_parseFromJSON(quotas); //nonprimitive
    }

    // project->quotas_used
    cJSON *quotas_used = cJSON_GetObjectItemCaseSensitive(projectJSON, "quotasUsed");
    if (quotas_used) { 
    quotas_used_local_nonprim = project_usage_parseFromJSON(quotas_used); //nonprimitive
    }


    project_local_var = project_create (
        strdup(id->valuestring),
        name ? strdup(name->valuestring) : NULL,
        settings ? settings_local_nonprim : NULL,
        quotas ? quotas_local_nonprim : NULL,
        quotas_used ? quotas_used_local_nonprim : NULL
        );

    return project_local_var;
end:
    if (settings_local_nonprim) {
        project_settings_free(settings_local_nonprim);
        settings_local_nonprim = NULL;
    }
    if (quotas_local_nonprim) {
        project_quota_free(quotas_local_nonprim);
        quotas_local_nonprim = NULL;
    }
    if (quotas_used_local_nonprim) {
        project_usage_free(quotas_used_local_nonprim);
        quotas_used_local_nonprim = NULL;
    }
    return NULL;

}
