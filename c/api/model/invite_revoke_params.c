#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invite_revoke_params.h"



static invite_revoke_params_t *invite_revoke_params_create_internal(
    invite_revoke_params_ids_t *ids
    ) {
    invite_revoke_params_t *invite_revoke_params_local_var = malloc(sizeof(invite_revoke_params_t));
    if (!invite_revoke_params_local_var) {
        return NULL;
    }
    invite_revoke_params_local_var->ids = ids;

    invite_revoke_params_local_var->_library_owned = 1;
    return invite_revoke_params_local_var;
}

__attribute__((deprecated)) invite_revoke_params_t *invite_revoke_params_create(
    invite_revoke_params_ids_t *ids
    ) {
    return invite_revoke_params_create_internal (
        ids
        );
}

void invite_revoke_params_free(invite_revoke_params_t *invite_revoke_params) {
    if(NULL == invite_revoke_params){
        return ;
    }
    if(invite_revoke_params->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invite_revoke_params_free");
        return ;
    }
    listEntry_t *listEntry;
    if (invite_revoke_params->ids) {
        invite_revoke_params_ids_free(invite_revoke_params->ids);
        invite_revoke_params->ids = NULL;
    }
    free(invite_revoke_params);
}

cJSON *invite_revoke_params_convertToJSON(invite_revoke_params_t *invite_revoke_params) {
    cJSON *item = cJSON_CreateObject();

    // invite_revoke_params->ids
    if(invite_revoke_params->ids) {
    cJSON *ids_local_JSON = invite_revoke_params_ids_convertToJSON(invite_revoke_params->ids);
    if(ids_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ids", ids_local_JSON);
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

invite_revoke_params_t *invite_revoke_params_parseFromJSON(cJSON *invite_revoke_paramsJSON){

    invite_revoke_params_t *invite_revoke_params_local_var = NULL;

    // define the local variable for invite_revoke_params->ids
    invite_revoke_params_ids_t *ids_local_nonprim = NULL;

    // invite_revoke_params->ids
    cJSON *ids = cJSON_GetObjectItemCaseSensitive(invite_revoke_paramsJSON, "ids");
    if (cJSON_IsNull(ids)) {
        ids = NULL;
    }
    if (ids) { 
    ids_local_nonprim = invite_revoke_params_ids_parseFromJSON(ids); //nonprimitive
    }


    invite_revoke_params_local_var = invite_revoke_params_create_internal (
        ids ? ids_local_nonprim : NULL
        );

    return invite_revoke_params_local_var;
end:
    if (ids_local_nonprim) {
        invite_revoke_params_ids_free(ids_local_nonprim);
        ids_local_nonprim = NULL;
    }
    return NULL;

}
