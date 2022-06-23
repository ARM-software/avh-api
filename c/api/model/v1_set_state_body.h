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



typedef struct v1_set_state_body_t {
    arm_api_instance_state__e state; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} v1_set_state_body_t;

__attribute__((deprecated)) v1_set_state_body_t *v1_set_state_body_create(
    arm_api_instance_state__e state
);

void v1_set_state_body_free(v1_set_state_body_t *v1_set_state_body);

v1_set_state_body_t *v1_set_state_body_parseFromJSON(cJSON *v1_set_state_bodyJSON);

cJSON *v1_set_state_body_convertToJSON(v1_set_state_body_t *v1_set_state_body);

#endif /* _v1_set_state_body_H_ */

