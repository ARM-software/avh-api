/*
 * created_by.h
 *
 * 
 */

#ifndef _created_by_H_
#define _created_by_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct created_by_t created_by_t;




typedef struct created_by_t {
    char *id; // string
    char *username; // string
    char *label; // string
    int deleted; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} created_by_t;

__attribute__((deprecated)) created_by_t *created_by_create(
    char *id,
    char *username,
    char *label,
    int deleted
);

void created_by_free(created_by_t *created_by);

created_by_t *created_by_parseFromJSON(cJSON *created_byJSON);

cJSON *created_by_convertToJSON(created_by_t *created_by);

#endif /* _created_by_H_ */

