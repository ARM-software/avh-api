#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "password_change_body.h"



static password_change_body_t *password_change_body_create_internal(
    char *user,
    char *old_password,
    char *new_password
    ) {
    password_change_body_t *password_change_body_local_var = malloc(sizeof(password_change_body_t));
    if (!password_change_body_local_var) {
        return NULL;
    }
    password_change_body_local_var->user = user;
    password_change_body_local_var->old_password = old_password;
    password_change_body_local_var->new_password = new_password;

    password_change_body_local_var->_library_owned = 1;
    return password_change_body_local_var;
}

__attribute__((deprecated)) password_change_body_t *password_change_body_create(
    char *user,
    char *old_password,
    char *new_password
    ) {
    return password_change_body_create_internal (
        user,
        old_password,
        new_password
        );
}

void password_change_body_free(password_change_body_t *password_change_body) {
    if(NULL == password_change_body){
        return ;
    }
    if(password_change_body->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "password_change_body_free");
        return ;
    }
    listEntry_t *listEntry;
    if (password_change_body->user) {
        free(password_change_body->user);
        password_change_body->user = NULL;
    }
    if (password_change_body->old_password) {
        free(password_change_body->old_password);
        password_change_body->old_password = NULL;
    }
    if (password_change_body->new_password) {
        free(password_change_body->new_password);
        password_change_body->new_password = NULL;
    }
    free(password_change_body);
}

cJSON *password_change_body_convertToJSON(password_change_body_t *password_change_body) {
    cJSON *item = cJSON_CreateObject();

    // password_change_body->user
    if (!password_change_body->user) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "user", password_change_body->user) == NULL) {
    goto fail; //String
    }


    // password_change_body->old_password
    if (!password_change_body->old_password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "old-password", password_change_body->old_password) == NULL) {
    goto fail; //String
    }


    // password_change_body->new_password
    if (!password_change_body->new_password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "new-password", password_change_body->new_password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

password_change_body_t *password_change_body_parseFromJSON(cJSON *password_change_bodyJSON){

    password_change_body_t *password_change_body_local_var = NULL;

    // password_change_body->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(password_change_bodyJSON, "user");
    if (cJSON_IsNull(user)) {
        user = NULL;
    }
    if (!user) {
        goto end;
    }

    
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }

    // password_change_body->old_password
    cJSON *old_password = cJSON_GetObjectItemCaseSensitive(password_change_bodyJSON, "old-password");
    if (cJSON_IsNull(old_password)) {
        old_password = NULL;
    }
    if (!old_password) {
        goto end;
    }

    
    if(!cJSON_IsString(old_password))
    {
    goto end; //String
    }

    // password_change_body->new_password
    cJSON *new_password = cJSON_GetObjectItemCaseSensitive(password_change_bodyJSON, "new-password");
    if (cJSON_IsNull(new_password)) {
        new_password = NULL;
    }
    if (!new_password) {
        goto end;
    }

    
    if(!cJSON_IsString(new_password))
    {
    goto end; //String
    }


    password_change_body_local_var = password_change_body_create_internal (
        strdup(user->valuestring),
        strdup(old_password->valuestring),
        strdup(new_password->valuestring)
        );

    return password_change_body_local_var;
end:
    return NULL;

}
