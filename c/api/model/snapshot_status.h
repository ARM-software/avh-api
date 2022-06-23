/*
 * snapshot_status.h
 *
 * 
 */

#ifndef _snapshot_status_H_
#define _snapshot_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct snapshot_status_t snapshot_status_t;




typedef struct snapshot_status_t {
    char *task; // string
    int created; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} snapshot_status_t;

__attribute__((deprecated)) snapshot_status_t *snapshot_status_create(
    char *task,
    int created
);

void snapshot_status_free(snapshot_status_t *snapshot_status);

snapshot_status_t *snapshot_status_parseFromJSON(cJSON *snapshot_statusJSON);

cJSON *snapshot_status_convertToJSON(snapshot_status_t *snapshot_status);

#endif /* _snapshot_status_H_ */

