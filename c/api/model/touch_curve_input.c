#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "touch_curve_input.h"



static touch_curve_input_t *touch_curve_input_create_internal(
    object_t *start,
    object_t *end
    ) {
    touch_curve_input_t *touch_curve_input_local_var = malloc(sizeof(touch_curve_input_t));
    if (!touch_curve_input_local_var) {
        return NULL;
    }
    touch_curve_input_local_var->start = start;
    touch_curve_input_local_var->end = end;

    touch_curve_input_local_var->_library_owned = 1;
    return touch_curve_input_local_var;
}

__attribute__((deprecated)) touch_curve_input_t *touch_curve_input_create(
    object_t *start,
    object_t *end
    ) {
    return touch_curve_input_create_internal (
        start,
        end
        );
}

void touch_curve_input_free(touch_curve_input_t *touch_curve_input) {
    if(NULL == touch_curve_input){
        return ;
    }
    if(touch_curve_input->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "touch_curve_input_free");
        return ;
    }
    listEntry_t *listEntry;
    if (touch_curve_input->start) {
        object_free(touch_curve_input->start);
        touch_curve_input->start = NULL;
    }
    if (touch_curve_input->end) {
        object_free(touch_curve_input->end);
        touch_curve_input->end = NULL;
    }
    free(touch_curve_input);
}

cJSON *touch_curve_input_convertToJSON(touch_curve_input_t *touch_curve_input) {
    cJSON *item = cJSON_CreateObject();

    // touch_curve_input->start
    if(touch_curve_input->start) {
    cJSON *start_object = object_convertToJSON(touch_curve_input->start);
    if(start_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "start", start_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // touch_curve_input->end
    if(touch_curve_input->end) {
    cJSON *end_object = object_convertToJSON(touch_curve_input->end);
    if(end_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "end", end_object);
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

touch_curve_input_t *touch_curve_input_parseFromJSON(cJSON *touch_curve_inputJSON){

    touch_curve_input_t *touch_curve_input_local_var = NULL;

    // touch_curve_input->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(touch_curve_inputJSON, "start");
    if (cJSON_IsNull(start)) {
        start = NULL;
    }
    object_t *start_local_object = NULL;
    if (start) { 
    start_local_object = object_parseFromJSON(start); //object
    }

    // touch_curve_input->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(touch_curve_inputJSON, "end");
    if (cJSON_IsNull(end)) {
        end = NULL;
    }
    object_t *end_local_object = NULL;
    if (end) { 
    end_local_object = object_parseFromJSON(end); //object
    }


    touch_curve_input_local_var = touch_curve_input_create_internal (
        start ? start_local_object : NULL,
        end ? end_local_object : NULL
        );

    return touch_curve_input_local_var;
end:
    return NULL;

}
