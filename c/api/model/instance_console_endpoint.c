#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_console_endpoint.h"



static instance_console_endpoint_t *instance_console_endpoint_create_internal(
    char *url
    ) {
    instance_console_endpoint_t *instance_console_endpoint_local_var = malloc(sizeof(instance_console_endpoint_t));
    if (!instance_console_endpoint_local_var) {
        return NULL;
    }
    instance_console_endpoint_local_var->url = url;

    instance_console_endpoint_local_var->_library_owned = 1;
    return instance_console_endpoint_local_var;
}

__attribute__((deprecated)) instance_console_endpoint_t *instance_console_endpoint_create(
    char *url
    ) {
    return instance_console_endpoint_create_internal (
        url
        );
}

void instance_console_endpoint_free(instance_console_endpoint_t *instance_console_endpoint) {
    if(NULL == instance_console_endpoint){
        return ;
    }
    if(instance_console_endpoint->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_console_endpoint_free");
        return ;
    }
    listEntry_t *listEntry;
    if (instance_console_endpoint->url) {
        free(instance_console_endpoint->url);
        instance_console_endpoint->url = NULL;
    }
    free(instance_console_endpoint);
}

cJSON *instance_console_endpoint_convertToJSON(instance_console_endpoint_t *instance_console_endpoint) {
    cJSON *item = cJSON_CreateObject();

    // instance_console_endpoint->url
    if(instance_console_endpoint->url) {
    if(cJSON_AddStringToObject(item, "url", instance_console_endpoint->url) == NULL) {
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

instance_console_endpoint_t *instance_console_endpoint_parseFromJSON(cJSON *instance_console_endpointJSON){

    instance_console_endpoint_t *instance_console_endpoint_local_var = NULL;

    // instance_console_endpoint->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(instance_console_endpointJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }


    instance_console_endpoint_local_var = instance_console_endpoint_create_internal (
        url ? strdup(url->valuestring) : NULL
        );

    return instance_console_endpoint_local_var;
end:
    return NULL;

}
