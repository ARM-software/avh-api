/*
 * role.h
 *
 * 
 */

#ifndef _role_H_
#define _role_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct role_t role_t;


// Enum ROLE for role

typedef enum  { arm_api_role_ROLE_NULL = 0, arm_api_role_ROLE_admin, arm_api_role_ROLE__member_ } arm_api_role_ROLE_e;

char* role_role_ToString(arm_api_role_ROLE_e role);

arm_api_role_ROLE_e role_role_FromString(char* role);



typedef struct role_t {
    arm_api_role_ROLE_e role; //enum
    char *project; // string
    char *user; // string

    int _library_owned; // Is the library responsible for freeing this object?
} role_t;

__attribute__((deprecated)) role_t *role_create(
    arm_api_role_ROLE_e role,
    char *project,
    char *user
);

void role_free(role_t *role);

role_t *role_parseFromJSON(cJSON *roleJSON);

cJSON *role_convertToJSON(role_t *role);

#endif /* _role_H_ */

