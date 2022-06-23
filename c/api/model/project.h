/*
 * project.h
 *
 * 
 */

#ifndef _project_H_
#define _project_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_t project_t;

#include "project_quota.h"
#include "project_settings.h"
#include "project_usage.h"



typedef struct project_t {
    char *id; // string
    char *name; // string
    struct project_settings_t *settings; //model
    struct project_quota_t *quotas; //model
    struct project_usage_t *quotas_used; //model

    int _library_owned; // Is the library responsible for freeing this object?
} project_t;

__attribute__((deprecated)) project_t *project_create(
    char *id,
    char *name,
    project_settings_t *settings,
    project_quota_t *quotas,
    project_usage_t *quotas_used
);

void project_free(project_t *project);

project_t *project_parseFromJSON(cJSON *projectJSON);

cJSON *project_convertToJSON(project_t *project);

#endif /* _project_H_ */

