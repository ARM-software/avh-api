/*
 * instance_start_options.h
 *
 * 
 */

#ifndef _instance_start_options_H_
#define _instance_start_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_start_options_t instance_start_options_t;




typedef struct instance_start_options_t {
    int paused; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} instance_start_options_t;

__attribute__((deprecated)) instance_start_options_t *instance_start_options_create(
    int paused
);

void instance_start_options_free(instance_start_options_t *instance_start_options);

instance_start_options_t *instance_start_options_parseFromJSON(cJSON *instance_start_optionsJSON);

cJSON *instance_start_options_convertToJSON(instance_start_options_t *instance_start_options);

#endif /* _instance_start_options_H_ */

