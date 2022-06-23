/*
 * agent_app.h
 *
 * 
 */

#ifndef _agent_app_H_
#define _agent_app_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_app_t agent_app_t;




typedef struct agent_app_t {
    list_t *tags; //primitive container
    int running; //boolean
    int disk_usage; //numeric
    int date; //numeric
    char *application_type; // string
    char *name; // string
    char *bundle_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} agent_app_t;

__attribute__((deprecated)) agent_app_t *agent_app_create(
    list_t *tags,
    int running,
    int disk_usage,
    int date,
    char *application_type,
    char *name,
    char *bundle_id
);

void agent_app_free(agent_app_t *agent_app);

agent_app_t *agent_app_parseFromJSON(cJSON *agent_appJSON);

cJSON *agent_app_convertToJSON(agent_app_t *agent_app);

#endif /* _agent_app_H_ */

