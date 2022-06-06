#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_stop_options.h"



instance_stop_options_t *instance_stop_options_create(
    int soft
    ) {
    instance_stop_options_t *instance_stop_options_local_var = malloc(sizeof(instance_stop_options_t));
    if (!instance_stop_options_local_var) {
        return NULL;
    }
    instance_stop_options_local_var->soft = soft;

    return instance_stop_options_local_var;
}


void instance_stop_options_free(instance_stop_options_t *instance_stop_options) {
    if(NULL == instance_stop_options){
        return ;
    }
    listEntry_t *listEntry;
    free(instance_stop_options);
}

cJSON *instance_stop_options_convertToJSON(instance_stop_options_t *instance_stop_options) {
    cJSON *item = cJSON_CreateObject();

    // instance_stop_options->soft
    if(instance_stop_options->soft) {
    if(cJSON_AddBoolToObject(item, "soft", instance_stop_options->soft) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

instance_stop_options_t *instance_stop_options_parseFromJSON(cJSON *instance_stop_optionsJSON){

    instance_stop_options_t *instance_stop_options_local_var = NULL;

    // instance_stop_options->soft
    cJSON *soft = cJSON_GetObjectItemCaseSensitive(instance_stop_optionsJSON, "soft");
    if (cJSON_IsNull(soft)) {
        soft = NULL;
    }
    if (soft) { 
    if(!cJSON_IsBool(soft))
    {
    goto end; //Bool
    }
    }


    instance_stop_options_local_var = instance_stop_options_create (
        soft ? soft->valueint : 0
        );

    return instance_stop_options_local_var;
end:
    return NULL;

}
