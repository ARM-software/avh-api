#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agreed_ack.h"



static agreed_ack_t *agreed_ack_create_internal(
    char *agreed_to_terms
    ) {
    agreed_ack_t *agreed_ack_local_var = malloc(sizeof(agreed_ack_t));
    if (!agreed_ack_local_var) {
        return NULL;
    }
    agreed_ack_local_var->agreed_to_terms = agreed_to_terms;

    agreed_ack_local_var->_library_owned = 1;
    return agreed_ack_local_var;
}

__attribute__((deprecated)) agreed_ack_t *agreed_ack_create(
    char *agreed_to_terms
    ) {
    return agreed_ack_create_internal (
        agreed_to_terms
        );
}

void agreed_ack_free(agreed_ack_t *agreed_ack) {
    if(NULL == agreed_ack){
        return ;
    }
    if(agreed_ack->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agreed_ack_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agreed_ack->agreed_to_terms) {
        free(agreed_ack->agreed_to_terms);
        agreed_ack->agreed_to_terms = NULL;
    }
    free(agreed_ack);
}

cJSON *agreed_ack_convertToJSON(agreed_ack_t *agreed_ack) {
    cJSON *item = cJSON_CreateObject();

    // agreed_ack->agreed_to_terms
    if(agreed_ack->agreed_to_terms) {
    if(cJSON_AddStringToObject(item, "agreedToTerms", agreed_ack->agreed_to_terms) == NULL) {
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

agreed_ack_t *agreed_ack_parseFromJSON(cJSON *agreed_ackJSON){

    agreed_ack_t *agreed_ack_local_var = NULL;

    // agreed_ack->agreed_to_terms
    cJSON *agreed_to_terms = cJSON_GetObjectItemCaseSensitive(agreed_ackJSON, "agreedToTerms");
    if (cJSON_IsNull(agreed_to_terms)) {
        agreed_to_terms = NULL;
    }
    if (agreed_to_terms) { 
    if(!cJSON_IsString(agreed_to_terms))
    {
    goto end; //DateTime
    }
    }


    agreed_ack_local_var = agreed_ack_create_internal (
        agreed_to_terms ? strdup(agreed_to_terms->valuestring) : NULL
        );

    return agreed_ack_local_var;
end:
    return NULL;

}
