/*
 * agent_icons.h
 *
 * 
 */

#ifndef _agent_icons_H_
#define _agent_icons_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_icons_t agent_icons_t;




typedef struct agent_icons_t {
    char *icon; //ByteArray

    int _library_owned; // Is the library responsible for freeing this object?
} agent_icons_t;

__attribute__((deprecated)) agent_icons_t *agent_icons_create(
    char *icon
);

void agent_icons_free(agent_icons_t *agent_icons);

agent_icons_t *agent_icons_parseFromJSON(cJSON *agent_iconsJSON);

cJSON *agent_icons_convertToJSON(agent_icons_t *agent_icons);

#endif /* _agent_icons_H_ */

