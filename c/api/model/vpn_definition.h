/*
 * vpn_definition.h
 *
 * 
 */

#ifndef _vpn_definition_H_
#define _vpn_definition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vpn_definition_t vpn_definition_t;

#include "any_type.h"
#include "object.h"



typedef struct vpn_definition_t {
    list_t *proxy; //nonprimitive container
    list_t *listeners; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} vpn_definition_t;

__attribute__((deprecated)) vpn_definition_t *vpn_definition_create(
    list_t *proxy,
    list_t *listeners
);

void vpn_definition_free(vpn_definition_t *vpn_definition);

vpn_definition_t *vpn_definition_parseFromJSON(cJSON *vpn_definitionJSON);

cJSON *vpn_definition_convertToJSON(vpn_definition_t *vpn_definition);

#endif /* _vpn_definition_H_ */

