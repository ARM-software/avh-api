/*
 * credentials.h
 *
 * 
 */

#ifndef _credentials_H_
#define _credentials_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct credentials_t credentials_t;




typedef struct credentials_t {
    char *username; // string
    char *password; // string

} credentials_t;

credentials_t *credentials_create(
    char *username,
    char *password
);

void credentials_free(credentials_t *credentials);

credentials_t *credentials_parseFromJSON(cJSON *credentialsJSON);

cJSON *credentials_convertToJSON(credentials_t *credentials);

#endif /* _credentials_H_ */

