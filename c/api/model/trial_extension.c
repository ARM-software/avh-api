#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trial_extension.h"



static trial_extension_t *trial_extension_create_internal(
    double duration,
    char *reason,
    int denied,
    char *denied_reason
    ) {
    trial_extension_t *trial_extension_local_var = malloc(sizeof(trial_extension_t));
    if (!trial_extension_local_var) {
        return NULL;
    }
    trial_extension_local_var->duration = duration;
    trial_extension_local_var->reason = reason;
    trial_extension_local_var->denied = denied;
    trial_extension_local_var->denied_reason = denied_reason;

    trial_extension_local_var->_library_owned = 1;
    return trial_extension_local_var;
}

__attribute__((deprecated)) trial_extension_t *trial_extension_create(
    double duration,
    char *reason,
    int denied,
    char *denied_reason
    ) {
    return trial_extension_create_internal (
        duration,
        reason,
        denied,
        denied_reason
        );
}

void trial_extension_free(trial_extension_t *trial_extension) {
    if(NULL == trial_extension){
        return ;
    }
    if(trial_extension->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "trial_extension_free");
        return ;
    }
    listEntry_t *listEntry;
    if (trial_extension->reason) {
        free(trial_extension->reason);
        trial_extension->reason = NULL;
    }
    if (trial_extension->denied_reason) {
        free(trial_extension->denied_reason);
        trial_extension->denied_reason = NULL;
    }
    free(trial_extension);
}

cJSON *trial_extension_convertToJSON(trial_extension_t *trial_extension) {
    cJSON *item = cJSON_CreateObject();

    // trial_extension->duration
    if(trial_extension->duration) {
    if(cJSON_AddNumberToObject(item, "duration", trial_extension->duration) == NULL) {
    goto fail; //Numeric
    }
    }


    // trial_extension->reason
    if(trial_extension->reason) {
    if(cJSON_AddStringToObject(item, "reason", trial_extension->reason) == NULL) {
    goto fail; //String
    }
    }


    // trial_extension->denied
    if(trial_extension->denied) {
    if(cJSON_AddBoolToObject(item, "denied", trial_extension->denied) == NULL) {
    goto fail; //Bool
    }
    }


    // trial_extension->denied_reason
    if(trial_extension->denied_reason) {
    if(cJSON_AddStringToObject(item, "deniedReason", trial_extension->denied_reason) == NULL) {
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

trial_extension_t *trial_extension_parseFromJSON(cJSON *trial_extensionJSON){

    trial_extension_t *trial_extension_local_var = NULL;

    // trial_extension->duration
    cJSON *duration = cJSON_GetObjectItemCaseSensitive(trial_extensionJSON, "duration");
    if (cJSON_IsNull(duration)) {
        duration = NULL;
    }
    if (duration) { 
    if(!cJSON_IsNumber(duration))
    {
    goto end; //Numeric
    }
    }

    // trial_extension->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(trial_extensionJSON, "reason");
    if (cJSON_IsNull(reason)) {
        reason = NULL;
    }
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }

    // trial_extension->denied
    cJSON *denied = cJSON_GetObjectItemCaseSensitive(trial_extensionJSON, "denied");
    if (cJSON_IsNull(denied)) {
        denied = NULL;
    }
    if (denied) { 
    if(!cJSON_IsBool(denied))
    {
    goto end; //Bool
    }
    }

    // trial_extension->denied_reason
    cJSON *denied_reason = cJSON_GetObjectItemCaseSensitive(trial_extensionJSON, "deniedReason");
    if (cJSON_IsNull(denied_reason)) {
        denied_reason = NULL;
    }
    if (denied_reason) { 
    if(!cJSON_IsString(denied_reason))
    {
    goto end; //String
    }
    }


    trial_extension_local_var = trial_extension_create_internal (
        duration ? duration->valuedouble : 0,
        reason ? strdup(reason->valuestring) : NULL,
        denied ? denied->valueint : 0,
        denied_reason ? strdup(denied_reason->valuestring) : NULL
        );

    return trial_extension_local_var;
end:
    return NULL;

}
