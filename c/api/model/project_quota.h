/*
 * project_quota.h
 *
 * 
 */

#ifndef _project_quota_H_
#define _project_quota_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_quota_t project_quota_t;




typedef struct project_quota_t {
    double cores; //numeric
    double instances; //numeric
    double ram; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} project_quota_t;

__attribute__((deprecated)) project_quota_t *project_quota_create(
    double cores,
    double instances,
    double ram
);

void project_quota_free(project_quota_t *project_quota);

project_quota_t *project_quota_parseFromJSON(cJSON *project_quotaJSON);

cJSON *project_quota_convertToJSON(project_quota_t *project_quota);

#endif /* _project_quota_H_ */

