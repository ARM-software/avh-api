/*
 * invite_revoke_params_ids.h
 *
 * id or array of ids to revoke
 */

#ifndef _invite_revoke_params_ids_H_
#define _invite_revoke_params_ids_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invite_revoke_params_ids_t invite_revoke_params_ids_t;




typedef struct invite_revoke_params_ids_t {

    int _library_owned; // Is the library responsible for freeing this object?
} invite_revoke_params_ids_t;

__attribute__((deprecated)) invite_revoke_params_ids_t *invite_revoke_params_ids_create(
);

void invite_revoke_params_ids_free(invite_revoke_params_ids_t *invite_revoke_params_ids);

invite_revoke_params_ids_t *invite_revoke_params_ids_parseFromJSON(cJSON *invite_revoke_params_idsJSON);

cJSON *invite_revoke_params_ids_convertToJSON(invite_revoke_params_ids_t *invite_revoke_params_ids);

#endif /* _invite_revoke_params_ids_H_ */

