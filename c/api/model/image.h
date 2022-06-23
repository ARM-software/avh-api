/*
 * image.h
 *
 * 
 */

#ifndef _image_H_
#define _image_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct image_t image_t;


// Enum TYPE for image

typedef enum  { arm_api_image_TYPE_NULL = 0, arm_api_image_TYPE_fwbinary, arm_api_image_TYPE_kernel, arm_api_image_TYPE_devicetree, arm_api_image_TYPE_ramdisk, arm_api_image_TYPE_loaderfile, arm_api_image_TYPE_sepfw, arm_api_image_TYPE_seprom, arm_api_image_TYPE_bootrom, arm_api_image_TYPE_llb, arm_api_image_TYPE_iboot, arm_api_image_TYPE_ibootdata, arm_api_image_TYPE_fwpackage, arm_api_image_TYPE_partition } arm_api_image_TYPE_e;

char* image_type_ToString(arm_api_image_TYPE_e type);

arm_api_image_TYPE_e image_type_FromString(char* type);



typedef struct image_t {
    char *status; // string
    char *id; // string
    char *name; // string
    arm_api_image_TYPE_e type; //enum
    char *filename; // string
    char *uniqueid; // string
    double size; //numeric
    char *project; // string
    char *created_at; //date time
    char *updated_at; //date time

    int _library_owned; // Is the library responsible for freeing this object?
} image_t;

__attribute__((deprecated)) image_t *image_create(
    char *status,
    char *id,
    char *name,
    arm_api_image_TYPE_e type,
    char *filename,
    char *uniqueid,
    double size,
    char *project,
    char *created_at,
    char *updated_at
);

void image_free(image_t *image);

image_t *image_parseFromJSON(cJSON *imageJSON);

cJSON *image_convertToJSON(image_t *image);

#endif /* _image_H_ */

