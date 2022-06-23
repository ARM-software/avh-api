#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "media_play_body.h"



static media_play_body_t *media_play_body_create_internal(
    char *image_id,
    char *url
    ) {
    media_play_body_t *media_play_body_local_var = malloc(sizeof(media_play_body_t));
    if (!media_play_body_local_var) {
        return NULL;
    }
    media_play_body_local_var->image_id = image_id;
    media_play_body_local_var->url = url;

    media_play_body_local_var->_library_owned = 1;
    return media_play_body_local_var;
}

__attribute__((deprecated)) media_play_body_t *media_play_body_create(
    char *image_id,
    char *url
    ) {
    return media_play_body_create_internal (
        image_id,
        url
        );
}

void media_play_body_free(media_play_body_t *media_play_body) {
    if(NULL == media_play_body){
        return ;
    }
    if(media_play_body->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "media_play_body_free");
        return ;
    }
    listEntry_t *listEntry;
    if (media_play_body->image_id) {
        free(media_play_body->image_id);
        media_play_body->image_id = NULL;
    }
    if (media_play_body->url) {
        free(media_play_body->url);
        media_play_body->url = NULL;
    }
    free(media_play_body);
}

cJSON *media_play_body_convertToJSON(media_play_body_t *media_play_body) {
    cJSON *item = cJSON_CreateObject();

    // media_play_body->image_id
    if(media_play_body->image_id) {
    if(cJSON_AddStringToObject(item, "imageId", media_play_body->image_id) == NULL) {
    goto fail; //String
    }
    }


    // media_play_body->url
    if(media_play_body->url) {
    if(cJSON_AddStringToObject(item, "url", media_play_body->url) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

media_play_body_t *media_play_body_parseFromJSON(cJSON *media_play_bodyJSON){

    media_play_body_t *media_play_body_local_var = NULL;

    // media_play_body->image_id
    cJSON *image_id = cJSON_GetObjectItemCaseSensitive(media_play_bodyJSON, "imageId");
    if (cJSON_IsNull(image_id)) {
        image_id = NULL;
    }
    if (image_id) { 
    if(!cJSON_IsString(image_id))
    {
    goto end; //String
    }
    }

    // media_play_body->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(media_play_bodyJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }


    media_play_body_local_var = media_play_body_create_internal (
        image_id ? strdup(image_id->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL
        );

    return media_play_body_local_var;
end:
    return NULL;

}
