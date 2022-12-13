#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "btrace_enable_options.h"



static btrace_enable_options_t *btrace_enable_options_create_internal(
    list_t *ranges
    ) {
    btrace_enable_options_t *btrace_enable_options_local_var = malloc(sizeof(btrace_enable_options_t));
    if (!btrace_enable_options_local_var) {
        return NULL;
    }
    btrace_enable_options_local_var->ranges = ranges;

    btrace_enable_options_local_var->_library_owned = 1;
    return btrace_enable_options_local_var;
}

__attribute__((deprecated)) btrace_enable_options_t *btrace_enable_options_create(
    list_t *ranges
    ) {
    return btrace_enable_options_create_internal (
        ranges
        );
}

void btrace_enable_options_free(btrace_enable_options_t *btrace_enable_options) {
    if(NULL == btrace_enable_options){
        return ;
    }
    if(btrace_enable_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "btrace_enable_options_free");
        return ;
    }
    listEntry_t *listEntry;
    if (btrace_enable_options->ranges) {
        list_ForEach(listEntry, btrace_enable_options->ranges) {
            free(listEntry->data);
        }
        list_freeList(btrace_enable_options->ranges);
        btrace_enable_options->ranges = NULL;
    }
    free(btrace_enable_options);
}

cJSON *btrace_enable_options_convertToJSON(btrace_enable_options_t *btrace_enable_options) {
    cJSON *item = cJSON_CreateObject();

    // btrace_enable_options->ranges
    if(btrace_enable_options->ranges) {
    cJSON *ranges = cJSON_AddArrayToObject(item, "ranges");
    if(ranges == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *rangesListEntry;
    list_ForEach(rangesListEntry, btrace_enable_options->ranges) {
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

btrace_enable_options_t *btrace_enable_options_parseFromJSON(cJSON *btrace_enable_optionsJSON){

    btrace_enable_options_t *btrace_enable_options_local_var = NULL;

    // define the local list for btrace_enable_options->ranges
    list_t *rangesList = NULL;

    // btrace_enable_options->ranges
    cJSON *ranges = cJSON_GetObjectItemCaseSensitive(btrace_enable_optionsJSON, "ranges");
    if (cJSON_IsNull(ranges)) {
        ranges = NULL;
    }
    if (ranges) { 
    cJSON *ranges_local = NULL;
    if(!cJSON_IsArray(ranges)) {
        goto end;//primitive container
    }
    rangesList = list_createList();

    cJSON_ArrayForEach(ranges_local, ranges)
    {
    }
    }


    btrace_enable_options_local_var = btrace_enable_options_create_internal (
        ranges ? rangesList : NULL
        );

    return btrace_enable_options_local_var;
end:
    if (rangesList) {
        list_freeList(rangesList);
        rangesList = NULL;
    }
    return NULL;

}
