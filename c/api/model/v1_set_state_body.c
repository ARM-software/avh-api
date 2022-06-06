#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_set_state_body.h"



v1_set_state_body_t *v1_set_state_body_create(
    arm_api_instance_state__e state
    ) {
    v1_set_state_body_t *v1_set_state_body_local_var = malloc(sizeof(v1_set_state_body_t));
    if (!v1_set_state_body_local_var) {
        return NULL;
    }
    v1_set_state_body_local_var->state = state;

    return v1_set_state_body_local_var;
}


void v1_set_state_body_free(v1_set_state_body_t *v1_set_state_body) {
    if(NULL == v1_set_state_body){
        return ;
    }
    listEntry_t *listEntry;
    free(v1_set_state_body);
}

cJSON *v1_set_state_body_convertToJSON(v1_set_state_body_t *v1_set_state_body) {
    cJSON *item = cJSON_CreateObject();

    // v1_set_state_body->state
    if (arm_api_instance_state__NULL == v1_set_state_body->state) {
        goto fail;
    }
    cJSON *state_local_JSON = instance_state_convertToJSON(v1_set_state_body->state);
    if(state_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "state", state_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1_set_state_body_t *v1_set_state_body_parseFromJSON(cJSON *v1_set_state_bodyJSON){

    v1_set_state_body_t *v1_set_state_body_local_var = NULL;

    // define the local variable for v1_set_state_body->state
    arm_api_instance_state__e state_local_nonprim = 0;

    // v1_set_state_body->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v1_set_state_bodyJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (!state) {
        goto end;
    }

    
    state_local_nonprim = instance_state_parseFromJSON(state); //custom


    v1_set_state_body_local_var = v1_set_state_body_create (
        state_local_nonprim
        );

    return v1_set_state_body_local_var;
end:
    if (state_local_nonprim) {
        state_local_nonprim = 0;
    }
    return NULL;

}
