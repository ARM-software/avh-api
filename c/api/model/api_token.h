/*
 * api_token.h
 *
 * 
 */

#ifndef _api_token_H_
#define _api_token_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_token_t api_token_t;




typedef struct api_token_t {
    char *api_token; // string

    int _library_owned; // Is the library responsible for freeing this object?
} api_token_t;

__attribute__((deprecated)) api_token_t *api_token_create(
    char *api_token
);

void api_token_free(api_token_t *api_token);

api_token_t *api_token_parseFromJSON(cJSON *api_tokenJSON);

cJSON *api_token_convertToJSON(api_token_t *api_token);

#endif /* _api_token_H_ */

