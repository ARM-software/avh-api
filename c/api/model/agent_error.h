/*
 * agent_error.h
 *
 * 
 */

#ifndef _agent_error_H_
#define _agent_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_error_t agent_error_t;

#include "any_type.h"
#include "object.h"

// Enum ERRORID for agent_error

typedef enum  { arm_api_agent_error_ERRORID_NULL = 0, arm_api_agent_error_ERRORID_AgentError } arm_api_agent_error_ERRORID_e;

char* agent_error_error_id_ToString(arm_api_agent_error_ERRORID_e error_id);

arm_api_agent_error_ERRORID_e agent_error_error_id_FromString(char* error_id);



typedef struct agent_error_t {
    char *error; // string
    arm_api_agent_error_ERRORID_e error_id; //enum
    object_t *original_error; //object

    int _library_owned; // Is the library responsible for freeing this object?
} agent_error_t;

__attribute__((deprecated)) agent_error_t *agent_error_create(
    char *error,
    arm_api_agent_error_ERRORID_e error_id,
    object_t *original_error
);

void agent_error_free(agent_error_t *agent_error);

agent_error_t *agent_error_parseFromJSON(cJSON *agent_errorJSON);

cJSON *agent_error_convertToJSON(agent_error_t *agent_error);

#endif /* _agent_error_H_ */

