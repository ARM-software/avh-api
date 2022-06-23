/*
 * instance_input.h
 *
 * 
 */

#ifndef _instance_input_H_
#define _instance_input_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_input_t instance_input_t;

#include "any_type.h"
#include "object.h"
#include "text_input.h"
#include "touch_curve_input.h"
#include "touch_input.h"



typedef struct instance_input_t {
    object_t *position; //object
    object_t *start; //object
    object_t *end; //object
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} instance_input_t;

__attribute__((deprecated)) instance_input_t *instance_input_create(
    object_t *position,
    object_t *start,
    object_t *end,
    char *text
);

void instance_input_free(instance_input_t *instance_input);

instance_input_t *instance_input_parseFromJSON(cJSON *instance_inputJSON);

cJSON *instance_input_convertToJSON(instance_input_t *instance_input);

#endif /* _instance_input_H_ */

