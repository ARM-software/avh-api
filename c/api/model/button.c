#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "button.h"


char* button_button_ToString(arm_api_button__e button) {
    char *buttonArray[] =  { "NULL", "finger", "homeButton", "holdButton", "volumeUp", "volumeDown", "ringerSwitch", "backButton", "overviewButton" };
    return buttonArray[button];
}

arm_api_button__e button_button_FromString(char* button) {
    int stringToReturn = 0;
    char *buttonArray[] =  { "NULL", "finger", "homeButton", "holdButton", "volumeUp", "volumeDown", "ringerSwitch", "backButton", "overviewButton" };
    size_t sizeofArray = sizeof(buttonArray) / sizeof(buttonArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(button, buttonArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *button_convertToJSON(arm_api_button__e button) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "button", button_button_ToString(button)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

arm_api_button__e button_parseFromJSON(cJSON *buttonJSON) {
    if(!cJSON_IsString(buttonJSON) || (buttonJSON->valuestring == NULL)) {
        return 0;
    }
    return button_button_FromString(buttonJSON->valuestring);
}
