/*
 * agent_apps_status_list.h
 *
 * 
 */

#ifndef _agent_apps_status_list_H_
#define _agent_apps_status_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_apps_status_list_t agent_apps_status_list_t;

#include "agent_app_status.h"



typedef struct agent_apps_status_list_t {
    list_t *apps; //nonprimitive container
    char *frontmost; // string

    int _library_owned; // Is the library responsible for freeing this object?
} agent_apps_status_list_t;

__attribute__((deprecated)) agent_apps_status_list_t *agent_apps_status_list_create(
    list_t *apps,
    char *frontmost
);

void agent_apps_status_list_free(agent_apps_status_list_t *agent_apps_status_list);

agent_apps_status_list_t *agent_apps_status_list_parseFromJSON(cJSON *agent_apps_status_listJSON);

cJSON *agent_apps_status_list_convertToJSON(agent_apps_status_list_t *agent_apps_status_list);

#endif /* _agent_apps_status_list_H_ */

