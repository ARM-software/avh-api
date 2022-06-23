/*
 * agent_install_body.h
 *
 * 
 */

#ifndef _agent_install_body_H_
#define _agent_install_body_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_install_body_t agent_install_body_t;




typedef struct agent_install_body_t {
    char *path; // string

    int _library_owned; // Is the library responsible for freeing this object?
} agent_install_body_t;

__attribute__((deprecated)) agent_install_body_t *agent_install_body_create(
    char *path
);

void agent_install_body_free(agent_install_body_t *agent_install_body);

agent_install_body_t *agent_install_body_parseFromJSON(cJSON *agent_install_bodyJSON);

cJSON *agent_install_body_convertToJSON(agent_install_body_t *agent_install_body);

#endif /* _agent_install_body_H_ */

