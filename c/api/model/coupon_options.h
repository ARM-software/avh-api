/*
 * coupon_options.h
 *
 * Coupon options
 */

#ifndef _coupon_options_H_
#define _coupon_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coupon_options_t coupon_options_t;


// Enum TYPE for coupon_options

typedef enum  { arm_api_coupon_options_TYPE_NULL = 0, arm_api_coupon_options_TYPE_percent, arm_api_coupon_options_TYPE_discount, arm_api_coupon_options_TYPE_absolute } arm_api_coupon_options_TYPE_e;

char* coupon_options_type_ToString(arm_api_coupon_options_TYPE_e type);

arm_api_coupon_options_TYPE_e coupon_options_type_FromString(char* type);



typedef struct coupon_options_t {
    arm_api_coupon_options_TYPE_e type; //enum
    double amount; //numeric
    int used; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} coupon_options_t;

__attribute__((deprecated)) coupon_options_t *coupon_options_create(
    arm_api_coupon_options_TYPE_e type,
    double amount,
    int used
);

void coupon_options_free(coupon_options_t *coupon_options);

coupon_options_t *coupon_options_parseFromJSON(cJSON *coupon_optionsJSON);

cJSON *coupon_options_convertToJSON(coupon_options_t *coupon_options);

#endif /* _coupon_options_H_ */

