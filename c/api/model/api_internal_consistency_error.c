#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_internal_consistency_error.h"



static api_internal_consistency_error_t *api_internal_consistency_error_create_internal(
    char *error,
    char *error_id,
    char *original_error
    ) {
    api_internal_consistency_error_t *api_internal_consistency_error_local_var = malloc(sizeof(api_internal_consistency_error_t));
    if (!api_internal_consistency_error_local_var) {
        return NULL;
    }
    api_internal_consistency_error_local_var->error = error;
    api_internal_consistency_error_local_var->error_id = error_id;
    api_internal_consistency_error_local_var->original_error = original_error;

    api_internal_consistency_error_local_var->_library_owned = 1;
    return api_internal_consistency_error_local_var;
}

__attribute__((deprecated)) api_internal_consistency_error_t *api_internal_consistency_error_create(
    char *error,
    char *error_id,
    char *original_error
    ) {
    return api_internal_consistency_error_create_internal (
        error,
        error_id,
        original_error
        );
}

void api_internal_consistency_error_free(api_internal_consistency_error_t *api_internal_consistency_error) {
    if(NULL == api_internal_consistency_error){
        return ;
    }
    if(api_internal_consistency_error->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "api_internal_consistency_error_free");
        return ;
    }
    listEntry_t *listEntry;
    if (api_internal_consistency_error->error) {
        free(api_internal_consistency_error->error);
        api_internal_consistency_error->error = NULL;
    }
    if (api_internal_consistency_error->error_id) {
        free(api_internal_consistency_error->error_id);
        api_internal_consistency_error->error_id = NULL;
    }
    if (api_internal_consistency_error->original_error) {
        free(api_internal_consistency_error->original_error);
        api_internal_consistency_error->original_error = NULL;
    }
    free(api_internal_consistency_error);
}

cJSON *api_internal_consistency_error_convertToJSON(api_internal_consistency_error_t *api_internal_consistency_error) {
    cJSON *item = cJSON_CreateObject();

    // api_internal_consistency_error->error
    if (!api_internal_consistency_error->error) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "error", api_internal_consistency_error->error) == NULL) {
    goto fail; //String
    }


    // api_internal_consistency_error->error_id
    if (!api_internal_consistency_error->error_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorID", api_internal_consistency_error->error_id) == NULL) {
    goto fail; //String
    }


    // api_internal_consistency_error->original_error
    if(api_internal_consistency_error->original_error) {
    if(cJSON_AddStringToObject(item, "originalError", api_internal_consistency_error->original_error) == NULL) {
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

api_internal_consistency_error_t *api_internal_consistency_error_parseFromJSON(cJSON *api_internal_consistency_errorJSON){

    api_internal_consistency_error_t *api_internal_consistency_error_local_var = NULL;

    // api_internal_consistency_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(api_internal_consistency_errorJSON, "error");
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

    // api_internal_consistency_error->error_id
    cJSON *error_id = cJSON_GetObjectItemCaseSensitive(api_internal_consistency_errorJSON, "errorID");
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

    // api_internal_consistency_error->original_error
    cJSON *original_error = cJSON_GetObjectItemCaseSensitive(api_internal_consistency_errorJSON, "originalError");
    if (cJSON_IsNull(original_error)) {
        original_error = NULL;
    }
    if (original_error) { 
    if(!cJSON_IsString(original_error))
    {
    goto end; //String
    }
    }


    api_internal_consistency_error_local_var = api_internal_consistency_error_create_internal (
        strdup(error->valuestring),
        strdup(error_id->valuestring),
        original_error ? strdup(original_error->valuestring) : NULL
        );

    return api_internal_consistency_error_local_var;
end:
    return NULL;

}
