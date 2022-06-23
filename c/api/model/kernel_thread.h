/*
 * kernel_thread.h
 *
 * 
 */

#ifndef _kernel_thread_H_
#define _kernel_thread_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct kernel_thread_t kernel_thread_t;




typedef struct kernel_thread_t {
    char *kernel_id; // string
    int tid; //numeric
    list_t *stack; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} kernel_thread_t;

__attribute__((deprecated)) kernel_thread_t *kernel_thread_create(
    char *kernel_id,
    int tid,
    list_t *stack
);

void kernel_thread_free(kernel_thread_t *kernel_thread);

kernel_thread_t *kernel_thread_parseFromJSON(cJSON *kernel_threadJSON);

cJSON *kernel_thread_convertToJSON(kernel_thread_t *kernel_thread);

#endif /* _kernel_thread_H_ */

