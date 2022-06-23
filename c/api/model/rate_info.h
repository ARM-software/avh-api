/*
 * rate_info.h
 *
 * 
 */

#ifndef _rate_info_H_
#define _rate_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rate_info_t rate_info_t;




typedef struct rate_info_t {
    int on_rate_microcents; //numeric
    int off_rate_microcents; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} rate_info_t;

__attribute__((deprecated)) rate_info_t *rate_info_create(
    int on_rate_microcents,
    int off_rate_microcents
);

void rate_info_free(rate_info_t *rate_info);

rate_info_t *rate_info_parseFromJSON(cJSON *rate_infoJSON);

cJSON *rate_info_convertToJSON(rate_info_t *rate_info);

#endif /* _rate_info_H_ */

