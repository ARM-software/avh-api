#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_return.h"



instance_return_t *instance_return_create(
    char *id,
    arm_api_instance_state__e state
    ) {
    instance_return_t *instance_return_local_var = malloc(sizeof(instance_return_t));
    if (!instance_return_local_var) {
        return NULL;
    }
    instance_return_local_var->id = id;
    instance_return_local_var->state = state;

    return instance_return_local_var;
}


void instance_return_free(instance_return_t *instance_return) {
    if(NULL == instance_return){
        return ;
    }
    listEntry_t *listEntry;
    if (instance_return->id) {
        free(instance_return->id);
        instance_return->id = NULL;
    }
    free(instance_return);
}

cJSON *instance_return_convertToJSON(instance_return_t *instance_return) {
    cJSON *item = cJSON_CreateObject();

    // instance_return->id
    if (!instance_return->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", instance_return->id) == NULL) {
    goto fail; //String
    }


    // instance_return->state
    if (arm_api_instance_state__NULL == instance_return->state) {
        goto fail;
    }
    cJSON *state_local_JSON = instance_state_convertToJSON(instance_return->state);
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

instance_return_t *instance_return_parseFromJSON(cJSON *instance_returnJSON){

    instance_return_t *instance_return_local_var = NULL;

    // define the local variable for instance_return->state
    arm_api_instance_state__e state_local_nonprim = 0;

    // instance_return->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(instance_returnJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // instance_return->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(instance_returnJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (!state) {
        goto end;
    }

    
    state_local_nonprim = instance_state_parseFromJSON(state); //custom


    instance_return_local_var = instance_return_create (
        strdup(id->valuestring),
        state_local_nonprim
        );

    return instance_return_local_var;
end:
    if (state_local_nonprim) {
        state_local_nonprim = 0;
    }
    return NULL;

}
