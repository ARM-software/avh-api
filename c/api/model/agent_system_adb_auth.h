/*
 * agent_system_adb_auth.h
 *
 * 
 */

#ifndef _agent_system_adb_auth_H_
#define _agent_system_adb_auth_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_system_adb_auth_t agent_system_adb_auth_t;




typedef struct agent_system_adb_auth_t {
    int enabled; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} agent_system_adb_auth_t;

__attribute__((deprecated)) agent_system_adb_auth_t *agent_system_adb_auth_create(
    int enabled
);

void agent_system_adb_auth_free(agent_system_adb_auth_t *agent_system_adb_auth);

agent_system_adb_auth_t *agent_system_adb_auth_parseFromJSON(cJSON *agent_system_adb_authJSON);

cJSON *agent_system_adb_auth_convertToJSON(agent_system_adb_auth_t *agent_system_adb_auth);

#endif /* _agent_system_adb_auth_H_ */

