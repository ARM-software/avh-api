#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "web_player_create_session_request.h"



static web_player_create_session_request_t *web_player_create_session_request_create_internal(
    char *project_id,
    char *instance_id,
    double expires_in,
    features_t *features,
    char *client_id
    ) {
    web_player_create_session_request_t *web_player_create_session_request_local_var = malloc(sizeof(web_player_create_session_request_t));
    if (!web_player_create_session_request_local_var) {
        return NULL;
    }
    web_player_create_session_request_local_var->project_id = project_id;
    web_player_create_session_request_local_var->instance_id = instance_id;
    web_player_create_session_request_local_var->expires_in = expires_in;
    web_player_create_session_request_local_var->features = features;
    web_player_create_session_request_local_var->client_id = client_id;

    web_player_create_session_request_local_var->_library_owned = 1;
    return web_player_create_session_request_local_var;
}

__attribute__((deprecated)) web_player_create_session_request_t *web_player_create_session_request_create(
    char *project_id,
    char *instance_id,
    double expires_in,
    features_t *features,
    char *client_id
    ) {
    return web_player_create_session_request_create_internal (
        project_id,
        instance_id,
        expires_in,
        features,
        client_id
        );
}

void web_player_create_session_request_free(web_player_create_session_request_t *web_player_create_session_request) {
    if(NULL == web_player_create_session_request){
        return ;
    }
    if(web_player_create_session_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "web_player_create_session_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (web_player_create_session_request->project_id) {
        free(web_player_create_session_request->project_id);
        web_player_create_session_request->project_id = NULL;
    }
    if (web_player_create_session_request->instance_id) {
        free(web_player_create_session_request->instance_id);
        web_player_create_session_request->instance_id = NULL;
    }
    if (web_player_create_session_request->features) {
        features_free(web_player_create_session_request->features);
        web_player_create_session_request->features = NULL;
    }
    if (web_player_create_session_request->client_id) {
        free(web_player_create_session_request->client_id);
        web_player_create_session_request->client_id = NULL;
    }
    free(web_player_create_session_request);
}

cJSON *web_player_create_session_request_convertToJSON(web_player_create_session_request_t *web_player_create_session_request) {
    cJSON *item = cJSON_CreateObject();

    // web_player_create_session_request->project_id
    if (!web_player_create_session_request->project_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "projectId", web_player_create_session_request->project_id) == NULL) {
    goto fail; //String
    }


    // web_player_create_session_request->instance_id
    if (!web_player_create_session_request->instance_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "instanceId", web_player_create_session_request->instance_id) == NULL) {
    goto fail; //String
    }


    // web_player_create_session_request->expires_in
    if (!web_player_create_session_request->expires_in) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "expiresIn", web_player_create_session_request->expires_in) == NULL) {
    goto fail; //Numeric
    }


    // web_player_create_session_request->features
    if (!web_player_create_session_request->features) {
        goto fail;
    }
    cJSON *features_local_JSON = features_convertToJSON(web_player_create_session_request->features);
    if(features_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "features", features_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // web_player_create_session_request->client_id
    if(web_player_create_session_request->client_id) {
    if(cJSON_AddStringToObject(item, "clientId", web_player_create_session_request->client_id) == NULL) {
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

web_player_create_session_request_t *web_player_create_session_request_parseFromJSON(cJSON *web_player_create_session_requestJSON){

    web_player_create_session_request_t *web_player_create_session_request_local_var = NULL;

    // define the local variable for web_player_create_session_request->features
    features_t *features_local_nonprim = NULL;

    // web_player_create_session_request->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(web_player_create_session_requestJSON, "projectId");
    if (cJSON_IsNull(project_id)) {
        project_id = NULL;
    }
    if (!project_id) {
        goto end;
    }

    
    if(!cJSON_IsString(project_id))
    {
    goto end; //String
    }

    // web_player_create_session_request->instance_id
    cJSON *instance_id = cJSON_GetObjectItemCaseSensitive(web_player_create_session_requestJSON, "instanceId");
    if (cJSON_IsNull(instance_id)) {
        instance_id = NULL;
    }
    if (!instance_id) {
        goto end;
    }

    
    if(!cJSON_IsString(instance_id))
    {
    goto end; //String
    }

    // web_player_create_session_request->expires_in
    cJSON *expires_in = cJSON_GetObjectItemCaseSensitive(web_player_create_session_requestJSON, "expiresIn");
    if (cJSON_IsNull(expires_in)) {
        expires_in = NULL;
    }
    if (!expires_in) {
        goto end;
    }

    
    if(!cJSON_IsNumber(expires_in))
    {
    goto end; //Numeric
    }

    // web_player_create_session_request->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(web_player_create_session_requestJSON, "features");
    if (cJSON_IsNull(features)) {
        features = NULL;
    }
    if (!features) {
        goto end;
    }

    
    features_local_nonprim = features_parseFromJSON(features); //nonprimitive

    // web_player_create_session_request->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(web_player_create_session_requestJSON, "clientId");
    if (cJSON_IsNull(client_id)) {
        client_id = NULL;
    }
    if (client_id) { 
    if(!cJSON_IsString(client_id))
    {
    goto end; //String
    }
    }


    web_player_create_session_request_local_var = web_player_create_session_request_create_internal (
        strdup(project_id->valuestring),
        strdup(instance_id->valuestring),
        expires_in->valuedouble,
        features_local_nonprim,
        client_id ? strdup(client_id->valuestring) : NULL
        );

    return web_player_create_session_request_local_var;
end:
    if (features_local_nonprim) {
        features_free(features_local_nonprim);
        features_local_nonprim = NULL;
    }
    return NULL;

}
