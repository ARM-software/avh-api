/*
 * validation_error.h
 *
 * 
 */

#ifndef _validation_error_H_
#define _validation_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct validation_error_t validation_error_t;


// Enum ERRORID for validation_error

typedef enum  { arm_api_validation_error_ERRORID_NULL = 0, arm_api_validation_error_ERRORID_ValidationError } arm_api_validation_error_ERRORID_e;

char* validation_error_error_id_ToString(arm_api_validation_error_ERRORID_e error_id);

arm_api_validation_error_ERRORID_e validation_error_error_id_FromString(char* error_id);



typedef struct validation_error_t {
    char *error; // string
    arm_api_validation_error_ERRORID_e error_id; //enum
    char *field; // string

    int _library_owned; // Is the library responsible for freeing this object?
} validation_error_t;

__attribute__((deprecated)) validation_error_t *validation_error_create(
    char *error,
    arm_api_validation_error_ERRORID_e error_id,
    char *field
);

void validation_error_free(validation_error_t *validation_error);

validation_error_t *validation_error_parseFromJSON(cJSON *validation_errorJSON);

cJSON *validation_error_convertToJSON(validation_error_t *validation_error);

#endif /* _validation_error_H_ */

