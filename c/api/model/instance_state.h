/*
 * instance_state.h
 *
 * Current Instance State
 */

#ifndef _instance_state_H_
#define _instance_state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_state_t instance_state_t;


// Enum  for instance_state

typedef enum { arm_api_instance_state__NULL = 0, arm_api_instance_state__on, arm_api_instance_state__off, arm_api_instance_state__deleting, arm_api_instance_state__creating, arm_api_instance_state__restoring, arm_api_instance_state__paused, arm_api_instance_state__rebooting, arm_api_instance_state__error } arm_api_instance_state__e;

char* instance_state_instance_state_ToString(arm_api_instance_state__e instance_state);

arm_api_instance_state__e instance_state_instance_state_FromString(char* instance_state);

cJSON *instance_state_convertToJSON(arm_api_instance_state__e instance_state);

arm_api_instance_state__e instance_state_parseFromJSON(cJSON *instance_stateJSON);

#endif /* _instance_state_H_ */

