/*
 * instance_stop_options.h
 *
 * 
 */

#ifndef _instance_stop_options_H_
#define _instance_stop_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_stop_options_t instance_stop_options_t;




typedef struct instance_stop_options_t {
    int soft; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} instance_stop_options_t;

__attribute__((deprecated)) instance_stop_options_t *instance_stop_options_create(
    int soft
);

void instance_stop_options_free(instance_stop_options_t *instance_stop_options);

instance_stop_options_t *instance_stop_options_parseFromJSON(cJSON *instance_stop_optionsJSON);

cJSON *instance_stop_options_convertToJSON(instance_stop_options_t *instance_stop_options);

#endif /* _instance_stop_options_H_ */

