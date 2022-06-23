/*
 * address.h
 *
 * The user&#39;s address
 */

#ifndef _address_H_
#define _address_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_t address_t;




typedef struct address_t {
    char *address1; // string
    char *address2; // string
    char *city; // string
    char *country; // string
    char *postal_code; // string
    char *state; // string

    int _library_owned; // Is the library responsible for freeing this object?
} address_t;

__attribute__((deprecated)) address_t *address_create(
    char *address1,
    char *address2,
    char *city,
    char *country,
    char *postal_code,
    char *state
);

void address_free(address_t *address);

address_t *address_parseFromJSON(cJSON *addressJSON);

cJSON *address_convertToJSON(address_t *address);

#endif /* _address_H_ */

