/*
 * snapshot.h
 *
 * 
 */

#ifndef _snapshot_H_
#define _snapshot_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct snapshot_t snapshot_t;

#include "snapshot_status.h"



typedef struct snapshot_t {
    char *id; // string
    char *name; // string
    char *instance; // string
    struct snapshot_status_t *status; //model
    double date; //numeric
    int fresh; //boolean
    int live; //boolean
    int local; //boolean

} snapshot_t;

snapshot_t *snapshot_create(
    char *id,
    char *name,
    char *instance,
    snapshot_status_t *status,
    double date,
    int fresh,
    int live,
    int local
);

void snapshot_free(snapshot_t *snapshot);

snapshot_t *snapshot_parseFromJSON(cJSON *snapshotJSON);

cJSON *snapshot_convertToJSON(snapshot_t *snapshot);

#endif /* _snapshot_H_ */

