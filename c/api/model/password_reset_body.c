#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "password_reset_body.h"



static password_reset_body_t *password_reset_body_create_internal(
    char *token,
    char *totp_token,
    char *new_password
    ) {
    password_reset_body_t *password_reset_body_local_var = malloc(sizeof(password_reset_body_t));
    if (!password_reset_body_local_var) {
        return NULL;
    }
    password_reset_body_local_var->token = token;
    password_reset_body_local_var->totp_token = totp_token;
    password_reset_body_local_var->new_password = new_password;

    password_reset_body_local_var->_library_owned = 1;
    return password_reset_body_local_var;
}

__attribute__((deprecated)) password_reset_body_t *password_reset_body_create(
    char *token,
    char *totp_token,
    char *new_password
    ) {
    return password_reset_body_create_internal (
        token,
        totp_token,
        new_password
        );
}

void password_reset_body_free(password_reset_body_t *password_reset_body) {
    if(NULL == password_reset_body){
        return ;
    }
    if(password_reset_body->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "password_reset_body_free");
        return ;
    }
    listEntry_t *listEntry;
    if (password_reset_body->token) {
        free(password_reset_body->token);
        password_reset_body->token = NULL;
    }
    if (password_reset_body->totp_token) {
        free(password_reset_body->totp_token);
        password_reset_body->totp_token = NULL;
    }
    if (password_reset_body->new_password) {
        free(password_reset_body->new_password);
        password_reset_body->new_password = NULL;
    }
    free(password_reset_body);
}

cJSON *password_reset_body_convertToJSON(password_reset_body_t *password_reset_body) {
    cJSON *item = cJSON_CreateObject();

    // password_reset_body->token
    if (!password_reset_body->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", password_reset_body->token) == NULL) {
    goto fail; //String
    }


    // password_reset_body->totp_token
    if (!password_reset_body->totp_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "totpToken", password_reset_body->totp_token) == NULL) {
    goto fail; //String
    }


    // password_reset_body->new_password
    if (!password_reset_body->new_password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "new-password", password_reset_body->new_password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

password_reset_body_t *password_reset_body_parseFromJSON(cJSON *password_reset_bodyJSON){

    password_reset_body_t *password_reset_body_local_var = NULL;

    // password_reset_body->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(password_reset_bodyJSON, "token");
    if (cJSON_IsNull(token)) {
        token = NULL;
    }
    if (!token) {
        goto end;
    }

    
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }

    // password_reset_body->totp_token
    cJSON *totp_token = cJSON_GetObjectItemCaseSensitive(password_reset_bodyJSON, "totpToken");
    if (cJSON_IsNull(totp_token)) {
        totp_token = NULL;
    }
    if (!totp_token) {
        goto end;
    }

    
    if(!cJSON_IsString(totp_token))
    {
    goto end; //String
    }

    // password_reset_body->new_password
    cJSON *new_password = cJSON_GetObjectItemCaseSensitive(password_reset_bodyJSON, "new-password");
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


    password_reset_body_local_var = password_reset_body_create_internal (
        strdup(token->valuestring),
        strdup(totp_token->valuestring),
        strdup(new_password->valuestring)
        );

    return password_reset_body_local_var;
end:
    return NULL;

}
