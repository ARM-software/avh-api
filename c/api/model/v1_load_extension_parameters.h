/*
 * v1_load_extension_parameters.h
 *
 * 
 */

#ifndef _v1_load_extension_parameters_H_
#define _v1_load_extension_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_load_extension_parameters_t v1_load_extension_parameters_t;




typedef struct v1_load_extension_parameters_t {
    char *image_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} v1_load_extension_parameters_t;

__attribute__((deprecated)) v1_load_extension_parameters_t *v1_load_extension_parameters_create(
    char *image_id
);

void v1_load_extension_parameters_free(v1_load_extension_parameters_t *v1_load_extension_parameters);

v1_load_extension_parameters_t *v1_load_extension_parameters_parseFromJSON(cJSON *v1_load_extension_parametersJSON);

cJSON *v1_load_extension_parameters_convertToJSON(v1_load_extension_parameters_t *v1_load_extension_parameters);

#endif /* _v1_load_extension_parameters_H_ */

