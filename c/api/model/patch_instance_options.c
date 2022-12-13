#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_instance_options.h"


char* statepatch_instance_options_ToString(arm_api_patch_instance_options_STATE_e state) {
    char* stateArray[] =  { "NULL", "on", "off", "paused", "deleting" };
	return stateArray[state];
}

arm_api_patch_instance_options_STATE_e statepatch_instance_options_FromString(char* state){
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "on", "off", "paused", "deleting" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static patch_instance_options_t *patch_instance_options_create_internal(
    char *name,
    arm_api_patch_instance_options_STATE_e state,
    instance_boot_options_t *boot_options,
    char *proxy
    ) {
    patch_instance_options_t *patch_instance_options_local_var = malloc(sizeof(patch_instance_options_t));
    if (!patch_instance_options_local_var) {
        return NULL;
    }
    patch_instance_options_local_var->name = name;
    patch_instance_options_local_var->state = state;
    patch_instance_options_local_var->boot_options = boot_options;
    patch_instance_options_local_var->proxy = proxy;

    patch_instance_options_local_var->_library_owned = 1;
    return patch_instance_options_local_var;
}

__attribute__((deprecated)) patch_instance_options_t *patch_instance_options_create(
    char *name,
    arm_api_patch_instance_options_STATE_e state,
    instance_boot_options_t *boot_options,
    char *proxy
    ) {
    return patch_instance_options_create_internal (
        name,
        state,
        boot_options,
        proxy
        );
}

void patch_instance_options_free(patch_instance_options_t *patch_instance_options) {
    if(NULL == patch_instance_options){
        return ;
    }
    if(patch_instance_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "patch_instance_options_free");
        return ;
    }
    listEntry_t *listEntry;
    if (patch_instance_options->name) {
        free(patch_instance_options->name);
        patch_instance_options->name = NULL;
    }
    if (patch_instance_options->boot_options) {
        instance_boot_options_free(patch_instance_options->boot_options);
        patch_instance_options->boot_options = NULL;
    }
    if (patch_instance_options->proxy) {
        free(patch_instance_options->proxy);
        patch_instance_options->proxy = NULL;
    }
    free(patch_instance_options);
}

cJSON *patch_instance_options_convertToJSON(patch_instance_options_t *patch_instance_options) {
    cJSON *item = cJSON_CreateObject();

    // patch_instance_options->name
    if(patch_instance_options->name) {
    if(cJSON_AddStringToObject(item, "name", patch_instance_options->name) == NULL) {
    goto fail; //String
    }
    }


    // patch_instance_options->state
    if(patch_instance_options->state != arm_api_patch_instance_options_STATE_NULL) {
    if(cJSON_AddStringToObject(item, "state", statepatch_instance_options_ToString(patch_instance_options->state)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // patch_instance_options->boot_options
    if(patch_instance_options->boot_options) {
    cJSON *boot_options_local_JSON = instance_boot_options_convertToJSON(patch_instance_options->boot_options);
    if(boot_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bootOptions", boot_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // patch_instance_options->proxy
    if(patch_instance_options->proxy) {
    if(cJSON_AddStringToObject(item, "proxy", patch_instance_options->proxy) == NULL) {
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

patch_instance_options_t *patch_instance_options_parseFromJSON(cJSON *patch_instance_optionsJSON){

    patch_instance_options_t *patch_instance_options_local_var = NULL;

    // define the local variable for patch_instance_options->boot_options
    instance_boot_options_t *boot_options_local_nonprim = NULL;

    // patch_instance_options->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(patch_instance_optionsJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // patch_instance_options->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(patch_instance_optionsJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    arm_api_patch_instance_options_STATE_e stateVariable;
    if (state) { 
    if(!cJSON_IsString(state))
    {
    goto end; //Enum
    }
    stateVariable = statepatch_instance_options_FromString(state->valuestring);
    }

    // patch_instance_options->boot_options
    cJSON *boot_options = cJSON_GetObjectItemCaseSensitive(patch_instance_optionsJSON, "bootOptions");
    if (cJSON_IsNull(boot_options)) {
        boot_options = NULL;
    }
    if (boot_options) { 
    boot_options_local_nonprim = instance_boot_options_parseFromJSON(boot_options); //nonprimitive
    }

    // patch_instance_options->proxy
    cJSON *proxy = cJSON_GetObjectItemCaseSensitive(patch_instance_optionsJSON, "proxy");
    if (cJSON_IsNull(proxy)) {
        proxy = NULL;
    }
    if (proxy) { 
    if(!cJSON_IsString(proxy))
    {
    goto end; //String
    }
    }


    patch_instance_options_local_var = patch_instance_options_create_internal (
        name ? strdup(name->valuestring) : NULL,
        state ? stateVariable : -1,
        boot_options ? boot_options_local_nonprim : NULL,
        proxy ? strdup(proxy->valuestring) : NULL
        );

    return patch_instance_options_local_var;
end:
    if (boot_options_local_nonprim) {
        instance_boot_options_free(boot_options_local_nonprim);
        boot_options_local_nonprim = NULL;
    }
    return NULL;

}
