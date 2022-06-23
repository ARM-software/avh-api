/*
 * api_internal_consistency_error.h
 *
 * 
 */

#ifndef _api_internal_consistency_error_H_
#define _api_internal_consistency_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_internal_consistency_error_t api_internal_consistency_error_t;




typedef struct api_internal_consistency_error_t {
    char *error; // string
    char *error_id; // string
    char *original_error; // string

    int _library_owned; // Is the library responsible for freeing this object?
} api_internal_consistency_error_t;

__attribute__((deprecated)) api_internal_consistency_error_t *api_internal_consistency_error_create(
    char *error,
    char *error_id,
    char *original_error
);

void api_internal_consistency_error_free(api_internal_consistency_error_t *api_internal_consistency_error);

api_internal_consistency_error_t *api_internal_consistency_error_parseFromJSON(cJSON *api_internal_consistency_errorJSON);

cJSON *api_internal_consistency_error_convertToJSON(api_internal_consistency_error_t *api_internal_consistency_error);

#endif /* _api_internal_consistency_error_H_ */

