/*
 * trial_request_options.h
 *
 * 
 */

#ifndef _trial_request_options_H_
#define _trial_request_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trial_request_options_t trial_request_options_t;

#include "address.h"
#include "trial_request_metadata.h"



typedef struct trial_request_options_t {
    struct address_t *address; //model
    char *email; // string
    char *name; // string
    struct trial_request_metadata_t *metadata; //model
    int enterprise; //boolean
    char *token; // string

    int _library_owned; // Is the library responsible for freeing this object?
} trial_request_options_t;

__attribute__((deprecated)) trial_request_options_t *trial_request_options_create(
    address_t *address,
    char *email,
    char *name,
    trial_request_metadata_t *metadata,
    int enterprise,
    char *token
);

void trial_request_options_free(trial_request_options_t *trial_request_options);

trial_request_options_t *trial_request_options_parseFromJSON(cJSON *trial_request_optionsJSON);

cJSON *trial_request_options_convertToJSON(trial_request_options_t *trial_request_options);

#endif /* _trial_request_options_H_ */

