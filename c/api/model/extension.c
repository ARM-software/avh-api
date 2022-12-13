#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extension.h"



static extension_t *extension_create_internal(
    char *identifier,
    int enabled,
    char *created_at,
    char *updated_at,
    char *image_id,
    char *state,
    list_t *flavors
    ) {
    extension_t *extension_local_var = malloc(sizeof(extension_t));
    if (!extension_local_var) {
        return NULL;
    }
    extension_local_var->identifier = identifier;
    extension_local_var->enabled = enabled;
    extension_local_var->created_at = created_at;
    extension_local_var->updated_at = updated_at;
    extension_local_var->image_id = image_id;
    extension_local_var->state = state;
    extension_local_var->flavors = flavors;

    extension_local_var->_library_owned = 1;
    return extension_local_var;
}

__attribute__((deprecated)) extension_t *extension_create(
    char *identifier,
    int enabled,
    char *created_at,
    char *updated_at,
    char *image_id,
    char *state,
    list_t *flavors
    ) {
    return extension_create_internal (
        identifier,
        enabled,
        created_at,
        updated_at,
        image_id,
        state,
        flavors
        );
}

void extension_free(extension_t *extension) {
    if(NULL == extension){
        return ;
    }
    if(extension->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "extension_free");
        return ;
    }
    listEntry_t *listEntry;
    if (extension->identifier) {
        free(extension->identifier);
        extension->identifier = NULL;
    }
    if (extension->created_at) {
        free(extension->created_at);
        extension->created_at = NULL;
    }
    if (extension->updated_at) {
        free(extension->updated_at);
        extension->updated_at = NULL;
    }
    if (extension->image_id) {
        free(extension->image_id);
        extension->image_id = NULL;
    }
    if (extension->state) {
        free(extension->state);
        extension->state = NULL;
    }
    if (extension->flavors) {
        list_ForEach(listEntry, extension->flavors) {
            object_free(listEntry->data);
        }
        list_freeList(extension->flavors);
        extension->flavors = NULL;
    }
    free(extension);
}

cJSON *extension_convertToJSON(extension_t *extension) {
    cJSON *item = cJSON_CreateObject();

    // extension->identifier
    if(extension->identifier) {
    if(cJSON_AddStringToObject(item, "identifier", extension->identifier) == NULL) {
    goto fail; //String
    }
    }


    // extension->enabled
    if(extension->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", extension->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // extension->created_at
    if(extension->created_at) {
    if(cJSON_AddStringToObject(item, "createdAt", extension->created_at) == NULL) {
    goto fail; //String
    }
    }


    // extension->updated_at
    if(extension->updated_at) {
    if(cJSON_AddStringToObject(item, "updatedAt", extension->updated_at) == NULL) {
    goto fail; //String
    }
    }


    // extension->image_id
    if(extension->image_id) {
    if(cJSON_AddStringToObject(item, "imageId", extension->image_id) == NULL) {
    goto fail; //String
    }
    }


    // extension->state
    if(extension->state) {
    if(cJSON_AddStringToObject(item, "state", extension->state) == NULL) {
    goto fail; //String
    }
    }


    // extension->flavors
    if(extension->flavors) {
    cJSON *flavors = cJSON_AddArrayToObject(item, "flavors");
    if(flavors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *flavorsListEntry;
    if (extension->flavors) {
    list_ForEach(flavorsListEntry, extension->flavors) {
    cJSON *itemLocal = object_convertToJSON(flavorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(flavors, itemLocal);
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

extension_t *extension_parseFromJSON(cJSON *extensionJSON){

    extension_t *extension_local_var = NULL;

    // define the local list for extension->flavors
    list_t *flavorsList = NULL;

    // extension->identifier
    cJSON *identifier = cJSON_GetObjectItemCaseSensitive(extensionJSON, "identifier");
    if (cJSON_IsNull(identifier)) {
        identifier = NULL;
    }
    if (identifier) { 
    if(!cJSON_IsString(identifier))
    {
    goto end; //String
    }
    }

    // extension->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(extensionJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // extension->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(extensionJSON, "createdAt");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }
    }

    // extension->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(extensionJSON, "updatedAt");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (updated_at) { 
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }
    }

    // extension->image_id
    cJSON *image_id = cJSON_GetObjectItemCaseSensitive(extensionJSON, "imageId");
    if (cJSON_IsNull(image_id)) {
        image_id = NULL;
    }
    if (image_id) { 
    if(!cJSON_IsString(image_id))
    {
    goto end; //String
    }
    }

    // extension->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(extensionJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state))
    {
    goto end; //String
    }
    }

    // extension->flavors
    cJSON *flavors = cJSON_GetObjectItemCaseSensitive(extensionJSON, "flavors");
    if (cJSON_IsNull(flavors)) {
        flavors = NULL;
    }
    if (flavors) { 
    cJSON *flavors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(flavors)){
        goto end; //nonprimitive container
    }

    flavorsList = list_createList();

    cJSON_ArrayForEach(flavors_local_nonprimitive,flavors )
    {
        if(!cJSON_IsObject(flavors_local_nonprimitive)){
            goto end;
        }
        object_t *flavorsItem = object_parseFromJSON(flavors_local_nonprimitive);

        list_addElement(flavorsList, flavorsItem);
    }
    }


    extension_local_var = extension_create_internal (
        identifier ? strdup(identifier->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        created_at ? strdup(created_at->valuestring) : NULL,
        updated_at ? strdup(updated_at->valuestring) : NULL,
        image_id ? strdup(image_id->valuestring) : NULL,
        state ? strdup(state->valuestring) : NULL,
        flavors ? flavorsList : NULL
        );

    return extension_local_var;
end:
    if (flavorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flavorsList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flavorsList);
        flavorsList = NULL;
    }
    return NULL;

}
