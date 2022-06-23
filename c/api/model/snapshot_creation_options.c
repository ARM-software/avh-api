#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "snapshot_creation_options.h"



static snapshot_creation_options_t *snapshot_creation_options_create_internal(
    char *name
    ) {
    snapshot_creation_options_t *snapshot_creation_options_local_var = malloc(sizeof(snapshot_creation_options_t));
    if (!snapshot_creation_options_local_var) {
        return NULL;
    }
    snapshot_creation_options_local_var->name = name;

    snapshot_creation_options_local_var->_library_owned = 1;
    return snapshot_creation_options_local_var;
}

__attribute__((deprecated)) snapshot_creation_options_t *snapshot_creation_options_create(
    char *name
    ) {
    return snapshot_creation_options_create_internal (
        name
        );
}

void snapshot_creation_options_free(snapshot_creation_options_t *snapshot_creation_options) {
    if(NULL == snapshot_creation_options){
        return ;
    }
    if(snapshot_creation_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "snapshot_creation_options_free");
        return ;
    }
    listEntry_t *listEntry;
    if (snapshot_creation_options->name) {
        free(snapshot_creation_options->name);
        snapshot_creation_options->name = NULL;
    }
    free(snapshot_creation_options);
}

cJSON *snapshot_creation_options_convertToJSON(snapshot_creation_options_t *snapshot_creation_options) {
    cJSON *item = cJSON_CreateObject();

    // snapshot_creation_options->name
    if (!snapshot_creation_options->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", snapshot_creation_options->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

snapshot_creation_options_t *snapshot_creation_options_parseFromJSON(cJSON *snapshot_creation_optionsJSON){

    snapshot_creation_options_t *snapshot_creation_options_local_var = NULL;

    // snapshot_creation_options->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(snapshot_creation_optionsJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    snapshot_creation_options_local_var = snapshot_creation_options_create_internal (
        strdup(name->valuestring)
        );

    return snapshot_creation_options_local_var;
end:
    return NULL;

}
