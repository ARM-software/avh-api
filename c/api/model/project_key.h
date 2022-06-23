/*
 * project_key.h
 *
 * 
 */

#ifndef _project_key_H_
#define _project_key_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_key_t project_key_t;


// Enum KIND for project_key

typedef enum  { arm_api_project_key_KIND_NULL = 0, arm_api_project_key_KIND_ssh, arm_api_project_key_KIND_adb } arm_api_project_key_KIND_e;

char* project_key_kind_ToString(arm_api_project_key_KIND_e kind);

arm_api_project_key_KIND_e project_key_kind_FromString(char* kind);



typedef struct project_key_t {
    char *identifier; // string
    arm_api_project_key_KIND_e kind; //enum
    char *project; // string
    char *key; // string
    char *fingerprint; // string
    char *updated_at; //date time
    char *created_at; //date time

    int _library_owned; // Is the library responsible for freeing this object?
} project_key_t;

__attribute__((deprecated)) project_key_t *project_key_create(
    char *identifier,
    arm_api_project_key_KIND_e kind,
    char *project,
    char *key,
    char *fingerprint,
    char *updated_at,
    char *created_at
);

void project_key_free(project_key_t *project_key);

project_key_t *project_key_parseFromJSON(cJSON *project_keyJSON);

cJSON *project_key_convertToJSON(project_key_t *project_key);

#endif /* _project_key_H_ */

