/*
 * web_player_session.h
 *
 * 
 */

#ifndef _web_player_session_H_
#define _web_player_session_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_player_session_t web_player_session_t;




typedef struct web_player_session_t {
    char *identifier; // string
    char *token; // string
    double expiration; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} web_player_session_t;

__attribute__((deprecated)) web_player_session_t *web_player_session_create(
    char *identifier,
    char *token,
    double expiration
);

void web_player_session_free(web_player_session_t *web_player_session);

web_player_session_t *web_player_session_parseFromJSON(cJSON *web_player_sessionJSON);

cJSON *web_player_session_convertToJSON(web_player_session_t *web_player_session);

#endif /* _web_player_session_H_ */

