/*
 * touch_input.h
 *
 * 
 */

#ifndef _touch_input_H_
#define _touch_input_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct touch_input_t touch_input_t;

#include "any_type.h"
#include "object.h"



typedef struct touch_input_t {
    object_t *position; //object

    int _library_owned; // Is the library responsible for freeing this object?
} touch_input_t;

__attribute__((deprecated)) touch_input_t *touch_input_create(
    object_t *position
);

void touch_input_free(touch_input_t *touch_input);

touch_input_t *touch_input_parseFromJSON(cJSON *touch_inputJSON);

cJSON *touch_input_convertToJSON(touch_input_t *touch_input);

#endif /* _touch_input_H_ */

