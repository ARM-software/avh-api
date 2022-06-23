#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "token.h"



static token_t *token_create_internal(
    char *token,
    char *expiration
    ) {
    token_t *token_local_var = malloc(sizeof(token_t));
    if (!token_local_var) {
        return NULL;
    }
    token_local_var->token = token;
    token_local_var->expiration = expiration;

    token_local_var->_library_owned = 1;
    return token_local_var;
}

__attribute__((deprecated)) token_t *token_create(
    char *token,
    char *expiration
    ) {
    return token_create_internal (
        token,
        expiration
        );
}

void token_free(token_t *token) {
    if(NULL == token){
        return ;
    }
    if(token->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "token_free");
        return ;
    }
    listEntry_t *listEntry;
    if (token->token) {
        free(token->token);
        token->token = NULL;
    }
    if (token->expiration) {
        free(token->expiration);
        token->expiration = NULL;
    }
    free(token);
}

cJSON *token_convertToJSON(token_t *token) {
    cJSON *item = cJSON_CreateObject();

    // token->token
    if (!token->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", token->token) == NULL) {
    goto fail; //String
    }


    // token->expiration
    if(token->expiration) {
    if(cJSON_AddStringToObject(item, "expiration", token->expiration) == NULL) {
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

token_t *token_parseFromJSON(cJSON *tokenJSON){

    token_t *token_local_var = NULL;

    // token->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(tokenJSON, "token");
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

    // token->expiration
    cJSON *expiration = cJSON_GetObjectItemCaseSensitive(tokenJSON, "expiration");
    if (cJSON_IsNull(expiration)) {
        expiration = NULL;
    }
    if (expiration) { 
    if(!cJSON_IsString(expiration))
    {
    goto end; //DateTime
    }
    }


    token_local_var = token_create_internal (
        strdup(token->valuestring),
        expiration ? strdup(expiration->valuestring) : NULL
        );

    return token_local_var;
end:
    return NULL;

}
