/*
 * api_error.h
 *
 * 
 */

#ifndef _api_error_H_
#define _api_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_error_t api_error_t;




typedef struct api_error_t {
    char *error; // string
    char *error_id; // string
    char *original_error; // string

} api_error_t;

api_error_t *api_error_create(
    char *error,
    char *error_id,
    char *original_error
);

void api_error_free(api_error_t *api_error);

api_error_t *api_error_parseFromJSON(cJSON *api_errorJSON);

cJSON *api_error_convertToJSON(api_error_t *api_error);

#endif /* _api_error_H_ */

