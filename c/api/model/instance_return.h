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

// Enum  for instance_return

typedef enum  { arm_api_instance_return__NULL = 0, arm_api_instance_return__on, arm_api_instance_return__off, arm_api_instance_return__deleting, arm_api_instance_return__creating, arm_api_instance_return__restoring, arm_api_instance_return__paused, arm_api_instance_return__rebooting, arm_api_instance_return__error } arm_api_instance_return__e;

char* instance_return_state_ToString(arm_api_instance_return__e state);

arm_api_instance_return__e instance_return_state_FromString(char* state);



typedef struct instance_return_t {
    char *id; // string
    instance_state_t *state; // custom

} instance_return_t;

instance_return_t *instance_return_create(
    char *id,
    instance_state_t *state
);

void instance_return_free(instance_return_t *instance_return);

instance_return_t *instance_return_parseFromJSON(cJSON *instance_returnJSON);

cJSON *instance_return_convertToJSON(instance_return_t *instance_return);

#endif /* _instance_return_H_ */

