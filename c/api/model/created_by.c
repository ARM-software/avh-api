#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "created_by.h"



static created_by_t *created_by_create_internal(
    char *id,
    char *username,
    char *label,
    int deleted
    ) {
    created_by_t *created_by_local_var = malloc(sizeof(created_by_t));
    if (!created_by_local_var) {
        return NULL;
    }
    created_by_local_var->id = id;
    created_by_local_var->username = username;
    created_by_local_var->label = label;
    created_by_local_var->deleted = deleted;

    created_by_local_var->_library_owned = 1;
    return created_by_local_var;
}

__attribute__((deprecated)) created_by_t *created_by_create(
    char *id,
    char *username,
    char *label,
    int deleted
    ) {
    return created_by_create_internal (
        id,
        username,
        label,
        deleted
        );
}

void created_by_free(created_by_t *created_by) {
    if(NULL == created_by){
        return ;
    }
    if(created_by->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "created_by_free");
        return ;
    }
    listEntry_t *listEntry;
    if (created_by->id) {
        free(created_by->id);
        created_by->id = NULL;
    }
    if (created_by->username) {
        free(created_by->username);
        created_by->username = NULL;
    }
    if (created_by->label) {
        free(created_by->label);
        created_by->label = NULL;
    }
    free(created_by);
}

cJSON *created_by_convertToJSON(created_by_t *created_by) {
    cJSON *item = cJSON_CreateObject();

    // created_by->id
    if(created_by->id) {
    if(cJSON_AddStringToObject(item, "id", created_by->id) == NULL) {
    goto fail; //String
    }
    }


    // created_by->username
    if(created_by->username) {
    if(cJSON_AddStringToObject(item, "username", created_by->username) == NULL) {
    goto fail; //String
    }
    }


    // created_by->label
    if(created_by->label) {
    if(cJSON_AddStringToObject(item, "label", created_by->label) == NULL) {
    goto fail; //String
    }
    }


    // created_by->deleted
    if(created_by->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", created_by->deleted) == NULL) {
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

created_by_t *created_by_parseFromJSON(cJSON *created_byJSON){

    created_by_t *created_by_local_var = NULL;

    // created_by->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(created_byJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }

    // created_by->username
    cJSON *username = cJSON_GetObjectItemCaseSensitive(created_byJSON, "username");
    if (cJSON_IsNull(username)) {
        username = NULL;
    }
    if (username) { 
    if(!cJSON_IsString(username))
    {
    goto end; //String
    }
    }

    // created_by->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(created_byJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label))
    {
    goto end; //String
    }
    }

    // created_by->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(created_byJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }


    created_by_local_var = created_by_create_internal (
        id ? strdup(id->valuestring) : NULL,
        username ? strdup(username->valuestring) : NULL,
        label ? strdup(label->valuestring) : NULL,
        deleted ? deleted->valueint : 0
        );

    return created_by_local_var;
end:
    return NULL;

}
