/*
 * invitation.h
 *
 * 
 */

#ifndef _invitation_H_
#define _invitation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invitation_t invitation_t;

#include "any_type.h"
#include "object.h"



typedef struct invitation_t {
    char *identifier; // string
    char *email; // string
    object_t *settings; //object

    int _library_owned; // Is the library responsible for freeing this object?
} invitation_t;

__attribute__((deprecated)) invitation_t *invitation_create(
    char *identifier,
    char *email,
    object_t *settings
);

void invitation_free(invitation_t *invitation);

invitation_t *invitation_parseFromJSON(cJSON *invitationJSON);

cJSON *invitation_convertToJSON(invitation_t *invitation);

#endif /* _invitation_H_ */

