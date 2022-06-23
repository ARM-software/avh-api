#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trial.h"



static trial_t *trial_create_internal(
    double duration
    ) {
    trial_t *trial_local_var = malloc(sizeof(trial_t));
    if (!trial_local_var) {
        return NULL;
    }
    trial_local_var->duration = duration;

    trial_local_var->_library_owned = 1;
    return trial_local_var;
}

__attribute__((deprecated)) trial_t *trial_create(
    double duration
    ) {
    return trial_create_internal (
        duration
        );
}

void trial_free(trial_t *trial) {
    if(NULL == trial){
        return ;
    }
    if(trial->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "trial_free");
        return ;
    }
    listEntry_t *listEntry;
    free(trial);
}

cJSON *trial_convertToJSON(trial_t *trial) {
    cJSON *item = cJSON_CreateObject();

    // trial->duration
    if (!trial->duration) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "duration", trial->duration) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

trial_t *trial_parseFromJSON(cJSON *trialJSON){

    trial_t *trial_local_var = NULL;

    // trial->duration
    cJSON *duration = cJSON_GetObjectItemCaseSensitive(trialJSON, "duration");
    if (cJSON_IsNull(duration)) {
        duration = NULL;
    }
    if (!duration) {
        goto end;
    }

    
    if(!cJSON_IsNumber(duration))
    {
    goto end; //Numeric
    }


    trial_local_var = trial_create_internal (
        duration->valuedouble
        );

    return trial_local_var;
end:
    return NULL;

}
