#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_state.h"


char* instance_state_instance_state_ToString(arm_api_instance_state__e instance_state) {
    char *instance_stateArray[] =  { "NULL", "on", "off", "deleting", "creating", "restoring", "paused", "rebooting", "error" };
    return instance_stateArray[instance_state];
}

arm_api_instance_state__e instance_state_instance_state_FromString(char* instance_state) {
    int stringToReturn = 0;
    char *instance_stateArray[] =  { "NULL", "on", "off", "deleting", "creating", "restoring", "paused", "rebooting", "error" };
    size_t sizeofArray = sizeof(instance_stateArray) / sizeof(instance_stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(instance_state, instance_stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *instance_state_instance_state_convertToJSON(arm_api_instance_state__e instance_state) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "instance_state", instance_state_instance_state_ToString(instance_state)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

arm_api_instance_state__e instance_state_instance_state_parseFromJSON(cJSON *instance_stateJSON) {
    arm_api_instance_state__e *instance_state = NULL;
    arm_api_instance_state__e instance_stateVariable;
    cJSON *instance_stateVar = cJSON_GetObjectItemCaseSensitive(instance_stateJSON, "instance_state");
    if(!cJSON_IsString(instance_stateVar) || (instance_stateVar->valuestring == NULL)){
        goto end;
    }
    instance_stateVariable = instance_state_instance_state_FromString(instance_stateVar->valuestring);
    return instance_stateVariable;
end:
    return 0;
}
