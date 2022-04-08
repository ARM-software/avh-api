#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_console_endpoint.h"



instance_console_endpoint_t *instance_console_endpoint_create(
    char *url
    ) {
    instance_console_endpoint_t *instance_console_endpoint_local_var = malloc(sizeof(instance_console_endpoint_t));
    if (!instance_console_endpoint_local_var) {
        return NULL;
    }
    instance_console_endpoint_local_var->url = url;

    return instance_console_endpoint_local_var;
}


void instance_console_endpoint_free(instance_console_endpoint_t *instance_console_endpoint) {
    if(NULL == instance_console_endpoint){
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
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }


    instance_console_endpoint_local_var = instance_console_endpoint_create (
        url ? strdup(url->valuestring) : NULL
        );

    return instance_console_endpoint_local_var;
end:
    return NULL;

}
