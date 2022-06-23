/*
 * trial_request_metadata.h
 *
 * 
 */

#ifndef _trial_request_metadata_H_
#define _trial_request_metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trial_request_metadata_t trial_request_metadata_t;




typedef struct trial_request_metadata_t {
    char *name; // string
    char *company; // string
    int malware; //boolean
    int research; //boolean
    int pentest; //boolean
    char *other; // string

    int _library_owned; // Is the library responsible for freeing this object?
} trial_request_metadata_t;

__attribute__((deprecated)) trial_request_metadata_t *trial_request_metadata_create(
    char *name,
    char *company,
    int malware,
    int research,
    int pentest,
    char *other
);

void trial_request_metadata_free(trial_request_metadata_t *trial_request_metadata);

trial_request_metadata_t *trial_request_metadata_parseFromJSON(cJSON *trial_request_metadataJSON);

cJSON *trial_request_metadata_convertToJSON(trial_request_metadata_t *trial_request_metadata);

#endif /* _trial_request_metadata_H_ */

