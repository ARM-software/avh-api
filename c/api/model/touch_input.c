#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "touch_input.h"



static touch_input_t *touch_input_create_internal(
    object_t *position
    ) {
    touch_input_t *touch_input_local_var = malloc(sizeof(touch_input_t));
    if (!touch_input_local_var) {
        return NULL;
    }
    touch_input_local_var->position = position;

    touch_input_local_var->_library_owned = 1;
    return touch_input_local_var;
}

__attribute__((deprecated)) touch_input_t *touch_input_create(
    object_t *position
    ) {
    return touch_input_create_internal (
        position
        );
}

void touch_input_free(touch_input_t *touch_input) {
    if(NULL == touch_input){
        return ;
    }
    if(touch_input->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "touch_input_free");
        return ;
    }
    listEntry_t *listEntry;
    if (touch_input->position) {
        object_free(touch_input->position);
        touch_input->position = NULL;
    }
    free(touch_input);
}

cJSON *touch_input_convertToJSON(touch_input_t *touch_input) {
    cJSON *item = cJSON_CreateObject();

    // touch_input->position
    if(touch_input->position) {
    cJSON *position_object = object_convertToJSON(touch_input->position);
    if(position_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "position", position_object);
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

touch_input_t *touch_input_parseFromJSON(cJSON *touch_inputJSON){

    touch_input_t *touch_input_local_var = NULL;

    // touch_input->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(touch_inputJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    object_t *position_local_object = NULL;
    if (position) { 
    position_local_object = object_parseFromJSON(position); //object
    }


    touch_input_local_var = touch_input_create_internal (
        position ? position_local_object : NULL
        );

    return touch_input_local_var;
end:
    return NULL;

}
