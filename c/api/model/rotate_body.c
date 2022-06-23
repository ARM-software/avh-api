#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rotate_body.h"


char* orientationrotate_body_ToString(arm_api_rotate_body_ORIENTATION_e orientation) {
    char* orientationArray[] =  { "NULL", "1", "2", "3", "4" };
	return orientationArray[orientation];
}

arm_api_rotate_body_ORIENTATION_e orientationrotate_body_FromString(char* orientation){
    int stringToReturn = 0;
    char *orientationArray[] =  { "NULL", "1", "2", "3", "4" };
    size_t sizeofArray = sizeof(orientationArray) / sizeof(orientationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(orientation, orientationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static rotate_body_t *rotate_body_create_internal(
    double orientation
    ) {
    rotate_body_t *rotate_body_local_var = malloc(sizeof(rotate_body_t));
    if (!rotate_body_local_var) {
        return NULL;
    }
    rotate_body_local_var->orientation = orientation;

    rotate_body_local_var->_library_owned = 1;
    return rotate_body_local_var;
}

__attribute__((deprecated)) rotate_body_t *rotate_body_create(
    double orientation
    ) {
    return rotate_body_create_internal (
        orientation
        );
}

void rotate_body_free(rotate_body_t *rotate_body) {
    if(NULL == rotate_body){
        return ;
    }
    if(rotate_body->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "rotate_body_free");
        return ;
    }
    listEntry_t *listEntry;
    free(rotate_body);
}

cJSON *rotate_body_convertToJSON(rotate_body_t *rotate_body) {
    cJSON *item = cJSON_CreateObject();

    // rotate_body->orientation
    if (arm_api_rotate_body_ORIENTATION_NULL == rotate_body->orientation) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "orientation", rotate_body->orientation) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

rotate_body_t *rotate_body_parseFromJSON(cJSON *rotate_bodyJSON){

    rotate_body_t *rotate_body_local_var = NULL;

    // rotate_body->orientation
    cJSON *orientation = cJSON_GetObjectItemCaseSensitive(rotate_bodyJSON, "orientation");
    if (cJSON_IsNull(orientation)) {
        orientation = NULL;
    }
    if (!orientation) {
        goto end;
    }

    
    if(!cJSON_IsNumber(orientation))
    {
    goto end; //Numeric
    }


    rotate_body_local_var = rotate_body_create_internal (
        orientation->valuedouble
        );

    return rotate_body_local_var;
end:
    return NULL;

}
