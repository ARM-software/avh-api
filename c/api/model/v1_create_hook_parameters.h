/*
 * v1_create_hook_parameters.h
 *
 * 
 */

#ifndef _v1_create_hook_parameters_H_
#define _v1_create_hook_parameters_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_create_hook_parameters_t v1_create_hook_parameters_t;


// Enum PATCHTYPE for v1_create_hook_parameters

typedef enum  { arm_api_v1_create_hook_parameters_PATCHTYPE_NULL = 0, arm_api_v1_create_hook_parameters_PATCHTYPE_csmfcc, arm_api_v1_create_hook_parameters_PATCHTYPE_csmfvm } arm_api_v1_create_hook_parameters_PATCHTYPE_e;

char* v1_create_hook_parameters_patch_type_ToString(arm_api_v1_create_hook_parameters_PATCHTYPE_e patch_type);

arm_api_v1_create_hook_parameters_PATCHTYPE_e v1_create_hook_parameters_patch_type_FromString(char* patch_type);



typedef struct v1_create_hook_parameters_t {
    char *label; // string
    char *address; // string
    char *patch; // string
    arm_api_v1_create_hook_parameters_PATCHTYPE_e patch_type; //enum

    int _library_owned; // Is the library responsible for freeing this object?
} v1_create_hook_parameters_t;

__attribute__((deprecated)) v1_create_hook_parameters_t *v1_create_hook_parameters_create(
    char *label,
    char *address,
    char *patch,
    arm_api_v1_create_hook_parameters_PATCHTYPE_e patch_type
);

void v1_create_hook_parameters_free(v1_create_hook_parameters_t *v1_create_hook_parameters);

v1_create_hook_parameters_t *v1_create_hook_parameters_parseFromJSON(cJSON *v1_create_hook_parametersJSON);

cJSON *v1_create_hook_parameters_convertToJSON(v1_create_hook_parameters_t *v1_create_hook_parameters);

#endif /* _v1_create_hook_parameters_H_ */

