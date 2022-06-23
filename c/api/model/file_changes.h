/*
 * file_changes.h
 *
 * 
 */

#ifndef _file_changes_H_
#define _file_changes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct file_changes_t file_changes_t;




typedef struct file_changes_t {
    char *path; // string
    double mode; //numeric
    double uid; //numeric
    double gid; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} file_changes_t;

__attribute__((deprecated)) file_changes_t *file_changes_create(
    char *path,
    double mode,
    double uid,
    double gid
);

void file_changes_free(file_changes_t *file_changes);

file_changes_t *file_changes_parseFromJSON(cJSON *file_changesJSON);

cJSON *file_changes_convertToJSON(file_changes_t *file_changes);

#endif /* _file_changes_H_ */

