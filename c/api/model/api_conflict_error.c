#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_conflict_error.h"


char* error_idapi_conflict_error_ToString(arm_api_api_conflict_error_ERRORID_e error_id) {
    char* error_idArray[] =  { "NULL", "Conflict" };
	return error_idArray[error_id];
}

arm_api_api_conflict_error_ERRORID_e error_idapi_conflict_error_FromString(char* error_id){
    int stringToReturn = 0;
    char *error_idArray[] =  { "NULL", "Conflict" };
    size_t sizeofArray = sizeof(error_idArray) / sizeof(error_idArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(error_id, error_idArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

api_conflict_error_t *api_conflict_error_create(
    char *error,
    arm_api_api_conflict_error_ERRORID_e error_id,
    object_t *object
    ) {
    api_conflict_error_t *api_conflict_error_local_var = malloc(sizeof(api_conflict_error_t));
    if (!api_conflict_error_local_var) {
        return NULL;
    }
    api_conflict_error_local_var->error = error;
    api_conflict_error_local_var->error_id = error_id;
    api_conflict_error_local_var->object = object;

    return api_conflict_error_local_var;
}


void api_conflict_error_free(api_conflict_error_t *api_conflict_error) {
    if(NULL == api_conflict_error){
        return ;
    }
    listEntry_t *listEntry;
    if (api_conflict_error->error) {
        free(api_conflict_error->error);
        api_conflict_error->error = NULL;
    }
    if (api_conflict_error->object) {
        object_free(api_conflict_error->object);
        api_conflict_error->object = NULL;
    }
    free(api_conflict_error);
}

cJSON *api_conflict_error_convertToJSON(api_conflict_error_t *api_conflict_error) {
    cJSON *item = cJSON_CreateObject();

    // api_conflict_error->error
    if (!api_conflict_error->error) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "error", api_conflict_error->error) == NULL) {
    goto fail; //String
    }


    // api_conflict_error->error_id
    if (arm_api_api_conflict_error_ERRORID_NULL == api_conflict_error->error_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorID", error_idapi_conflict_error_ToString(api_conflict_error->error_id)) == NULL)
    {
    goto fail; //Enum
    }


    // api_conflict_error->object
    if(api_conflict_error->object) {
    cJSON *object_object = object_convertToJSON(api_conflict_error->object);
    if(object_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "object", object_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

api_conflict_error_t *api_conflict_error_parseFromJSON(cJSON *api_conflict_errorJSON){

    api_conflict_error_t *api_conflict_error_local_var = NULL;

    // api_conflict_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(api_conflict_errorJSON, "error");
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

    // api_conflict_error->error_id
    cJSON *error_id = cJSON_GetObjectItemCaseSensitive(api_conflict_errorJSON, "errorID");
    if (cJSON_IsNull(error_id)) {
        error_id = NULL;
    }
    if (!error_id) {
        goto end;
    }

    arm_api_api_conflict_error_ERRORID_e error_idVariable;
    
    if(!cJSON_IsString(error_id))
    {
    goto end; //Enum
    }
    error_idVariable = error_idapi_conflict_error_FromString(error_id->valuestring);

    // api_conflict_error->object
    cJSON *object = cJSON_GetObjectItemCaseSensitive(api_conflict_errorJSON, "object");
    if (cJSON_IsNull(object)) {
        object = NULL;
    }
    object_t *object_local_object = NULL;
    if (object) { 
    object_local_object = object_parseFromJSON(object); //object
    }


    api_conflict_error_local_var = api_conflict_error_create (
        strdup(error->valuestring),
        error_idVariable,
        object ? object_local_object : NULL
        );

    return api_conflict_error_local_var;
end:
    return NULL;

}
