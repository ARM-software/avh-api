/*
 * agent_app_status.h
 *
 * 
 */

#ifndef _agent_app_status_H_
#define _agent_app_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_app_status_t agent_app_status_t;




typedef struct agent_app_status_t {
    int running; //boolean
    char *bundle_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} agent_app_status_t;

__attribute__((deprecated)) agent_app_status_t *agent_app_status_create(
    int running,
    char *bundle_id
);

void agent_app_status_free(agent_app_status_t *agent_app_status);

agent_app_status_t *agent_app_status_parseFromJSON(cJSON *agent_app_statusJSON);

cJSON *agent_app_status_convertToJSON(agent_app_status_t *agent_app_status);

#endif /* _agent_app_status_H_ */

