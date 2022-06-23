/*
 * kernel_task.h
 *
 * 
 */

#ifndef _kernel_task_H_
#define _kernel_task_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct kernel_task_t kernel_task_t;

#include "kernel_thread.h"



typedef struct kernel_task_t {
    char *kernel_id; // string
    char *name; // string
    int pid; //numeric
    list_t *threads; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} kernel_task_t;

__attribute__((deprecated)) kernel_task_t *kernel_task_create(
    char *kernel_id,
    char *name,
    int pid,
    list_t *threads
);

void kernel_task_free(kernel_task_t *kernel_task);

kernel_task_t *kernel_task_parseFromJSON(cJSON *kernel_taskJSON);

cJSON *kernel_task_convertToJSON(kernel_task_t *kernel_task);

#endif /* _kernel_task_H_ */

