#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "file_changes.h"



static file_changes_t *file_changes_create_internal(
    char *path,
    double mode,
    double uid,
    double gid
    ) {
    file_changes_t *file_changes_local_var = malloc(sizeof(file_changes_t));
    if (!file_changes_local_var) {
        return NULL;
    }
    file_changes_local_var->path = path;
    file_changes_local_var->mode = mode;
    file_changes_local_var->uid = uid;
    file_changes_local_var->gid = gid;

    file_changes_local_var->_library_owned = 1;
    return file_changes_local_var;
}

__attribute__((deprecated)) file_changes_t *file_changes_create(
    char *path,
    double mode,
    double uid,
    double gid
    ) {
    return file_changes_create_internal (
        path,
        mode,
        uid,
        gid
        );
}

void file_changes_free(file_changes_t *file_changes) {
    if(NULL == file_changes){
        return ;
    }
    if(file_changes->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "file_changes_free");
        return ;
    }
    listEntry_t *listEntry;
    if (file_changes->path) {
        free(file_changes->path);
        file_changes->path = NULL;
    }
    free(file_changes);
}

cJSON *file_changes_convertToJSON(file_changes_t *file_changes) {
    cJSON *item = cJSON_CreateObject();

    // file_changes->path
    if(file_changes->path) {
    if(cJSON_AddStringToObject(item, "path", file_changes->path) == NULL) {
    goto fail; //String
    }
    }


    // file_changes->mode
    if(file_changes->mode) {
    if(cJSON_AddNumberToObject(item, "mode", file_changes->mode) == NULL) {
    goto fail; //Numeric
    }
    }


    // file_changes->uid
    if(file_changes->uid) {
    if(cJSON_AddNumberToObject(item, "uid", file_changes->uid) == NULL) {
    goto fail; //Numeric
    }
    }


    // file_changes->gid
    if(file_changes->gid) {
    if(cJSON_AddNumberToObject(item, "gid", file_changes->gid) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

file_changes_t *file_changes_parseFromJSON(cJSON *file_changesJSON){

    file_changes_t *file_changes_local_var = NULL;

    // file_changes->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(file_changesJSON, "path");
    if (cJSON_IsNull(path)) {
        path = NULL;
    }
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // file_changes->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(file_changesJSON, "mode");
    if (cJSON_IsNull(mode)) {
        mode = NULL;
    }
    if (mode) { 
    if(!cJSON_IsNumber(mode))
    {
    goto end; //Numeric
    }
    }

    // file_changes->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(file_changesJSON, "uid");
    if (cJSON_IsNull(uid)) {
        uid = NULL;
    }
    if (uid) { 
    if(!cJSON_IsNumber(uid))
    {
    goto end; //Numeric
    }
    }

    // file_changes->gid
    cJSON *gid = cJSON_GetObjectItemCaseSensitive(file_changesJSON, "gid");
    if (cJSON_IsNull(gid)) {
        gid = NULL;
    }
    if (gid) { 
    if(!cJSON_IsNumber(gid))
    {
    goto end; //Numeric
    }
    }


    file_changes_local_var = file_changes_create_internal (
        path ? strdup(path->valuestring) : NULL,
        mode ? mode->valuedouble : 0,
        uid ? uid->valuedouble : 0,
        gid ? gid->valuedouble : 0
        );

    return file_changes_local_var;
end:
    return NULL;

}
