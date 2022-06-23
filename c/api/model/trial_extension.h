/*
 * trial_extension.h
 *
 * 
 */

#ifndef _trial_extension_H_
#define _trial_extension_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trial_extension_t trial_extension_t;




typedef struct trial_extension_t {
    double duration; //numeric
    char *reason; // string
    int denied; //boolean
    char *denied_reason; // string

    int _library_owned; // Is the library responsible for freeing this object?
} trial_extension_t;

__attribute__((deprecated)) trial_extension_t *trial_extension_create(
    double duration,
    char *reason,
    int denied,
    char *denied_reason
);

void trial_extension_free(trial_extension_t *trial_extension);

trial_extension_t *trial_extension_parseFromJSON(cJSON *trial_extensionJSON);

cJSON *trial_extension_convertToJSON(trial_extension_t *trial_extension);

#endif /* _trial_extension_H_ */

