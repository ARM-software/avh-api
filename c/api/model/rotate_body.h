/*
 * rotate_body.h
 *
 * 
 */

#ifndef _rotate_body_H_
#define _rotate_body_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rotate_body_t rotate_body_t;


// Enum ORIENTATION for rotate_body

typedef enum  { arm_api_rotate_body_ORIENTATION_NULL = 0, arm_api_rotate_body_ORIENTATION__1, arm_api_rotate_body_ORIENTATION__2, arm_api_rotate_body_ORIENTATION__3, arm_api_rotate_body_ORIENTATION__4 } arm_api_rotate_body_ORIENTATION_e;

char* rotate_body_orientation_ToString(arm_api_rotate_body_ORIENTATION_e orientation);

arm_api_rotate_body_ORIENTATION_e rotate_body_orientation_FromString(char* orientation);



typedef struct rotate_body_t {
    double orientation; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} rotate_body_t;

__attribute__((deprecated)) rotate_body_t *rotate_body_create(
    double orientation
);

void rotate_body_free(rotate_body_t *rotate_body);

rotate_body_t *rotate_body_parseFromJSON(cJSON *rotate_bodyJSON);

cJSON *rotate_body_convertToJSON(rotate_body_t *rotate_body);

#endif /* _rotate_body_H_ */

