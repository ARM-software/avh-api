/*
 * media_play_body.h
 *
 * 
 */

#ifndef _media_play_body_H_
#define _media_play_body_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct media_play_body_t media_play_body_t;




typedef struct media_play_body_t {
    char *image_id; // string
    char *url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} media_play_body_t;

__attribute__((deprecated)) media_play_body_t *media_play_body_create(
    char *image_id,
    char *url
);

void media_play_body_free(media_play_body_t *media_play_body);

media_play_body_t *media_play_body_parseFromJSON(cJSON *media_play_bodyJSON);

cJSON *media_play_body_convertToJSON(media_play_body_t *media_play_body);

#endif /* _media_play_body_H_ */

