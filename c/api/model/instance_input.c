#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_input.h"



static instance_input_t *instance_input_create_internal(
    object_t *position,
    object_t *start,
    object_t *end,
    char *text
    ) {
    instance_input_t *instance_input_local_var = malloc(sizeof(instance_input_t));
    if (!instance_input_local_var) {
        return NULL;
    }
    instance_input_local_var->position = position;
    instance_input_local_var->start = start;
    instance_input_local_var->end = end;
    instance_input_local_var->text = text;

    instance_input_local_var->_library_owned = 1;
    return instance_input_local_var;
}

__attribute__((deprecated)) instance_input_t *instance_input_create(
    object_t *position,
    object_t *start,
    object_t *end,
    char *text
    ) {
    return instance_input_create_internal (
        position,
        start,
        end,
        text
        );
}

void instance_input_free(instance_input_t *instance_input) {
    if(NULL == instance_input){
        return ;
    }
    if(instance_input->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_input_free");
        return ;
    }
    listEntry_t *listEntry;
    if (instance_input->position) {
        object_free(instance_input->position);
        instance_input->position = NULL;
    }
    if (instance_input->start) {
        object_free(instance_input->start);
        instance_input->start = NULL;
    }
    if (instance_input->end) {
        object_free(instance_input->end);
        instance_input->end = NULL;
    }
    if (instance_input->text) {
        free(instance_input->text);
        instance_input->text = NULL;
    }
    free(instance_input);
}

cJSON *instance_input_convertToJSON(instance_input_t *instance_input) {
    cJSON *item = cJSON_CreateObject();

    // instance_input->position
    if(instance_input->position) {
    cJSON *position_object = object_convertToJSON(instance_input->position);
    if(position_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "position", position_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // instance_input->start
    if(instance_input->start) {
    cJSON *start_object = object_convertToJSON(instance_input->start);
    if(start_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "start", start_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // instance_input->end
    if(instance_input->end) {
    cJSON *end_object = object_convertToJSON(instance_input->end);
    if(end_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "end", end_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // instance_input->text
    if(instance_input->text) {
    if(cJSON_AddStringToObject(item, "text", instance_input->text) == NULL) {
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

instance_input_t *instance_input_parseFromJSON(cJSON *instance_inputJSON){

    instance_input_t *instance_input_local_var = NULL;

    // instance_input->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(instance_inputJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    object_t *position_local_object = NULL;
    if (position) { 
    position_local_object = object_parseFromJSON(position); //object
    }

    // instance_input->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(instance_inputJSON, "start");
    if (cJSON_IsNull(start)) {
        start = NULL;
    }
    object_t *start_local_object = NULL;
    if (start) { 
    start_local_object = object_parseFromJSON(start); //object
    }

    // instance_input->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(instance_inputJSON, "end");
    if (cJSON_IsNull(end)) {
        end = NULL;
    }
    object_t *end_local_object = NULL;
    if (end) { 
    end_local_object = object_parseFromJSON(end); //object
    }

    // instance_input->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(instance_inputJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }
    }


    instance_input_local_var = instance_input_create_internal (
        position ? position_local_object : NULL,
        start ? start_local_object : NULL,
        end ? end_local_object : NULL,
        text ? strdup(text->valuestring) : NULL
        );

    return instance_input_local_var;
end:
    return NULL;

}
