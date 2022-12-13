/*
 * hook.h
 *
 * 
 */

#ifndef _hook_H_
#define _hook_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct hook_t hook_t;


// Enum PATCHTYPE for hook

typedef enum  { arm_api_hook_PATCHTYPE_NULL = 0, arm_api_hook_PATCHTYPE_csmfcc, arm_api_hook_PATCHTYPE_csmfvm } arm_api_hook_PATCHTYPE_e;

char* hook_patch_type_ToString(arm_api_hook_PATCHTYPE_e patch_type);

arm_api_hook_PATCHTYPE_e hook_patch_type_FromString(char* patch_type);



typedef struct hook_t {
    char *identifier; // string
    char *label; // string
    char *address; // string
    char *patch; // string
    arm_api_hook_PATCHTYPE_e patch_type; //enum
    int enabled; //boolean
    char *created_at; // string
    char *updated_at; // string
    char *instance_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} hook_t;

__attribute__((deprecated)) hook_t *hook_create(
    char *identifier,
    char *label,
    char *address,
    char *patch,
    arm_api_hook_PATCHTYPE_e patch_type,
    int enabled,
    char *created_at,
    char *updated_at,
    char *instance_id
);

void hook_free(hook_t *hook);

hook_t *hook_parseFromJSON(cJSON *hookJSON);

cJSON *hook_convertToJSON(hook_t *hook);

#endif /* _hook_H_ */

