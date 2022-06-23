/*
 * password_reset_body.h
 *
 * 
 */

#ifndef _password_reset_body_H_
#define _password_reset_body_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct password_reset_body_t password_reset_body_t;




typedef struct password_reset_body_t {
    char *token; // string
    char *totp_token; // string
    char *new_password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} password_reset_body_t;

__attribute__((deprecated)) password_reset_body_t *password_reset_body_create(
    char *token,
    char *totp_token,
    char *new_password
);

void password_reset_body_free(password_reset_body_t *password_reset_body);

password_reset_body_t *password_reset_body_parseFromJSON(cJSON *password_reset_bodyJSON);

cJSON *password_reset_body_convertToJSON(password_reset_body_t *password_reset_body);

#endif /* _password_reset_body_H_ */

