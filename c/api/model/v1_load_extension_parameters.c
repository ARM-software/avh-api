#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_load_extension_parameters.h"



static v1_load_extension_parameters_t *v1_load_extension_parameters_create_internal(
    char *image_id
    ) {
    v1_load_extension_parameters_t *v1_load_extension_parameters_local_var = malloc(sizeof(v1_load_extension_parameters_t));
    if (!v1_load_extension_parameters_local_var) {
        return NULL;
    }
    v1_load_extension_parameters_local_var->image_id = image_id;

    v1_load_extension_parameters_local_var->_library_owned = 1;
    return v1_load_extension_parameters_local_var;
}

__attribute__((deprecated)) v1_load_extension_parameters_t *v1_load_extension_parameters_create(
    char *image_id
    ) {
    return v1_load_extension_parameters_create_internal (
        image_id
        );
}

void v1_load_extension_parameters_free(v1_load_extension_parameters_t *v1_load_extension_parameters) {
    if(NULL == v1_load_extension_parameters){
        return ;
    }
    if(v1_load_extension_parameters->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_load_extension_parameters_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_load_extension_parameters->image_id) {
        free(v1_load_extension_parameters->image_id);
        v1_load_extension_parameters->image_id = NULL;
    }
    free(v1_load_extension_parameters);
}

cJSON *v1_load_extension_parameters_convertToJSON(v1_load_extension_parameters_t *v1_load_extension_parameters) {
    cJSON *item = cJSON_CreateObject();

    // v1_load_extension_parameters->image_id
    if (!v1_load_extension_parameters->image_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "imageId", v1_load_extension_parameters->image_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1_load_extension_parameters_t *v1_load_extension_parameters_parseFromJSON(cJSON *v1_load_extension_parametersJSON){

    v1_load_extension_parameters_t *v1_load_extension_parameters_local_var = NULL;

    // v1_load_extension_parameters->image_id
    cJSON *image_id = cJSON_GetObjectItemCaseSensitive(v1_load_extension_parametersJSON, "imageId");
    if (cJSON_IsNull(image_id)) {
        image_id = NULL;
    }
    if (!image_id) {
        goto end;
    }

    
    if(!cJSON_IsString(image_id))
    {
    goto end; //String
    }


    v1_load_extension_parameters_local_var = v1_load_extension_parameters_create_internal (
        strdup(image_id->valuestring)
        );

    return v1_load_extension_parameters_local_var;
end:
    return NULL;

}
