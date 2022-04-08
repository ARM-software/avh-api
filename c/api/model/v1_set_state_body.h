/*
 * v1_set_state_body.h
 *
 * 
 */

#ifndef _v1_set_state_body_H_
#define _v1_set_state_body_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_set_state_body_t v1_set_state_body_t;

#include "instance_state.h"

// Enum  for v1_set_state_body

typedef enum  { arm_api_v1_set_state_body__NULL = 0, arm_api_v1_set_state_body__on, arm_api_v1_set_state_body__off, arm_api_v1_set_state_body__deleting, arm_api_v1_set_state_body__creating, arm_api_v1_set_state_body__restoring, arm_api_v1_set_state_body__paused, arm_api_v1_set_state_body__rebooting, arm_api_v1_set_state_body__error } arm_api_v1_set_state_body__e;

char* v1_set_state_body_state_ToString(arm_api_v1_set_state_body__e state);

arm_api_v1_set_state_body__e v1_set_state_body_state_FromString(char* state);



typedef struct v1_set_state_body_t {
    instance_state_t *state; // custom

} v1_set_state_body_t;

v1_set_state_body_t *v1_set_state_body_create(
    instance_state_t *state
);

void v1_set_state_body_free(v1_set_state_body_t *v1_set_state_body);

v1_set_state_body_t *v1_set_state_body_parseFromJSON(cJSON *v1_set_state_bodyJSON);

cJSON *v1_set_state_body_convertToJSON(v1_set_state_body_t *v1_set_state_body);

#endif /* _v1_set_state_body_H_ */

