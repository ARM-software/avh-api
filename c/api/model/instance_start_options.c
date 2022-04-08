#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_start_options.h"



instance_start_options_t *instance_start_options_create(
    int paused
    ) {
    instance_start_options_t *instance_start_options_local_var = malloc(sizeof(instance_start_options_t));
    if (!instance_start_options_local_var) {
        return NULL;
    }
    instance_start_options_local_var->paused = paused;

    return instance_start_options_local_var;
}


void instance_start_options_free(instance_start_options_t *instance_start_options) {
    if(NULL == instance_start_options){
        return ;
    }
    listEntry_t *listEntry;
    free(instance_start_options);
}

cJSON *instance_start_options_convertToJSON(instance_start_options_t *instance_start_options) {
    cJSON *item = cJSON_CreateObject();

    // instance_start_options->paused
    if(instance_start_options->paused) { 
    if(cJSON_AddBoolToObject(item, "paused", instance_start_options->paused) == NULL) {
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

instance_start_options_t *instance_start_options_parseFromJSON(cJSON *instance_start_optionsJSON){

    instance_start_options_t *instance_start_options_local_var = NULL;

    // instance_start_options->paused
    cJSON *paused = cJSON_GetObjectItemCaseSensitive(instance_start_optionsJSON, "paused");
    if (paused) { 
    if(!cJSON_IsBool(paused))
    {
    goto end; //Bool
    }
    }


    instance_start_options_local_var = instance_start_options_create (
        paused ? paused->valueint : 0
        );

    return instance_start_options_local_var;
end:
    return NULL;

}
