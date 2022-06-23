/*
 * agent_value_return.h
 *
 * 
 */

#ifndef _agent_value_return_H_
#define _agent_value_return_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_value_return_t agent_value_return_t;




typedef struct agent_value_return_t {
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} agent_value_return_t;

__attribute__((deprecated)) agent_value_return_t *agent_value_return_create(
    char *value
);

void agent_value_return_free(agent_value_return_t *agent_value_return);

agent_value_return_t *agent_value_return_parseFromJSON(cJSON *agent_value_returnJSON);

cJSON *agent_value_return_convertToJSON(agent_value_return_t *agent_value_return);

#endif /* _agent_value_return_H_ */

