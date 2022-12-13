#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hook.h"


char* patch_typehook_ToString(arm_api_hook_PATCHTYPE_e patch_type) {
    char* patch_typeArray[] =  { "NULL", "csmfcc", "csmfvm" };
	return patch_typeArray[patch_type];
}

arm_api_hook_PATCHTYPE_e patch_typehook_FromString(char* patch_type){
    int stringToReturn = 0;
    char *patch_typeArray[] =  { "NULL", "csmfcc", "csmfvm" };
    size_t sizeofArray = sizeof(patch_typeArray) / sizeof(patch_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(patch_type, patch_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static hook_t *hook_create_internal(
    char *identifier,
    char *label,
    char *address,
    char *patch,
    arm_api_hook_PATCHTYPE_e patch_type,
    int enabled,
    char *created_at,
    char *updated_at,
    char *instance_id
    ) {
    hook_t *hook_local_var = malloc(sizeof(hook_t));
    if (!hook_local_var) {
        return NULL;
    }
    hook_local_var->identifier = identifier;
    hook_local_var->label = label;
    hook_local_var->address = address;
    hook_local_var->patch = patch;
    hook_local_var->patch_type = patch_type;
    hook_local_var->enabled = enabled;
    hook_local_var->created_at = created_at;
    hook_local_var->updated_at = updated_at;
    hook_local_var->instance_id = instance_id;

    hook_local_var->_library_owned = 1;
    return hook_local_var;
}

__attribute__((deprecated)) hook_t *hook_create(
    char *identifier,
    char *label,
    char *address,
    char *patch,
    arm_api_hook_PATCHTYPE_e patch_type,
    int enabled,
    char *created_at,
    char *updated_at,
    char *instance_id
    ) {
    return hook_create_internal (
        identifier,
        label,
        address,
        patch,
        patch_type,
        enabled,
        created_at,
        updated_at,
        instance_id
        );
}

void hook_free(hook_t *hook) {
    if(NULL == hook){
        return ;
    }
    if(hook->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "hook_free");
        return ;
    }
    listEntry_t *listEntry;
    if (hook->identifier) {
        free(hook->identifier);
        hook->identifier = NULL;
    }
    if (hook->label) {
        free(hook->label);
        hook->label = NULL;
    }
    if (hook->address) {
        free(hook->address);
        hook->address = NULL;
    }
    if (hook->patch) {
        free(hook->patch);
        hook->patch = NULL;
    }
    if (hook->created_at) {
        free(hook->created_at);
        hook->created_at = NULL;
    }
    if (hook->updated_at) {
        free(hook->updated_at);
        hook->updated_at = NULL;
    }
    if (hook->instance_id) {
        free(hook->instance_id);
        hook->instance_id = NULL;
    }
    free(hook);
}

cJSON *hook_convertToJSON(hook_t *hook) {
    cJSON *item = cJSON_CreateObject();

    // hook->identifier
    if(hook->identifier) {
    if(cJSON_AddStringToObject(item, "identifier", hook->identifier) == NULL) {
    goto fail; //String
    }
    }


    // hook->label
    if(hook->label) {
    if(cJSON_AddStringToObject(item, "label", hook->label) == NULL) {
    goto fail; //String
    }
    }


    // hook->address
    if(hook->address) {
    if(cJSON_AddStringToObject(item, "address", hook->address) == NULL) {
    goto fail; //String
    }
    }


    // hook->patch
    if(hook->patch) {
    if(cJSON_AddStringToObject(item, "patch", hook->patch) == NULL) {
    goto fail; //String
    }
    }


    // hook->patch_type
    if(hook->patch_type != arm_api_hook_PATCHTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "patchType", patch_typehook_ToString(hook->patch_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // hook->enabled
    if(hook->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", hook->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // hook->created_at
    if(hook->created_at) {
    if(cJSON_AddStringToObject(item, "createdAt", hook->created_at) == NULL) {
    goto fail; //String
    }
    }


    // hook->updated_at
    if(hook->updated_at) {
    if(cJSON_AddStringToObject(item, "updatedAt", hook->updated_at) == NULL) {
    goto fail; //String
    }
    }


    // hook->instance_id
    if(hook->instance_id) {
    if(cJSON_AddStringToObject(item, "instanceId", hook->instance_id) == NULL) {
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

hook_t *hook_parseFromJSON(cJSON *hookJSON){

    hook_t *hook_local_var = NULL;

    // hook->identifier
    cJSON *identifier = cJSON_GetObjectItemCaseSensitive(hookJSON, "identifier");
    if (cJSON_IsNull(identifier)) {
        identifier = NULL;
    }
    if (identifier) { 
    if(!cJSON_IsString(identifier))
    {
    goto end; //String
    }
    }

    // hook->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(hookJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (label) { 
    if(!cJSON_IsString(label))
    {
    goto end; //String
    }
    }

    // hook->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(hookJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }
    }

    // hook->patch
    cJSON *patch = cJSON_GetObjectItemCaseSensitive(hookJSON, "patch");
    if (cJSON_IsNull(patch)) {
        patch = NULL;
    }
    if (patch) { 
    if(!cJSON_IsString(patch))
    {
    goto end; //String
    }
    }

    // hook->patch_type
    cJSON *patch_type = cJSON_GetObjectItemCaseSensitive(hookJSON, "patchType");
    if (cJSON_IsNull(patch_type)) {
        patch_type = NULL;
    }
    arm_api_hook_PATCHTYPE_e patch_typeVariable;
    if (patch_type) { 
    if(!cJSON_IsString(patch_type))
    {
    goto end; //Enum
    }
    patch_typeVariable = patch_typehook_FromString(patch_type->valuestring);
    }

    // hook->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(hookJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // hook->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(hookJSON, "createdAt");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }
    }

    // hook->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(hookJSON, "updatedAt");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (updated_at) { 
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }
    }

    // hook->instance_id
    cJSON *instance_id = cJSON_GetObjectItemCaseSensitive(hookJSON, "instanceId");
    if (cJSON_IsNull(instance_id)) {
        instance_id = NULL;
    }
    if (instance_id) { 
    if(!cJSON_IsString(instance_id))
    {
    goto end; //String
    }
    }


    hook_local_var = hook_create_internal (
        identifier ? strdup(identifier->valuestring) : NULL,
        label ? strdup(label->valuestring) : NULL,
        address ? strdup(address->valuestring) : NULL,
        patch ? strdup(patch->valuestring) : NULL,
        patch_type ? patch_typeVariable : -1,
        enabled ? enabled->valueint : 0,
        created_at ? strdup(created_at->valuestring) : NULL,
        updated_at ? strdup(updated_at->valuestring) : NULL,
        instance_id ? strdup(instance_id->valuestring) : NULL
        );

    return hook_local_var;
end:
    return NULL;

}
