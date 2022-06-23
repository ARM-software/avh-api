#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "grant_trial_request_response.h"



static grant_trial_request_response_t *grant_trial_request_response_create_internal(
    char *code
    ) {
    grant_trial_request_response_t *grant_trial_request_response_local_var = malloc(sizeof(grant_trial_request_response_t));
    if (!grant_trial_request_response_local_var) {
        return NULL;
    }
    grant_trial_request_response_local_var->code = code;

    grant_trial_request_response_local_var->_library_owned = 1;
    return grant_trial_request_response_local_var;
}

__attribute__((deprecated)) grant_trial_request_response_t *grant_trial_request_response_create(
    char *code
    ) {
    return grant_trial_request_response_create_internal (
        code
        );
}

void grant_trial_request_response_free(grant_trial_request_response_t *grant_trial_request_response) {
    if(NULL == grant_trial_request_response){
        return ;
    }
    if(grant_trial_request_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "grant_trial_request_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (grant_trial_request_response->code) {
        free(grant_trial_request_response->code);
        grant_trial_request_response->code = NULL;
    }
    free(grant_trial_request_response);
}

cJSON *grant_trial_request_response_convertToJSON(grant_trial_request_response_t *grant_trial_request_response) {
    cJSON *item = cJSON_CreateObject();

    // grant_trial_request_response->code
    if(grant_trial_request_response->code) {
    if(cJSON_AddStringToObject(item, "code", grant_trial_request_response->code) == NULL) {
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

grant_trial_request_response_t *grant_trial_request_response_parseFromJSON(cJSON *grant_trial_request_responseJSON){

    grant_trial_request_response_t *grant_trial_request_response_local_var = NULL;

    // grant_trial_request_response->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(grant_trial_request_responseJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }
    }


    grant_trial_request_response_local_var = grant_trial_request_response_create_internal (
        code ? strdup(code->valuestring) : NULL
        );

    return grant_trial_request_response_local_var;
end:
    return NULL;

}
