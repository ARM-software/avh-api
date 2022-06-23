#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "validation_error.h"


char* error_idvalidation_error_ToString(arm_api_validation_error_ERRORID_e error_id) {
    char* error_idArray[] =  { "NULL", "ValidationError" };
	return error_idArray[error_id];
}

arm_api_validation_error_ERRORID_e error_idvalidation_error_FromString(char* error_id){
    int stringToReturn = 0;
    char *error_idArray[] =  { "NULL", "ValidationError" };
    size_t sizeofArray = sizeof(error_idArray) / sizeof(error_idArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(error_id, error_idArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static validation_error_t *validation_error_create_internal(
    char *error,
    arm_api_validation_error_ERRORID_e error_id,
    char *field
    ) {
    validation_error_t *validation_error_local_var = malloc(sizeof(validation_error_t));
    if (!validation_error_local_var) {
        return NULL;
    }
    validation_error_local_var->error = error;
    validation_error_local_var->error_id = error_id;
    validation_error_local_var->field = field;

    validation_error_local_var->_library_owned = 1;
    return validation_error_local_var;
}

__attribute__((deprecated)) validation_error_t *validation_error_create(
    char *error,
    arm_api_validation_error_ERRORID_e error_id,
    char *field
    ) {
    return validation_error_create_internal (
        error,
        error_id,
        field
        );
}

void validation_error_free(validation_error_t *validation_error) {
    if(NULL == validation_error){
        return ;
    }
    if(validation_error->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "validation_error_free");
        return ;
    }
    listEntry_t *listEntry;
    if (validation_error->error) {
        free(validation_error->error);
        validation_error->error = NULL;
    }
    if (validation_error->field) {
        free(validation_error->field);
        validation_error->field = NULL;
    }
    free(validation_error);
}

cJSON *validation_error_convertToJSON(validation_error_t *validation_error) {
    cJSON *item = cJSON_CreateObject();

    // validation_error->error
    if (!validation_error->error) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "error", validation_error->error) == NULL) {
    goto fail; //String
    }


    // validation_error->error_id
    if (arm_api_validation_error_ERRORID_NULL == validation_error->error_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorID", error_idvalidation_error_ToString(validation_error->error_id)) == NULL)
    {
    goto fail; //Enum
    }


    // validation_error->field
    if(validation_error->field) {
    if(cJSON_AddStringToObject(item, "field", validation_error->field) == NULL) {
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

validation_error_t *validation_error_parseFromJSON(cJSON *validation_errorJSON){

    validation_error_t *validation_error_local_var = NULL;

    // validation_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(validation_errorJSON, "error");
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

    // validation_error->error_id
    cJSON *error_id = cJSON_GetObjectItemCaseSensitive(validation_errorJSON, "errorID");
    if (cJSON_IsNull(error_id)) {
        error_id = NULL;
    }
    if (!error_id) {
        goto end;
    }

    arm_api_validation_error_ERRORID_e error_idVariable;
    
    if(!cJSON_IsString(error_id))
    {
    goto end; //Enum
    }
    error_idVariable = error_idvalidation_error_FromString(error_id->valuestring);

    // validation_error->field
    cJSON *field = cJSON_GetObjectItemCaseSensitive(validation_errorJSON, "field");
    if (cJSON_IsNull(field)) {
        field = NULL;
    }
    if (field) { 
    if(!cJSON_IsString(field))
    {
    goto end; //String
    }
    }


    validation_error_local_var = validation_error_create_internal (
        strdup(error->valuestring),
        error_idVariable,
        field ? strdup(field->valuestring) : NULL
        );

    return validation_error_local_var;
end:
    return NULL;

}
