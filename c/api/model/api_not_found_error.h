/*
 * api_not_found_error.h
 *
 * 
 */

#ifndef _api_not_found_error_H_
#define _api_not_found_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_not_found_error_t api_not_found_error_t;

#include "any_type.h"
#include "object.h"



typedef struct api_not_found_error_t {
    char *error; // string
    char *error_id; // string
    char *name; // string
    object_t *params; //object

} api_not_found_error_t;

api_not_found_error_t *api_not_found_error_create(
    char *error,
    char *error_id,
    char *name,
    object_t *params
);

void api_not_found_error_free(api_not_found_error_t *api_not_found_error);

api_not_found_error_t *api_not_found_error_parseFromJSON(cJSON *api_not_found_errorJSON);

cJSON *api_not_found_error_convertToJSON(api_not_found_error_t *api_not_found_error);

#endif /* _api_not_found_error_H_ */

