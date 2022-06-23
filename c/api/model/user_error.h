/*
 * user_error.h
 *
 * 
 */

#ifndef _user_error_H_
#define _user_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_error_t user_error_t;


// Enum ERRORID for user_error

typedef enum  { arm_api_user_error_ERRORID_NULL = 0, arm_api_user_error_ERRORID_UserError } arm_api_user_error_ERRORID_e;

char* user_error_error_id_ToString(arm_api_user_error_ERRORID_e error_id);

arm_api_user_error_ERRORID_e user_error_error_id_FromString(char* error_id);



typedef struct user_error_t {
    char *error; // string
    arm_api_user_error_ERRORID_e error_id; //enum
    char *field; // string

    int _library_owned; // Is the library responsible for freeing this object?
} user_error_t;

__attribute__((deprecated)) user_error_t *user_error_create(
    char *error,
    arm_api_user_error_ERRORID_e error_id,
    char *field
);

void user_error_free(user_error_t *user_error);

user_error_t *user_error_parseFromJSON(cJSON *user_errorJSON);

cJSON *user_error_convertToJSON(user_error_t *user_error);

#endif /* _user_error_H_ */

