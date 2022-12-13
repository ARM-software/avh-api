/*
 * btrace_enable_options.h
 *
 * 
 */

#ifndef _btrace_enable_options_H_
#define _btrace_enable_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct btrace_enable_options_t btrace_enable_options_t;




typedef struct btrace_enable_options_t {
    list_t *ranges; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} btrace_enable_options_t;

__attribute__((deprecated)) btrace_enable_options_t *btrace_enable_options_create(
    list_t *ranges
);

void btrace_enable_options_free(btrace_enable_options_t *btrace_enable_options);

btrace_enable_options_t *btrace_enable_options_parseFromJSON(cJSON *btrace_enable_optionsJSON);

cJSON *btrace_enable_options_convertToJSON(btrace_enable_options_t *btrace_enable_options);

#endif /* _btrace_enable_options_H_ */

