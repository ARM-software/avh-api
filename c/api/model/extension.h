/*
 * extension.h
 *
 * 
 */

#ifndef _extension_H_
#define _extension_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extension_t extension_t;

#include "any_type.h"
#include "object.h"



typedef struct extension_t {
    char *identifier; // string
    int enabled; //boolean
    char *created_at; // string
    char *updated_at; // string
    char *image_id; // string
    char *state; // string
    list_t *flavors; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} extension_t;

__attribute__((deprecated)) extension_t *extension_create(
    char *identifier,
    int enabled,
    char *created_at,
    char *updated_at,
    char *image_id,
    char *state,
    list_t *flavors
);

void extension_free(extension_t *extension);

extension_t *extension_parseFromJSON(cJSON *extensionJSON);

cJSON *extension_convertToJSON(extension_t *extension);

#endif /* _extension_H_ */

