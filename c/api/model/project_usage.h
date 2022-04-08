/*
 * project_usage.h
 *
 * 
 */

#ifndef _project_usage_H_
#define _project_usage_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_usage_t project_usage_t;




typedef struct project_usage_t {
    double cores; //numeric
    double instances; //numeric
    double ram; //numeric
    double gpu; //numeric

} project_usage_t;

project_usage_t *project_usage_create(
    double cores,
    double instances,
    double ram,
    double gpu
);

void project_usage_free(project_usage_t *project_usage);

project_usage_t *project_usage_parseFromJSON(cJSON *project_usageJSON);

cJSON *project_usage_convertToJSON(project_usage_t *project_usage);

#endif /* _project_usage_H_ */

