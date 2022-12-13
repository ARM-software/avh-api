/*
 * update_extension.h
 *
 * 
 */

#ifndef _update_extension_H_
#define _update_extension_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_extension_t update_extension_t;




typedef struct update_extension_t {
    int enabled; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} update_extension_t;

__attribute__((deprecated)) update_extension_t *update_extension_create(
    int enabled
);

void update_extension_free(update_extension_t *update_extension);

update_extension_t *update_extension_parseFromJSON(cJSON *update_extensionJSON);

cJSON *update_extension_convertToJSON(update_extension_t *update_extension);

#endif /* _update_extension_H_ */

