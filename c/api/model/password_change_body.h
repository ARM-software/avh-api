/*
 * password_change_body.h
 *
 * 
 */

#ifndef _password_change_body_H_
#define _password_change_body_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct password_change_body_t password_change_body_t;




typedef struct password_change_body_t {
    char *user; // string
    char *old_password; // string
    char *new_password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} password_change_body_t;

__attribute__((deprecated)) password_change_body_t *password_change_body_create(
    char *user,
    char *old_password,
    char *new_password
);

void password_change_body_free(password_change_body_t *password_change_body);

password_change_body_t *password_change_body_parseFromJSON(cJSON *password_change_bodyJSON);

cJSON *password_change_body_convertToJSON(password_change_body_t *password_change_body);

#endif /* _password_change_body_H_ */

