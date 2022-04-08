/*
 * model.h
 *
 * 
 */

#ifndef _model_H_
#define _model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct model_t model_t;




typedef struct model_t {
    char *type; // string
    char *name; // string
    char *flavor; // string
    char *description; // string
    char *model; // string
    char *board_config; // string
    char *platform; // string
    double cpid; //numeric
    double bdid; //numeric
    int peripherals; //boolean

} model_t;

model_t *model_create(
    char *type,
    char *name,
    char *flavor,
    char *description,
    char *model,
    char *board_config,
    char *platform,
    double cpid,
    double bdid,
    int peripherals
);

void model_free(model_t *model);

model_t *model_parseFromJSON(cJSON *modelJSON);

cJSON *model_convertToJSON(model_t *model);

#endif /* _model_H_ */

