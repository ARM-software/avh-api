/*
 * instance_netmon_state.h
 *
 * 
 */

#ifndef _instance_netmon_state_H_
#define _instance_netmon_state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_netmon_state_t instance_netmon_state_t;




typedef struct instance_netmon_state_t {
    int enabled; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} instance_netmon_state_t;

__attribute__((deprecated)) instance_netmon_state_t *instance_netmon_state_create(
    int enabled
);

void instance_netmon_state_free(instance_netmon_state_t *instance_netmon_state);

instance_netmon_state_t *instance_netmon_state_parseFromJSON(cJSON *instance_netmon_stateJSON);

cJSON *instance_netmon_state_convertToJSON(instance_netmon_state_t *instance_netmon_state);

#endif /* _instance_netmon_state_H_ */

