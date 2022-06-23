#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invite_revoke_params_ids.h"



static invite_revoke_params_ids_t *invite_revoke_params_ids_create_internal(
    ) {
    invite_revoke_params_ids_t *invite_revoke_params_ids_local_var = malloc(sizeof(invite_revoke_params_ids_t));
    if (!invite_revoke_params_ids_local_var) {
        return NULL;
    }

    invite_revoke_params_ids_local_var->_library_owned = 1;
    return invite_revoke_params_ids_local_var;
}

__attribute__((deprecated)) invite_revoke_params_ids_t *invite_revoke_params_ids_create(
    ) {
    return invite_revoke_params_ids_create_internal (
        );
}

void invite_revoke_params_ids_free(invite_revoke_params_ids_t *invite_revoke_params_ids) {
    if(NULL == invite_revoke_params_ids){
        return ;
    }
    if(invite_revoke_params_ids->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invite_revoke_params_ids_free");
        return ;
    }
    listEntry_t *listEntry;
    free(invite_revoke_params_ids);
}

cJSON *invite_revoke_params_ids_convertToJSON(invite_revoke_params_ids_t *invite_revoke_params_ids) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invite_revoke_params_ids_t *invite_revoke_params_ids_parseFromJSON(cJSON *invite_revoke_params_idsJSON){

    invite_revoke_params_ids_t *invite_revoke_params_ids_local_var = NULL;


    invite_revoke_params_ids_local_var = invite_revoke_params_ids_create_internal (
        );

    return invite_revoke_params_ids_local_var;
end:
    return NULL;

}
