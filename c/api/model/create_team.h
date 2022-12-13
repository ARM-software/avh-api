/*
 * create_team.h
 *
 * 
 */

#ifndef _create_team_H_
#define _create_team_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_team_t create_team_t;




typedef struct create_team_t {
    char *name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} create_team_t;

__attribute__((deprecated)) create_team_t *create_team_create(
    char *name
);

void create_team_free(create_team_t *create_team);

create_team_t *create_team_parseFromJSON(cJSON *create_teamJSON);

cJSON *create_team_convertToJSON(create_team_t *create_team);

#endif /* _create_team_H_ */

