/*
 * team.h
 *
 * 
 */

#ifndef _team_H_
#define _team_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct team_t team_t;

#include "user.h"



typedef struct team_t {
    char *id; // string
    char *label; // string
    list_t *users; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} team_t;

__attribute__((deprecated)) team_t *team_create(
    char *id,
    char *label,
    list_t *users
);

void team_free(team_t *team);

team_t *team_parseFromJSON(cJSON *teamJSON);

cJSON *team_convertToJSON(team_t *team);

#endif /* _team_H_ */

