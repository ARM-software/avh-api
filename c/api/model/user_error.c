#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_error.h"


char* error_iduser_error_ToString(arm_api_user_error_ERRORID_e error_id) {
    char* error_idArray[] =  { "NULL", "UserError" };
	return error_idArray[error_id];
}

arm_api_user_error_ERRORID_e error_iduser_error_FromString(char* error_id){
    int stringToReturn = 0;
    char *error_idArray[] =  { "NULL", "UserError" };
    size_t sizeofArray = sizeof(error_idArray) / sizeof(error_idArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(error_id, error_idArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_error_t *user_error_create(
    char *error,
    arm_api_user_error_ERRORID_e error_id,
    char *field
    ) {
    user_error_t *user_error_local_var = malloc(sizeof(user_error_t));
    if (!user_error_local_var) {
        return NULL;
    }
    user_error_local_var->error = error;
    user_error_local_var->error_id = error_id;
    user_error_local_var->field = field;

    return user_error_local_var;
}


void user_error_free(user_error_t *user_error) {
    if(NULL == user_error){
        return ;
    }
    listEntry_t *listEntry;
    if (user_error->error) {
        free(user_error->error);
        user_error->error = NULL;
    }
    if (user_error->field) {
        free(user_error->field);
        user_error->field = NULL;
    }
    free(user_error);
}

cJSON *user_error_convertToJSON(user_error_t *user_error) {
    cJSON *item = cJSON_CreateObject();

    // user_error->error
    if (!user_error->error) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "error", user_error->error) == NULL) {
    goto fail; //String
    }


    // user_error->error_id
    if (arm_api_user_error_ERRORID_NULL == user_error->error_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorID", error_iduser_error_ToString(user_error->error_id)) == NULL)
    {
    goto fail; //Enum
    }


    // user_error->field
    if(user_error->field) {
    if(cJSON_AddStringToObject(item, "field", user_error->field) == NULL) {
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

user_error_t *user_error_parseFromJSON(cJSON *user_errorJSON){

    user_error_t *user_error_local_var = NULL;

    // user_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(user_errorJSON, "error");
    if (cJSON_IsNull(error)) {
        error = NULL;
    }
    if (!error) {
        goto end;
    }

    
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }

    // user_error->error_id
    cJSON *error_id = cJSON_GetObjectItemCaseSensitive(user_errorJSON, "errorID");
    if (cJSON_IsNull(error_id)) {
        error_id = NULL;
    }
    if (!error_id) {
        goto end;
    }

    arm_api_user_error_ERRORID_e error_idVariable;
    
    if(!cJSON_IsString(error_id))
    {
    goto end; //Enum
    }
    error_idVariable = error_iduser_error_FromString(error_id->valuestring);

    // user_error->field
    cJSON *field = cJSON_GetObjectItemCaseSensitive(user_errorJSON, "field");
    if (cJSON_IsNull(field)) {
        field = NULL;
    }
    if (field) { 
    if(!cJSON_IsString(field))
    {
    goto end; //String
    }
    }


    user_error_local_var = user_error_create (
        strdup(error->valuestring),
        error_idVariable,
        field ? strdup(field->valuestring) : NULL
        );

    return user_error_local_var;
end:
    return NULL;

}
