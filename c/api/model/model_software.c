#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "model_software.h"



model_software_t *model_software_create(
    char *name,
    char *board_config,
    char *platform,
    double cpid,
    double bdid,
    list_t *firmwares
    ) {
    model_software_t *model_software_local_var = malloc(sizeof(model_software_t));
    if (!model_software_local_var) {
        return NULL;
    }
    model_software_local_var->name = name;
    model_software_local_var->board_config = board_config;
    model_software_local_var->platform = platform;
    model_software_local_var->cpid = cpid;
    model_software_local_var->bdid = bdid;
    model_software_local_var->firmwares = firmwares;

    return model_software_local_var;
}


void model_software_free(model_software_t *model_software) {
    if(NULL == model_software){
        return ;
    }
    listEntry_t *listEntry;
    if (model_software->name) {
        free(model_software->name);
        model_software->name = NULL;
    }
    if (model_software->board_config) {
        free(model_software->board_config);
        model_software->board_config = NULL;
    }
    if (model_software->platform) {
        free(model_software->platform);
        model_software->platform = NULL;
    }
    if (model_software->firmwares) {
        list_ForEach(listEntry, model_software->firmwares) {
            firmware_free(listEntry->data);
        }
        list_freeList(model_software->firmwares);
        model_software->firmwares = NULL;
    }
    free(model_software);
}

cJSON *model_software_convertToJSON(model_software_t *model_software) {
    cJSON *item = cJSON_CreateObject();

    // model_software->name
    if(model_software->name) { 
    if(cJSON_AddStringToObject(item, "name", model_software->name) == NULL) {
    goto fail; //String
    }
     } 


    // model_software->board_config
    if(model_software->board_config) { 
    if(cJSON_AddStringToObject(item, "boardConfig", model_software->board_config) == NULL) {
    goto fail; //String
    }
     } 


    // model_software->platform
    if(model_software->platform) { 
    if(cJSON_AddStringToObject(item, "platform", model_software->platform) == NULL) {
    goto fail; //String
    }
     } 


    // model_software->cpid
    if(model_software->cpid) { 
    if(cJSON_AddNumberToObject(item, "cpid", model_software->cpid) == NULL) {
    goto fail; //Numeric
    }
     } 


    // model_software->bdid
    if(model_software->bdid) { 
    if(cJSON_AddNumberToObject(item, "bdid", model_software->bdid) == NULL) {
    goto fail; //Numeric
    }
     } 


    // model_software->firmwares
    if(model_software->firmwares) { 
    cJSON *firmwares = cJSON_AddArrayToObject(item, "firmwares");
    if(firmwares == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *firmwaresListEntry;
    if (model_software->firmwares) {
    list_ForEach(firmwaresListEntry, model_software->firmwares) {
    cJSON *itemLocal = firmware_convertToJSON(firmwaresListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(firmwares, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

model_software_t *model_software_parseFromJSON(cJSON *model_softwareJSON){

    model_software_t *model_software_local_var = NULL;

    // model_software->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(model_softwareJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // model_software->board_config
    cJSON *board_config = cJSON_GetObjectItemCaseSensitive(model_softwareJSON, "boardConfig");
    if (board_config) { 
    if(!cJSON_IsString(board_config))
    {
    goto end; //String
    }
    }

    // model_software->platform
    cJSON *platform = cJSON_GetObjectItemCaseSensitive(model_softwareJSON, "platform");
    if (platform) { 
    if(!cJSON_IsString(platform))
    {
    goto end; //String
    }
    }

    // model_software->cpid
    cJSON *cpid = cJSON_GetObjectItemCaseSensitive(model_softwareJSON, "cpid");
    if (cpid) { 
    if(!cJSON_IsNumber(cpid))
    {
    goto end; //Numeric
    }
    }

    // model_software->bdid
    cJSON *bdid = cJSON_GetObjectItemCaseSensitive(model_softwareJSON, "bdid");
    if (bdid) { 
    if(!cJSON_IsNumber(bdid))
    {
    goto end; //Numeric
    }
    }

    // model_software->firmwares
    cJSON *firmwares = cJSON_GetObjectItemCaseSensitive(model_softwareJSON, "firmwares");
    list_t *firmwaresList;
    if (firmwares) { 
    cJSON *firmwares_local_nonprimitive;
    if(!cJSON_IsArray(firmwares)){
        goto end; //nonprimitive container
    }

    firmwaresList = list_createList();

    cJSON_ArrayForEach(firmwares_local_nonprimitive,firmwares )
    {
        if(!cJSON_IsObject(firmwares_local_nonprimitive)){
            goto end;
        }
        firmware_t *firmwaresItem = firmware_parseFromJSON(firmwares_local_nonprimitive);

        list_addElement(firmwaresList, firmwaresItem);
    }
    }


    model_software_local_var = model_software_create (
        name ? strdup(name->valuestring) : NULL,
        board_config ? strdup(board_config->valuestring) : NULL,
        platform ? strdup(platform->valuestring) : NULL,
        cpid ? cpid->valuedouble : 0,
        bdid ? bdid->valuedouble : 0,
        firmwares ? firmwaresList : NULL
        );

    return model_software_local_var;
end:
    return NULL;

}
