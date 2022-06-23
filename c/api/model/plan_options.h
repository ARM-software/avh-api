/*
 * plan_options.h
 *
 * Plan options
 */

#ifndef _plan_options_H_
#define _plan_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct plan_options_t plan_options_t;


// Enum LICENSETYPE for plan_options

typedef enum  { arm_api_plan_options_LICENSETYPE_NULL = 0, arm_api_plan_options_LICENSETYPE_premium, arm_api_plan_options_LICENSETYPE_individual, arm_api_plan_options_LICENSETYPE_standard, arm_api_plan_options_LICENSETYPE_enterprise, arm_api_plan_options_LICENSETYPE_individual_usage, arm_api_plan_options_LICENSETYPE_enterprise_usage, arm_api_plan_options_LICENSETYPE_unrestricted } arm_api_plan_options_LICENSETYPE_e;

char* plan_options_license_type_ToString(arm_api_plan_options_LICENSETYPE_e license_type);

arm_api_plan_options_LICENSETYPE_e plan_options_license_type_FromString(char* license_type);



typedef struct plan_options_t {
    arm_api_plan_options_LICENSETYPE_e license_type; //enum
    int cores; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} plan_options_t;

__attribute__((deprecated)) plan_options_t *plan_options_create(
    arm_api_plan_options_LICENSETYPE_e license_type,
    int cores
);

void plan_options_free(plan_options_t *plan_options);

plan_options_t *plan_options_parseFromJSON(cJSON *plan_optionsJSON);

cJSON *plan_options_convertToJSON(plan_options_t *plan_options);

#endif /* _plan_options_H_ */

