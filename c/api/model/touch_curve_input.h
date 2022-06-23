/*
 * touch_curve_input.h
 *
 * 
 */

#ifndef _touch_curve_input_H_
#define _touch_curve_input_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct touch_curve_input_t touch_curve_input_t;

#include "any_type.h"
#include "object.h"



typedef struct touch_curve_input_t {
    object_t *start; //object
    object_t *end; //object

    int _library_owned; // Is the library responsible for freeing this object?
} touch_curve_input_t;

__attribute__((deprecated)) touch_curve_input_t *touch_curve_input_create(
    object_t *start,
    object_t *end
);

void touch_curve_input_free(touch_curve_input_t *touch_curve_input);

touch_curve_input_t *touch_curve_input_parseFromJSON(cJSON *touch_curve_inputJSON);

cJSON *touch_curve_input_convertToJSON(touch_curve_input_t *touch_curve_input);

#endif /* _touch_curve_input_H_ */

