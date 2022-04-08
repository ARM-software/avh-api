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




typedef struct vpn_definition_t {
    list_t *proxy; //primitive container
    list_t *listeners; //primitive container

} vpn_definition_t;

vpn_definition_t *vpn_definition_create(
    list_t *proxy,
    list_t *listeners
);

void vpn_definition_free(vpn_definition_t *vpn_definition);

vpn_definition_t *vpn_definition_parseFromJSON(cJSON *vpn_definitionJSON);

cJSON *vpn_definition_convertToJSON(vpn_definition_t *vpn_definition);

#endif /* _vpn_definition_H_ */

