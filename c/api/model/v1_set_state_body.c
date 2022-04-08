#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_set_state_body.h"


char* statev1_set_state_body_ToString(arm_api_v1_set_state_body__e state) {
    char* stateArray[] =  { "NULL", "on", "off", "deleting", "creating", "restoring", "paused", "rebooting", "error" };
	return stateArray[state];
}

arm_api_v1_set_state_body__e statev1_set_state_body_FromString(char* state){
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "on", "off", "deleting", "creating", "restoring", "paused", "rebooting", "error" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

v1_set_state_body_t *v1_set_state_body_create(
    instance_state_t *state
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
    if (v1_set_state_body->state) {
        instance_state_free(v1_set_state_body->state);
        v1_set_state_body->state = NULL;
    }
    free(v1_set_state_body);
}

cJSON *v1_set_state_body_convertToJSON(v1_set_state_body_t *v1_set_state_body) {
    cJSON *item = cJSON_CreateObject();

    // v1_set_state_body->state
    
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
    instance_state_t *state_local_nonprim = NULL;

    // v1_set_state_body->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v1_set_state_bodyJSON, "state");
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
        instance_state_free(state_local_nonprim);
        state_local_nonprim = NULL;
    }
    return NULL;

}
