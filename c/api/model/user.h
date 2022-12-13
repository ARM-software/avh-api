/*
 * user.h
 *
 * /**
 */

#ifndef _user_H_
#define _user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_t user_t;




typedef struct user_t {
    char *id; // string
    char *label; // string
    char *name; // string
    char *email; // string
    int administrator; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} user_t;

__attribute__((deprecated)) user_t *user_create(
    char *id,
    char *label,
    char *name,
    char *email,
    int administrator
);

void user_free(user_t *user);

user_t *user_parseFromJSON(cJSON *userJSON);

cJSON *user_convertToJSON(user_t *user);

#endif /* _user_H_ */

