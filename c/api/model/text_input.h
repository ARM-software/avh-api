/*
 * text_input.h
 *
 * 
 */

#ifndef _text_input_H_
#define _text_input_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct text_input_t text_input_t;




typedef struct text_input_t {
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} text_input_t;

__attribute__((deprecated)) text_input_t *text_input_create(
    char *text
);

void text_input_free(text_input_t *text_input);

text_input_t *text_input_parseFromJSON(cJSON *text_inputJSON);

cJSON *text_input_convertToJSON(text_input_t *text_input);

#endif /* _text_input_H_ */

