/*
 * instance_return.h
 *
 * 
 */

#ifndef _instance_return_H_
#define _instance_return_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_return_t instance_return_t;

#include "instance_state.h"



typedef struct instance_return_t {
    char *id; // string
    arm_api_instance_state__e state; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} instance_return_t;

__attribute__((deprecated)) instance_return_t *instance_return_create(
    char *id,
    arm_api_instance_state__e state
);

void instance_return_free(instance_return_t *instance_return);

instance_return_t *instance_return_parseFromJSON(cJSON *instance_returnJSON);

cJSON *instance_return_convertToJSON(instance_return_t *instance_return);

#endif /* _instance_return_H_ */

