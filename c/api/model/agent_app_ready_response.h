/*
 * agent_app_ready_response.h
 *
 * 
 */

#ifndef _agent_app_ready_response_H_
#define _agent_app_ready_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_app_ready_response_t agent_app_ready_response_t;




typedef struct agent_app_ready_response_t {
    int ready; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} agent_app_ready_response_t;

__attribute__((deprecated)) agent_app_ready_response_t *agent_app_ready_response_create(
    int ready
);

void agent_app_ready_response_free(agent_app_ready_response_t *agent_app_ready_response);

agent_app_ready_response_t *agent_app_ready_response_parseFromJSON(cJSON *agent_app_ready_responseJSON);

cJSON *agent_app_ready_response_convertToJSON(agent_app_ready_response_t *agent_app_ready_response);

#endif /* _agent_app_ready_response_H_ */

