/*
 * api_conflict_error.h
 *
 * 
 */

#ifndef _api_conflict_error_H_
#define _api_conflict_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_conflict_error_t api_conflict_error_t;

#include "any_type.h"
#include "object.h"

// Enum ERRORID for api_conflict_error

typedef enum  { arm_api_api_conflict_error_ERRORID_NULL = 0, arm_api_api_conflict_error_ERRORID_Conflict } arm_api_api_conflict_error_ERRORID_e;

char* api_conflict_error_error_id_ToString(arm_api_api_conflict_error_ERRORID_e error_id);

arm_api_api_conflict_error_ERRORID_e api_conflict_error_error_id_FromString(char* error_id);



typedef struct api_conflict_error_t {
    char *error; // string
    arm_api_api_conflict_error_ERRORID_e error_id; //enum
    object_t *object; //object

} api_conflict_error_t;

api_conflict_error_t *api_conflict_error_create(
    char *error,
    arm_api_api_conflict_error_ERRORID_e error_id,
    object_t *object
);

void api_conflict_error_free(api_conflict_error_t *api_conflict_error);

api_conflict_error_t *api_conflict_error_parseFromJSON(cJSON *api_conflict_errorJSON);

cJSON *api_conflict_error_convertToJSON(api_conflict_error_t *api_conflict_error);

#endif /* _api_conflict_error_H_ */

