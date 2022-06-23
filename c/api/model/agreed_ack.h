/*
 * agreed_ack.h
 *
 * 
 */

#ifndef _agreed_ack_H_
#define _agreed_ack_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agreed_ack_t agreed_ack_t;




typedef struct agreed_ack_t {
    char *agreed_to_terms; //date time

    int _library_owned; // Is the library responsible for freeing this object?
} agreed_ack_t;

__attribute__((deprecated)) agreed_ack_t *agreed_ack_create(
    char *agreed_to_terms
);

void agreed_ack_free(agreed_ack_t *agreed_ack);

agreed_ack_t *agreed_ack_parseFromJSON(cJSON *agreed_ackJSON);

cJSON *agreed_ack_convertToJSON(agreed_ack_t *agreed_ack);

#endif /* _agreed_ack_H_ */

