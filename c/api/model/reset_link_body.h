/*
 * reset_link_body.h
 *
 * 
 */

#ifndef _reset_link_body_H_
#define _reset_link_body_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reset_link_body_t reset_link_body_t;




typedef struct reset_link_body_t {
    char *email; // string

    int _library_owned; // Is the library responsible for freeing this object?
} reset_link_body_t;

__attribute__((deprecated)) reset_link_body_t *reset_link_body_create(
    char *email
);

void reset_link_body_free(reset_link_body_t *reset_link_body);

reset_link_body_t *reset_link_body_parseFromJSON(cJSON *reset_link_bodyJSON);

cJSON *reset_link_body_convertToJSON(reset_link_body_t *reset_link_body);

#endif /* _reset_link_body_H_ */

