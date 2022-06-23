/*
 * team_create.h
 *
 * 
 */

#ifndef _team_create_H_
#define _team_create_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct team_create_t team_create_t;




typedef struct team_create_t {
    char *id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} team_create_t;

__attribute__((deprecated)) team_create_t *team_create_create(
    char *id
);

void team_create_free(team_create_t *team_create);

team_create_t *team_create_parseFromJSON(cJSON *team_createJSON);

cJSON *team_create_convertToJSON(team_create_t *team_create);

#endif /* _team_create_H_ */

