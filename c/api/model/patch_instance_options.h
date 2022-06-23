/*
 * patch_instance_options.h
 *
 * 
 */

#ifndef _patch_instance_options_H_
#define _patch_instance_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct patch_instance_options_t patch_instance_options_t;


// Enum STATE for patch_instance_options

typedef enum  { arm_api_patch_instance_options_STATE_NULL = 0, arm_api_patch_instance_options_STATE_on, arm_api_patch_instance_options_STATE_off, arm_api_patch_instance_options_STATE_paused, arm_api_patch_instance_options_STATE_deleting } arm_api_patch_instance_options_STATE_e;

char* patch_instance_options_state_ToString(arm_api_patch_instance_options_STATE_e state);

arm_api_patch_instance_options_STATE_e patch_instance_options_state_FromString(char* state);



typedef struct patch_instance_options_t {
    char *name; // string
    arm_api_patch_instance_options_STATE_e state; //enum
    char *boot_options; // string
    char *proxy; // string

    int _library_owned; // Is the library responsible for freeing this object?
} patch_instance_options_t;

__attribute__((deprecated)) patch_instance_options_t *patch_instance_options_create(
    char *name,
    arm_api_patch_instance_options_STATE_e state,
    char *boot_options,
    char *proxy
);

void patch_instance_options_free(patch_instance_options_t *patch_instance_options);

patch_instance_options_t *patch_instance_options_parseFromJSON(cJSON *patch_instance_optionsJSON);

cJSON *patch_instance_options_convertToJSON(patch_instance_options_t *patch_instance_options);

#endif /* _patch_instance_options_H_ */

