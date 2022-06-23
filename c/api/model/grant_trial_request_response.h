/*
 * grant_trial_request_response.h
 *
 * 
 */

#ifndef _grant_trial_request_response_H_
#define _grant_trial_request_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct grant_trial_request_response_t grant_trial_request_response_t;




typedef struct grant_trial_request_response_t {
    char *code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} grant_trial_request_response_t;

__attribute__((deprecated)) grant_trial_request_response_t *grant_trial_request_response_create(
    char *code
);

void grant_trial_request_response_free(grant_trial_request_response_t *grant_trial_request_response);

grant_trial_request_response_t *grant_trial_request_response_parseFromJSON(cJSON *grant_trial_request_responseJSON);

cJSON *grant_trial_request_response_convertToJSON(grant_trial_request_response_t *grant_trial_request_response);

#endif /* _grant_trial_request_response_H_ */

