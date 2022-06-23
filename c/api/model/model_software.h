/*
 * model_software.h
 *
 * 
 */

#ifndef _model_software_H_
#define _model_software_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct model_software_t model_software_t;

#include "firmware.h"



typedef struct model_software_t {
    char *name; // string
    char *board_config; // string
    char *platform; // string
    double cpid; //numeric
    double bdid; //numeric
    list_t *firmwares; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} model_software_t;

__attribute__((deprecated)) model_software_t *model_software_create(
    char *name,
    char *board_config,
    char *platform,
    double cpid,
    double bdid,
    list_t *firmwares
);

void model_software_free(model_software_t *model_software);

model_software_t *model_software_parseFromJSON(cJSON *model_softwareJSON);

cJSON *model_software_convertToJSON(model_software_t *model_software);

#endif /* _model_software_H_ */

