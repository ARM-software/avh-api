#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user.h"



static user_t *user_create_internal(
    char *id,
    char *label,
    char *name,
    char *email,
    int administrator
    ) {
    user_t *user_local_var = malloc(sizeof(user_t));
    if (!user_local_var) {
        return NULL;
    }
    user_local_var->id = id;
    user_local_var->label = label;
    user_local_var->name = name;
    user_local_var->email = email;
    user_local_var->administrator = administrator;

    user_local_var->_library_owned = 1;
    return user_local_var;
}

__attribute__((deprecated)) user_t *user_create(
    char *id,
    char *label,
    char *name,
    char *email,
    int administrator
    ) {
    return user_create_internal (
        id,
        label,
        name,
        email,
        administrator
        );
}

void user_free(user_t *user) {
    if(NULL == user){
        return ;
    }
    if(user->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user->id) {
        free(user->id);
        user->id = NULL;
    }
    if (user->label) {
        free(user->label);
        user->label = NULL;
    }
    if (user->name) {
        free(user->name);
        user->name = NULL;
    }
    if (user->email) {
        free(user->email);
        user->email = NULL;
    }
    free(user);
}

cJSON *user_convertToJSON(user_t *user) {
    cJSON *item = cJSON_CreateObject();

    // user->id
    if (!user->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", user->id) == NULL) {
    goto fail; //String
    }


    // user->label
    if (!user->label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "label", user->label) == NULL) {
    goto fail; //String
    }


    // user->name
    if (!user->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", user->name) == NULL) {
    goto fail; //String
    }


    // user->email
    if (!user->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", user->email) == NULL) {
    goto fail; //String
    }


    // user->administrator
    if(user->administrator) {
    if(cJSON_AddBoolToObject(item, "administrator", user->administrator) == NULL) {
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

user_t *user_parseFromJSON(cJSON *userJSON){

    user_t *user_local_var = NULL;

    // user->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(userJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // user->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(userJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (!label) {
        goto end;
    }

    
    if(!cJSON_IsString(label))
    {
    goto end; //String
    }

    // user->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(userJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // user->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(userJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (!email) {
        goto end;
    }

    
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }

    // user->administrator
    cJSON *administrator = cJSON_GetObjectItemCaseSensitive(userJSON, "administrator");
    if (cJSON_IsNull(administrator)) {
        administrator = NULL;
    }
    if (administrator) { 
    if(!cJSON_IsBool(administrator))
    {
    goto end; //Bool
    }
    }


    user_local_var = user_create_internal (
        strdup(id->valuestring),
        strdup(label->valuestring),
        strdup(name->valuestring),
        strdup(email->valuestring),
        administrator ? administrator->valueint : 0
        );

    return user_local_var;
end:
    return NULL;

}
