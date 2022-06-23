/*
 * token.h
 *
 * 
 */

#ifndef _token_H_
#define _token_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct token_t token_t;




typedef struct token_t {
    char *token; // string
    char *expiration; //date time

    int _library_owned; // Is the library responsible for freeing this object?
} token_t;

__attribute__((deprecated)) token_t *token_create(
    char *token,
    char *expiration
);

void token_free(token_t *token);

token_t *token_parseFromJSON(cJSON *tokenJSON);

cJSON *token_convertToJSON(token_t *token);

#endif /* _token_H_ */

