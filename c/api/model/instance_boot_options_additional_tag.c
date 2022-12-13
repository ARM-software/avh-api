#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_boot_options_additional_tag.h"


char* instance_boot_options_additional_tag_instance_boot_options_additional_tag_ToString(arm_api_instance_boot_options_additional_tag__e instance_boot_options_additional_tag) {
    char *instance_boot_options_additional_tagArray[] =  { "NULL", "kalloc", "gpu", "no-keyboard", "nodevmode", "sep-cons-ext", "iboot-jailbreak", "llb-jailbreak", "rom-jailbreak" };
    return instance_boot_options_additional_tagArray[instance_boot_options_additional_tag];
}

arm_api_instance_boot_options_additional_tag__e instance_boot_options_additional_tag_instance_boot_options_additional_tag_FromString(char* instance_boot_options_additional_tag) {
    int stringToReturn = 0;
    char *instance_boot_options_additional_tagArray[] =  { "NULL", "kalloc", "gpu", "no-keyboard", "nodevmode", "sep-cons-ext", "iboot-jailbreak", "llb-jailbreak", "rom-jailbreak" };
    size_t sizeofArray = sizeof(instance_boot_options_additional_tagArray) / sizeof(instance_boot_options_additional_tagArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(instance_boot_options_additional_tag, instance_boot_options_additional_tagArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *instance_boot_options_additional_tag_convertToJSON(arm_api_instance_boot_options_additional_tag__e instance_boot_options_additional_tag) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "instance_boot_options_additional_tag", instance_boot_options_additional_tag_instance_boot_options_additional_tag_ToString(instance_boot_options_additional_tag)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

arm_api_instance_boot_options_additional_tag__e instance_boot_options_additional_tag_parseFromJSON(cJSON *instance_boot_options_additional_tagJSON) {
    if(!cJSON_IsString(instance_boot_options_additional_tagJSON) || (instance_boot_options_additional_tagJSON->valuestring == NULL)) {
        return 0;
    }
    return instance_boot_options_additional_tag_instance_boot_options_additional_tag_FromString(instance_boot_options_additional_tagJSON->valuestring);
}
