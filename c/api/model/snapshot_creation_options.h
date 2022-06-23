/*
 * snapshot_creation_options.h
 *
 * 
 */

#ifndef _snapshot_creation_options_H_
#define _snapshot_creation_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct snapshot_creation_options_t snapshot_creation_options_t;




typedef struct snapshot_creation_options_t {
    char *name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} snapshot_creation_options_t;

__attribute__((deprecated)) snapshot_creation_options_t *snapshot_creation_options_create(
    char *name
);

void snapshot_creation_options_free(snapshot_creation_options_t *snapshot_creation_options);

snapshot_creation_options_t *snapshot_creation_options_parseFromJSON(cJSON *snapshot_creation_optionsJSON);

cJSON *snapshot_creation_options_convertToJSON(snapshot_creation_options_t *snapshot_creation_options);

#endif /* _snapshot_creation_options_H_ */

