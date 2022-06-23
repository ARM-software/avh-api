#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reset_link_body.h"



static reset_link_body_t *reset_link_body_create_internal(
    char *email
    ) {
    reset_link_body_t *reset_link_body_local_var = malloc(sizeof(reset_link_body_t));
    if (!reset_link_body_local_var) {
        return NULL;
    }
    reset_link_body_local_var->email = email;

    reset_link_body_local_var->_library_owned = 1;
    return reset_link_body_local_var;
}

__attribute__((deprecated)) reset_link_body_t *reset_link_body_create(
    char *email
    ) {
    return reset_link_body_create_internal (
        email
        );
}

void reset_link_body_free(reset_link_body_t *reset_link_body) {
    if(NULL == reset_link_body){
        return ;
    }
    if(reset_link_body->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "reset_link_body_free");
        return ;
    }
    listEntry_t *listEntry;
    if (reset_link_body->email) {
        free(reset_link_body->email);
        reset_link_body->email = NULL;
    }
    free(reset_link_body);
}

cJSON *reset_link_body_convertToJSON(reset_link_body_t *reset_link_body) {
    cJSON *item = cJSON_CreateObject();

    // reset_link_body->email
    if (!reset_link_body->email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "email", reset_link_body->email) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

reset_link_body_t *reset_link_body_parseFromJSON(cJSON *reset_link_bodyJSON){

    reset_link_body_t *reset_link_body_local_var = NULL;

    // reset_link_body->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(reset_link_bodyJSON, "email");
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


    reset_link_body_local_var = reset_link_body_create_internal (
        strdup(email->valuestring)
        );

    return reset_link_body_local_var;
end:
    return NULL;

}
