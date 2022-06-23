#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "text_input.h"



static text_input_t *text_input_create_internal(
    char *text
    ) {
    text_input_t *text_input_local_var = malloc(sizeof(text_input_t));
    if (!text_input_local_var) {
        return NULL;
    }
    text_input_local_var->text = text;

    text_input_local_var->_library_owned = 1;
    return text_input_local_var;
}

__attribute__((deprecated)) text_input_t *text_input_create(
    char *text
    ) {
    return text_input_create_internal (
        text
        );
}

void text_input_free(text_input_t *text_input) {
    if(NULL == text_input){
        return ;
    }
    if(text_input->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "text_input_free");
        return ;
    }
    listEntry_t *listEntry;
    if (text_input->text) {
        free(text_input->text);
        text_input->text = NULL;
    }
    free(text_input);
}

cJSON *text_input_convertToJSON(text_input_t *text_input) {
    cJSON *item = cJSON_CreateObject();

    // text_input->text
    if(text_input->text) {
    if(cJSON_AddStringToObject(item, "text", text_input->text) == NULL) {
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

text_input_t *text_input_parseFromJSON(cJSON *text_inputJSON){

    text_input_t *text_input_local_var = NULL;

    // text_input->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(text_inputJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }
    }


    text_input_local_var = text_input_create_internal (
        text ? strdup(text->valuestring) : NULL
        );

    return text_input_local_var;
end:
    return NULL;

}
