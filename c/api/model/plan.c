#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "plan.h"


char* license_typeplan_ToString(arm_api_plan_LICENSETYPE_e license_type) {
    char* license_typeArray[] =  { "NULL", "premium", "individual", "standard", "enterprise", "individual-usage", "enterprise-usage", "unrestricted" };
	return license_typeArray[license_type];
}

arm_api_plan_LICENSETYPE_e license_typeplan_FromString(char* license_type){
    int stringToReturn = 0;
    char *license_typeArray[] =  { "NULL", "premium", "individual", "standard", "enterprise", "individual-usage", "enterprise-usage", "unrestricted" };
    size_t sizeofArray = sizeof(license_typeArray) / sizeof(license_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(license_type, license_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static plan_t *plan_create_internal(
    arm_api_plan_LICENSETYPE_e license_type,
    int cores
    ) {
    plan_t *plan_local_var = malloc(sizeof(plan_t));
    if (!plan_local_var) {
        return NULL;
    }
    plan_local_var->license_type = license_type;
    plan_local_var->cores = cores;

    plan_local_var->_library_owned = 1;
    return plan_local_var;
}

__attribute__((deprecated)) plan_t *plan_create(
    arm_api_plan_LICENSETYPE_e license_type,
    int cores
    ) {
    return plan_create_internal (
        license_type,
        cores
        );
}

void plan_free(plan_t *plan) {
    if(NULL == plan){
        return ;
    }
    if(plan->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "plan_free");
        return ;
    }
    listEntry_t *listEntry;
    free(plan);
}

cJSON *plan_convertToJSON(plan_t *plan) {
    cJSON *item = cJSON_CreateObject();

    // plan->license_type
    if (arm_api_plan_LICENSETYPE_NULL == plan->license_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "licenseType", license_typeplan_ToString(plan->license_type)) == NULL)
    {
    goto fail; //Enum
    }


    // plan->cores
    if (!plan->cores) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "cores", plan->cores) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

plan_t *plan_parseFromJSON(cJSON *planJSON){

    plan_t *plan_local_var = NULL;

    // plan->license_type
    cJSON *license_type = cJSON_GetObjectItemCaseSensitive(planJSON, "licenseType");
    if (cJSON_IsNull(license_type)) {
        license_type = NULL;
    }
    if (!license_type) {
        goto end;
    }

    arm_api_plan_LICENSETYPE_e license_typeVariable;
    
    if(!cJSON_IsString(license_type))
    {
    goto end; //Enum
    }
    license_typeVariable = license_typeplan_FromString(license_type->valuestring);

    // plan->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(planJSON, "cores");
    if (cJSON_IsNull(cores)) {
        cores = NULL;
    }
    if (!cores) {
        goto end;
    }

    
    if(!cJSON_IsNumber(cores))
    {
    goto end; //Numeric
    }


    plan_local_var = plan_create_internal (
        license_typeVariable,
        cores->valuedouble
        );

    return plan_local_var;
end:
    return NULL;

}
