/*
 * invite_revoke_params.h
 *
 * 
 */

#ifndef _invite_revoke_params_H_
#define _invite_revoke_params_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invite_revoke_params_t invite_revoke_params_t;

#include "invite_revoke_params_ids.h"



typedef struct invite_revoke_params_t {
    struct invite_revoke_params_ids_t *ids; //model

    int _library_owned; // Is the library responsible for freeing this object?
} invite_revoke_params_t;

__attribute__((deprecated)) invite_revoke_params_t *invite_revoke_params_create(
    invite_revoke_params_ids_t *ids
);

void invite_revoke_params_free(invite_revoke_params_t *invite_revoke_params);

invite_revoke_params_t *invite_revoke_params_parseFromJSON(cJSON *invite_revoke_paramsJSON);

cJSON *invite_revoke_params_convertToJSON(invite_revoke_params_t *invite_revoke_params);

#endif /* _invite_revoke_params_H_ */

