#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rate_info.h"



static rate_info_t *rate_info_create_internal(
    int on_rate_microcents,
    int off_rate_microcents
    ) {
    rate_info_t *rate_info_local_var = malloc(sizeof(rate_info_t));
    if (!rate_info_local_var) {
        return NULL;
    }
    rate_info_local_var->on_rate_microcents = on_rate_microcents;
    rate_info_local_var->off_rate_microcents = off_rate_microcents;

    rate_info_local_var->_library_owned = 1;
    return rate_info_local_var;
}

__attribute__((deprecated)) rate_info_t *rate_info_create(
    int on_rate_microcents,
    int off_rate_microcents
    ) {
    return rate_info_create_internal (
        on_rate_microcents,
        off_rate_microcents
        );
}

void rate_info_free(rate_info_t *rate_info) {
    if(NULL == rate_info){
        return ;
    }
    if(rate_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "rate_info_free");
        return ;
    }
    listEntry_t *listEntry;
    free(rate_info);
}

cJSON *rate_info_convertToJSON(rate_info_t *rate_info) {
    cJSON *item = cJSON_CreateObject();

    // rate_info->on_rate_microcents
    if(rate_info->on_rate_microcents) {
    if(cJSON_AddNumberToObject(item, "onRateMicrocents", rate_info->on_rate_microcents) == NULL) {
    goto fail; //Numeric
    }
    }


    // rate_info->off_rate_microcents
    if(rate_info->off_rate_microcents) {
    if(cJSON_AddNumberToObject(item, "offRateMicrocents", rate_info->off_rate_microcents) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

rate_info_t *rate_info_parseFromJSON(cJSON *rate_infoJSON){

    rate_info_t *rate_info_local_var = NULL;

    // rate_info->on_rate_microcents
    cJSON *on_rate_microcents = cJSON_GetObjectItemCaseSensitive(rate_infoJSON, "onRateMicrocents");
    if (cJSON_IsNull(on_rate_microcents)) {
        on_rate_microcents = NULL;
    }
    if (on_rate_microcents) { 
    if(!cJSON_IsNumber(on_rate_microcents))
    {
    goto end; //Numeric
    }
    }

    // rate_info->off_rate_microcents
    cJSON *off_rate_microcents = cJSON_GetObjectItemCaseSensitive(rate_infoJSON, "offRateMicrocents");
    if (cJSON_IsNull(off_rate_microcents)) {
        off_rate_microcents = NULL;
    }
    if (off_rate_microcents) { 
    if(!cJSON_IsNumber(off_rate_microcents))
    {
    goto end; //Numeric
    }
    }


    rate_info_local_var = rate_info_create_internal (
        on_rate_microcents ? on_rate_microcents->valuedouble : 0,
        off_rate_microcents ? off_rate_microcents->valuedouble : 0
        );

    return rate_info_local_var;
end:
    return NULL;

}
