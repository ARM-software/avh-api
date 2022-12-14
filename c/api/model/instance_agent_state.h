/*
 * instance_agent_state.h
 *
 * 
 */

#ifndef _instance_agent_state_H_
#define _instance_agent_state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct instance_agent_state_t instance_agent_state_t;




typedef struct instance_agent_state_t {
    char *hash; // string
    char *info; // string

    int _library_owned; // Is the library responsible for freeing this object?
} instance_agent_state_t;

__attribute__((deprecated)) instance_agent_state_t *instance_agent_state_create(
    char *hash,
    char *info
);

void instance_agent_state_free(instance_agent_state_t *instance_agent_state);

instance_agent_state_t *instance_agent_state_parseFromJSON(cJSON *instance_agent_stateJSON);

cJSON *instance_agent_state_convertToJSON(instance_agent_state_t *instance_agent_state);

#endif /* _instance_agent_state_H_ */

