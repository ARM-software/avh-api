/*
 * agent_profiles_return.h
 *
 * 
 */

#ifndef _agent_profiles_return_H_
#define _agent_profiles_return_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_profiles_return_t agent_profiles_return_t;




typedef struct agent_profiles_return_t {
    list_t *profiles; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} agent_profiles_return_t;

__attribute__((deprecated)) agent_profiles_return_t *agent_profiles_return_create(
    list_t *profiles
);

void agent_profiles_return_free(agent_profiles_return_t *agent_profiles_return);

agent_profiles_return_t *agent_profiles_return_parseFromJSON(cJSON *agent_profiles_returnJSON);

cJSON *agent_profiles_return_convertToJSON(agent_profiles_return_t *agent_profiles_return);

#endif /* _agent_profiles_return_H_ */

