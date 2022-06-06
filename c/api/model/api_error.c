#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_error.h"



api_error_t *api_error_create(
    char *error,
    char *error_id,
    char *original_error
    ) {
    api_error_t *api_error_local_var = malloc(sizeof(api_error_t));
    if (!api_error_local_var) {
        return NULL;
    }
    api_error_local_var->error = error;
    api_error_local_var->error_id = error_id;
    api_error_local_var->original_error = original_error;

    return api_error_local_var;
}


void api_error_free(api_error_t *api_error) {
    if(NULL == api_error){
        return ;
    }
    listEntry_t *listEntry;
    if (api_error->error) {
        free(api_error->error);
        api_error->error = NULL;
    }
    if (api_error->error_id) {
        free(api_error->error_id);
        api_error->error_id = NULL;
    }
    if (api_error->original_error) {
        free(api_error->original_error);
        api_error->original_error = NULL;
    }
    free(api_error);
}

cJSON *api_error_convertToJSON(api_error_t *api_error) {
    cJSON *item = cJSON_CreateObject();

    // api_error->error
    if (!api_error->error) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "error", api_error->error) == NULL) {
    goto fail; //String
    }


    // api_error->error_id
    if (!api_error->error_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorID", api_error->error_id) == NULL) {
    goto fail; //String
    }


    // api_error->original_error
    if(api_error->original_error) {
    if(cJSON_AddStringToObject(item, "originalError", api_error->original_error) == NULL) {
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

api_error_t *api_error_parseFromJSON(cJSON *api_errorJSON){

    api_error_t *api_error_local_var = NULL;

    // api_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(api_errorJSON, "error");
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

    // api_error->error_id
    cJSON *error_id = cJSON_GetObjectItemCaseSensitive(api_errorJSON, "errorID");
    if (cJSON_IsNull(error_id)) {
        error_id = NULL;
    }
    if (!error_id) {
        goto end;
    }

    
    if(!cJSON_IsString(error_id))
    {
    goto end; //String
    }

    // api_error->original_error
    cJSON *original_error = cJSON_GetObjectItemCaseSensitive(api_errorJSON, "originalError");
    if (cJSON_IsNull(original_error)) {
        original_error = NULL;
    }
    if (original_error) { 
    if(!cJSON_IsString(original_error))
    {
    goto end; //String
    }
    }


    api_error_local_var = api_error_create (
        strdup(error->valuestring),
        strdup(error_id->valuestring),
        original_error ? strdup(original_error->valuestring) : NULL
        );

    return api_error_local_var;
end:
    return NULL;

}
