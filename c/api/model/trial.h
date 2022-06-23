/*
 * trial.h
 *
 * Trial options
 */

#ifndef _trial_H_
#define _trial_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trial_t trial_t;




typedef struct trial_t {
    double duration; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} trial_t;

__attribute__((deprecated)) trial_t *trial_create(
    double duration
);

void trial_free(trial_t *trial);

trial_t *trial_parseFromJSON(cJSON *trialJSON);

cJSON *trial_convertToJSON(trial_t *trial);

#endif /* _trial_H_ */

