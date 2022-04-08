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

typedef enum  { arm_api_image_TYPE_NULL = 0, arm_api_image_TYPE_iotfirmware, arm_api_image_TYPE_kernel, arm_api_image_TYPE_devicetree, arm_api_image_TYPE_ramdisk, arm_api_image_TYPE_loaderfile, arm_api_image_TYPE_sepfw, arm_api_image_TYPE_seprom, arm_api_image_TYPE_bootrom, arm_api_image_TYPE_llb, arm_api_image_TYPE_iboot, arm_api_image_TYPE_ibootdata, arm_api_image_TYPE_fw, arm_api_image_TYPE_partition } arm_api_image_TYPE_e;

char* image_type_ToString(arm_api_image_TYPE_e type);

arm_api_image_TYPE_e image_type_FromString(char* type);



typedef struct image_t {
    char *status; // string
    char *id; // string
    char *name; // string
    arm_api_image_TYPE_e type; //enum
    char *self; // string
    char *file; // string
    double size; //numeric
    double checksum; //numeric
    char *encoding; // string
    char *project; // string
    char *created_at; //date time
    char *updated_at; //date time

} image_t;

image_t *image_create(
    char *status,
    char *id,
    char *name,
    arm_api_image_TYPE_e type,
    char *self,
    char *file,
    double size,
    double checksum,
    char *encoding,
    char *project,
    char *created_at,
    char *updated_at
);

void image_free(image_t *image);

image_t *image_parseFromJSON(cJSON *imageJSON);

cJSON *image_convertToJSON(image_t *image);

#endif /* _image_H_ */

