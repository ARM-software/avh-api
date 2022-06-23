#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_key.h"


char* kindproject_key_ToString(arm_api_project_key_KIND_e kind) {
    char* kindArray[] =  { "NULL", "ssh", "adb" };
	return kindArray[kind];
}

arm_api_project_key_KIND_e kindproject_key_FromString(char* kind){
    int stringToReturn = 0;
    char *kindArray[] =  { "NULL", "ssh", "adb" };
    size_t sizeofArray = sizeof(kindArray) / sizeof(kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(kind, kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static project_key_t *project_key_create_internal(
    char *identifier,
    arm_api_project_key_KIND_e kind,
    char *project,
    char *key,
    char *fingerprint,
    char *updated_at,
    char *created_at
    ) {
    project_key_t *project_key_local_var = malloc(sizeof(project_key_t));
    if (!project_key_local_var) {
        return NULL;
    }
    project_key_local_var->identifier = identifier;
    project_key_local_var->kind = kind;
    project_key_local_var->project = project;
    project_key_local_var->key = key;
    project_key_local_var->fingerprint = fingerprint;
    project_key_local_var->updated_at = updated_at;
    project_key_local_var->created_at = created_at;

    project_key_local_var->_library_owned = 1;
    return project_key_local_var;
}

__attribute__((deprecated)) project_key_t *project_key_create(
    char *identifier,
    arm_api_project_key_KIND_e kind,
    char *project,
    char *key,
    char *fingerprint,
    char *updated_at,
    char *created_at
    ) {
    return project_key_create_internal (
        identifier,
        kind,
        project,
        key,
        fingerprint,
        updated_at,
        created_at
        );
}

void project_key_free(project_key_t *project_key) {
    if(NULL == project_key){
        return ;
    }
    if(project_key->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "project_key_free");
        return ;
    }
    listEntry_t *listEntry;
    if (project_key->identifier) {
        free(project_key->identifier);
        project_key->identifier = NULL;
    }
    if (project_key->project) {
        free(project_key->project);
        project_key->project = NULL;
    }
    if (project_key->key) {
        free(project_key->key);
        project_key->key = NULL;
    }
    if (project_key->fingerprint) {
        free(project_key->fingerprint);
        project_key->fingerprint = NULL;
    }
    if (project_key->updated_at) {
        free(project_key->updated_at);
        project_key->updated_at = NULL;
    }
    if (project_key->created_at) {
        free(project_key->created_at);
        project_key->created_at = NULL;
    }
    free(project_key);
}

cJSON *project_key_convertToJSON(project_key_t *project_key) {
    cJSON *item = cJSON_CreateObject();

    // project_key->identifier
    if(project_key->identifier) {
    if(cJSON_AddStringToObject(item, "identifier", project_key->identifier) == NULL) {
    goto fail; //String
    }
    }


    // project_key->kind
    if (arm_api_project_key_KIND_NULL == project_key->kind) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "kind", kindproject_key_ToString(project_key->kind)) == NULL)
    {
    goto fail; //Enum
    }


    // project_key->project
    if(project_key->project) {
    if(cJSON_AddStringToObject(item, "project", project_key->project) == NULL) {
    goto fail; //String
    }
    }


    // project_key->key
    if (!project_key->key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "key", project_key->key) == NULL) {
    goto fail; //String
    }


    // project_key->fingerprint
    if(project_key->fingerprint) {
    if(cJSON_AddStringToObject(item, "fingerprint", project_key->fingerprint) == NULL) {
    goto fail; //String
    }
    }


    // project_key->updated_at
    if(project_key->updated_at) {
    if(cJSON_AddStringToObject(item, "updatedAt", project_key->updated_at) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_key->created_at
    if(project_key->created_at) {
    if(cJSON_AddStringToObject(item, "createdAt", project_key->created_at) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

project_key_t *project_key_parseFromJSON(cJSON *project_keyJSON){

    project_key_t *project_key_local_var = NULL;

    // project_key->identifier
    cJSON *identifier = cJSON_GetObjectItemCaseSensitive(project_keyJSON, "identifier");
    if (cJSON_IsNull(identifier)) {
        identifier = NULL;
    }
    if (identifier) { 
    if(!cJSON_IsString(identifier))
    {
    goto end; //String
    }
    }

    // project_key->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(project_keyJSON, "kind");
    if (cJSON_IsNull(kind)) {
        kind = NULL;
    }
    if (!kind) {
        goto end;
    }

    arm_api_project_key_KIND_e kindVariable;
    
    if(!cJSON_IsString(kind))
    {
    goto end; //Enum
    }
    kindVariable = kindproject_key_FromString(kind->valuestring);

    // project_key->project
    cJSON *project = cJSON_GetObjectItemCaseSensitive(project_keyJSON, "project");
    if (cJSON_IsNull(project)) {
        project = NULL;
    }
    if (project) { 
    if(!cJSON_IsString(project))
    {
    goto end; //String
    }
    }

    // project_key->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(project_keyJSON, "key");
    if (cJSON_IsNull(key)) {
        key = NULL;
    }
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // project_key->fingerprint
    cJSON *fingerprint = cJSON_GetObjectItemCaseSensitive(project_keyJSON, "fingerprint");
    if (cJSON_IsNull(fingerprint)) {
        fingerprint = NULL;
    }
    if (fingerprint) { 
    if(!cJSON_IsString(fingerprint))
    {
    goto end; //String
    }
    }

    // project_key->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(project_keyJSON, "updatedAt");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (updated_at) { 
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }
    }

    // project_key->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(project_keyJSON, "createdAt");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }
    }


    project_key_local_var = project_key_create_internal (
        identifier ? strdup(identifier->valuestring) : NULL,
        kindVariable,
        project ? strdup(project->valuestring) : NULL,
        strdup(key->valuestring),
        fingerprint ? strdup(fingerprint->valuestring) : NULL,
        updated_at ? strdup(updated_at->valuestring) : NULL,
        created_at ? strdup(created_at->valuestring) : NULL
        );

    return project_key_local_var;
end:
    return NULL;

}
