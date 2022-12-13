/*
 * web_player_create_session_request.h
 *
 * 
 */

#ifndef _web_player_create_session_request_H_
#define _web_player_create_session_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_player_create_session_request_t web_player_create_session_request_t;

#include "features.h"



typedef struct web_player_create_session_request_t {
    char *project_id; // string
    char *instance_id; // string
    double expires_in; //numeric
    struct features_t *features; //model
    char *client_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} web_player_create_session_request_t;

__attribute__((deprecated)) web_player_create_session_request_t *web_player_create_session_request_create(
    char *project_id,
    char *instance_id,
    double expires_in,
    features_t *features,
    char *client_id
);

void web_player_create_session_request_free(web_player_create_session_request_t *web_player_create_session_request);

web_player_create_session_request_t *web_player_create_session_request_parseFromJSON(cJSON *web_player_create_session_requestJSON);

cJSON *web_player_create_session_request_convertToJSON(web_player_create_session_request_t *web_player_create_session_request);

#endif /* _web_player_create_session_request_H_ */

