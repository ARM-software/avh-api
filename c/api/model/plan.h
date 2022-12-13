/*
 * plan.h
 *
 * Plan options
 */

#ifndef _plan_H_
#define _plan_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct plan_t plan_t;


// Enum LICENSETYPE for plan

typedef enum  { arm_api_plan_LICENSETYPE_NULL = 0, arm_api_plan_LICENSETYPE_premium, arm_api_plan_LICENSETYPE_individual, arm_api_plan_LICENSETYPE_standard, arm_api_plan_LICENSETYPE_enterprise, arm_api_plan_LICENSETYPE_individual_usage, arm_api_plan_LICENSETYPE_enterprise_usage, arm_api_plan_LICENSETYPE_unrestricted } arm_api_plan_LICENSETYPE_e;

char* plan_license_type_ToString(arm_api_plan_LICENSETYPE_e license_type);

arm_api_plan_LICENSETYPE_e plan_license_type_FromString(char* license_type);



typedef struct plan_t {
    arm_api_plan_LICENSETYPE_e license_type; //enum
    int cores; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} plan_t;

__attribute__((deprecated)) plan_t *plan_create(
    arm_api_plan_LICENSETYPE_e license_type,
    int cores
);

void plan_free(plan_t *plan);

plan_t *plan_parseFromJSON(cJSON *planJSON);

cJSON *plan_convertToJSON(plan_t *plan);

#endif /* _plan_H_ */

