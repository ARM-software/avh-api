/*
 * volume_options.h
 *
 * 
 */

#ifndef _volume_options_H_
#define _volume_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct volume_options_t volume_options_t;

#include "any_type.h"
#include "object.h"



typedef struct volume_options_t {
    double allocate; //numeric
    list_t *partitions; //nonprimitive container
    char *compute_node; // string

} volume_options_t;

volume_options_t *volume_options_create(
    double allocate,
    list_t *partitions,
    char *compute_node
);

void volume_options_free(volume_options_t *volume_options);

volume_options_t *volume_options_parseFromJSON(cJSON *volume_optionsJSON);

cJSON *volume_options_convertToJSON(volume_options_t *volume_options);

#endif /* _volume_options_H_ */

