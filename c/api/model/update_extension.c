#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_extension.h"



static update_extension_t *update_extension_create_internal(
    int enabled
    ) {
    update_extension_t *update_extension_local_var = malloc(sizeof(update_extension_t));
    if (!update_extension_local_var) {
        return NULL;
    }
    update_extension_local_var->enabled = enabled;

    update_extension_local_var->_library_owned = 1;
    return update_extension_local_var;
}

__attribute__((deprecated)) update_extension_t *update_extension_create(
    int enabled
    ) {
    return update_extension_create_internal (
        enabled
        );
}

void update_extension_free(update_extension_t *update_extension) {
    if(NULL == update_extension){
        return ;
    }
    if(update_extension->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "update_extension_free");
        return ;
    }
    listEntry_t *listEntry;
    free(update_extension);
}

cJSON *update_extension_convertToJSON(update_extension_t *update_extension) {
    cJSON *item = cJSON_CreateObject();

    // update_extension->enabled
    if(update_extension->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", update_extension->enabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_extension_t *update_extension_parseFromJSON(cJSON *update_extensionJSON){

    update_extension_t *update_extension_local_var = NULL;

    // update_extension->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(update_extensionJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    update_extension_local_var = update_extension_create_internal (
        enabled ? enabled->valueint : 0
        );

    return update_extension_local_var;
end:
    return NULL;

}
