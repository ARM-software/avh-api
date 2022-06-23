#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "credentials.h"



static credentials_t *credentials_create_internal(
    char *username,
    char *password
    ) {
    credentials_t *credentials_local_var = malloc(sizeof(credentials_t));
    if (!credentials_local_var) {
        return NULL;
    }
    credentials_local_var->username = username;
    credentials_local_var->password = password;

    credentials_local_var->_library_owned = 1;
    return credentials_local_var;
}

__attribute__((deprecated)) credentials_t *credentials_create(
    char *username,
    char *password
    ) {
    return credentials_create_internal (
        username,
        password
        );
}

void credentials_free(credentials_t *credentials) {
    if(NULL == credentials){
        return ;
    }
    if(credentials->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "credentials_free");
        return ;
    }
    listEntry_t *listEntry;
    if (credentials->username) {
        free(credentials->username);
        credentials->username = NULL;
    }
    if (credentials->password) {
        free(credentials->password);
        credentials->password = NULL;
    }
    free(credentials);
}

cJSON *credentials_convertToJSON(credentials_t *credentials) {
    cJSON *item = cJSON_CreateObject();

    // credentials->username
    if (!credentials->username) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "username", credentials->username) == NULL) {
    goto fail; //String
    }


    // credentials->password
    if (!credentials->password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "password", credentials->password) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

credentials_t *credentials_parseFromJSON(cJSON *credentialsJSON){

    credentials_t *credentials_local_var = NULL;

    // credentials->username
    cJSON *username = cJSON_GetObjectItemCaseSensitive(credentialsJSON, "username");
    if (cJSON_IsNull(username)) {
        username = NULL;
    }
    if (!username) {
        goto end;
    }

    
    if(!cJSON_IsString(username))
    {
    goto end; //String
    }

    // credentials->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(credentialsJSON, "password");
    if (cJSON_IsNull(password)) {
        password = NULL;
    }
    if (!password) {
        goto end;
    }

    
    if(!cJSON_IsString(password))
    {
    goto end; //String
    }


    credentials_local_var = credentials_create_internal (
        strdup(username->valuestring),
        strdup(password->valuestring)
        );

    return credentials_local_var;
end:
    return NULL;

}
