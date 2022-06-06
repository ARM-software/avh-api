#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "volume_options.h"



volume_options_t *volume_options_create(
    double allocate,
    list_t *partitions,
    char *compute_node
    ) {
    volume_options_t *volume_options_local_var = malloc(sizeof(volume_options_t));
    if (!volume_options_local_var) {
        return NULL;
    }
    volume_options_local_var->allocate = allocate;
    volume_options_local_var->partitions = partitions;
    volume_options_local_var->compute_node = compute_node;

    return volume_options_local_var;
}


void volume_options_free(volume_options_t *volume_options) {
    if(NULL == volume_options){
        return ;
    }
    listEntry_t *listEntry;
    if (volume_options->partitions) {
        list_ForEach(listEntry, volume_options->partitions) {
            object_free(listEntry->data);
        }
        list_freeList(volume_options->partitions);
        volume_options->partitions = NULL;
    }
    if (volume_options->compute_node) {
        free(volume_options->compute_node);
        volume_options->compute_node = NULL;
    }
    free(volume_options);
}

cJSON *volume_options_convertToJSON(volume_options_t *volume_options) {
    cJSON *item = cJSON_CreateObject();

    // volume_options->allocate
    if(volume_options->allocate) {
    if(cJSON_AddNumberToObject(item, "allocate", volume_options->allocate) == NULL) {
    goto fail; //Numeric
    }
    }


    // volume_options->partitions
    if(volume_options->partitions) {
    cJSON *partitions = cJSON_AddArrayToObject(item, "partitions");
    if(partitions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *partitionsListEntry;
    if (volume_options->partitions) {
    list_ForEach(partitionsListEntry, volume_options->partitions) {
    cJSON *itemLocal = object_convertToJSON(partitionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(partitions, itemLocal);
    }
    }
    }


    // volume_options->compute_node
    if(volume_options->compute_node) {
    if(cJSON_AddStringToObject(item, "computeNode", volume_options->compute_node) == NULL) {
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

volume_options_t *volume_options_parseFromJSON(cJSON *volume_optionsJSON){

    volume_options_t *volume_options_local_var = NULL;

    // define the local list for volume_options->partitions
    list_t *partitionsList = NULL;

    // volume_options->allocate
    cJSON *allocate = cJSON_GetObjectItemCaseSensitive(volume_optionsJSON, "allocate");
    if (cJSON_IsNull(allocate)) {
        allocate = NULL;
    }
    if (allocate) { 
    if(!cJSON_IsNumber(allocate))
    {
    goto end; //Numeric
    }
    }

    // volume_options->partitions
    cJSON *partitions = cJSON_GetObjectItemCaseSensitive(volume_optionsJSON, "partitions");
    if (cJSON_IsNull(partitions)) {
        partitions = NULL;
    }
    if (partitions) { 
    cJSON *partitions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(partitions)){
        goto end; //nonprimitive container
    }

    partitionsList = list_createList();

    cJSON_ArrayForEach(partitions_local_nonprimitive,partitions )
    {
        if(!cJSON_IsObject(partitions_local_nonprimitive)){
            goto end;
        }
        object_t *partitionsItem = object_parseFromJSON(partitions_local_nonprimitive);

        list_addElement(partitionsList, partitionsItem);
    }
    }

    // volume_options->compute_node
    cJSON *compute_node = cJSON_GetObjectItemCaseSensitive(volume_optionsJSON, "computeNode");
    if (cJSON_IsNull(compute_node)) {
        compute_node = NULL;
    }
    if (compute_node) { 
    if(!cJSON_IsString(compute_node))
    {
    goto end; //String
    }
    }


    volume_options_local_var = volume_options_create (
        allocate ? allocate->valuedouble : 0,
        partitions ? partitionsList : NULL,
        compute_node ? strdup(compute_node->valuestring) : NULL
        );

    return volume_options_local_var;
end:
    if (partitionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, partitionsList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(partitionsList);
        partitionsList = NULL;
    }
    return NULL;

}
