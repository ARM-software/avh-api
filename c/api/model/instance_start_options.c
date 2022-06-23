#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_start_options.h"



static instance_start_options_t *instance_start_options_create_internal(
    int paused
    ) {
    instance_start_options_t *instance_start_options_local_var = malloc(sizeof(instance_start_options_t));
    if (!instance_start_options_local_var) {
        return NULL;
    }
    instance_start_options_local_var->paused = paused;

    instance_start_options_local_var->_library_owned = 1;
    return instance_start_options_local_var;
}

__attribute__((deprecated)) instance_start_options_t *instance_start_options_create(
    int paused
    ) {
    return instance_start_options_create_internal (
        paused
        );
}

void instance_start_options_free(instance_start_options_t *instance_start_options) {
    if(NULL == instance_start_options){
        return ;
    }
    if(instance_start_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_start_options_free");
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
    if (cJSON_IsNull(paused)) {
        paused = NULL;
    }
    if (paused) { 
    if(!cJSON_IsBool(paused))
    {
    goto end; //Bool
    }
    }


    instance_start_options_local_var = instance_start_options_create_internal (
        paused ? paused->valueint : 0
        );

    return instance_start_options_local_var;
end:
    return NULL;

}
