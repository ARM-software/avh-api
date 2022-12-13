/*
 * kcrange.h
 *
 * 
 */

#ifndef _kcrange_H_
#define _kcrange_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct kcrange_t kcrange_t;




typedef struct kcrange_t {
    char *kext; // string
    list_t *range; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} kcrange_t;

__attribute__((deprecated)) kcrange_t *kcrange_create(
    char *kext,
    list_t *range
);

void kcrange_free(kcrange_t *kcrange);

kcrange_t *kcrange_parseFromJSON(cJSON *kcrangeJSON);

cJSON *kcrange_convertToJSON(kcrange_t *kcrange);

#endif /* _kcrange_H_ */

