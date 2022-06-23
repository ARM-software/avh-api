/*
 * firmware.h
 *
 * 
 */

#ifndef _firmware_H_
#define _firmware_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct firmware_t firmware_t;

#include "any_type.h"
#include "object.h"



typedef struct firmware_t {
    char *version; // string
    char *buildid; // string
    char *android_flavor; // string
    char *api_version; // string
    char *sha256sum; // string
    char *sha1sum; // string
    char *md5sum; // string
    int size; //numeric
    char *unique_id; // string
    object_t *metadata; //object
    char *releasedate; //date time
    char *uploaddate; //date time
    char *url; // string
    char *orig_url; // string
    char *filename; // string

    int _library_owned; // Is the library responsible for freeing this object?
} firmware_t;

__attribute__((deprecated)) firmware_t *firmware_create(
    char *version,
    char *buildid,
    char *android_flavor,
    char *api_version,
    char *sha256sum,
    char *sha1sum,
    char *md5sum,
    int size,
    char *unique_id,
    object_t *metadata,
    char *releasedate,
    char *uploaddate,
    char *url,
    char *orig_url,
    char *filename
);

void firmware_free(firmware_t *firmware);

firmware_t *firmware_parseFromJSON(cJSON *firmwareJSON);

cJSON *firmware_convertToJSON(firmware_t *firmware);

#endif /* _firmware_H_ */

