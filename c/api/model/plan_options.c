#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "plan_options.h"


char* license_typeplan_options_ToString(arm_api_plan_options_LICENSETYPE_e license_type) {
    char* license_typeArray[] =  { "NULL", "premium", "individual", "standard", "enterprise", "individual-usage", "enterprise-usage", "unrestricted" };
	return license_typeArray[license_type];
}

arm_api_plan_options_LICENSETYPE_e license_typeplan_options_FromString(char* license_type){
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

static plan_options_t *plan_options_create_internal(
    arm_api_plan_options_LICENSETYPE_e license_type,
    int cores
    ) {
    plan_options_t *plan_options_local_var = malloc(sizeof(plan_options_t));
    if (!plan_options_local_var) {
        return NULL;
    }
    plan_options_local_var->license_type = license_type;
    plan_options_local_var->cores = cores;

    plan_options_local_var->_library_owned = 1;
    return plan_options_local_var;
}

__attribute__((deprecated)) plan_options_t *plan_options_create(
    arm_api_plan_options_LICENSETYPE_e license_type,
    int cores
    ) {
    return plan_options_create_internal (
        license_type,
        cores
        );
}

void plan_options_free(plan_options_t *plan_options) {
    if(NULL == plan_options){
        return ;
    }
    if(plan_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "plan_options_free");
        return ;
    }
    listEntry_t *listEntry;
    free(plan_options);
}

cJSON *plan_options_convertToJSON(plan_options_t *plan_options) {
    cJSON *item = cJSON_CreateObject();

    // plan_options->license_type
    if (arm_api_plan_options_LICENSETYPE_NULL == plan_options->license_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "licenseType", license_typeplan_options_ToString(plan_options->license_type)) == NULL)
    {
    goto fail; //Enum
    }


    // plan_options->cores
    if (!plan_options->cores) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "cores", plan_options->cores) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

plan_options_t *plan_options_parseFromJSON(cJSON *plan_optionsJSON){

    plan_options_t *plan_options_local_var = NULL;

    // plan_options->license_type
    cJSON *license_type = cJSON_GetObjectItemCaseSensitive(plan_optionsJSON, "licenseType");
    if (cJSON_IsNull(license_type)) {
        license_type = NULL;
    }
    if (!license_type) {
        goto end;
    }

    arm_api_plan_options_LICENSETYPE_e license_typeVariable;
    
    if(!cJSON_IsString(license_type))
    {
    goto end; //Enum
    }
    license_typeVariable = license_typeplan_options_FromString(license_type->valuestring);

    // plan_options->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(plan_optionsJSON, "cores");
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


    plan_options_local_var = plan_options_create_internal (
        license_typeVariable,
        cores->valuedouble
        );

    return plan_options_local_var;
end:
    return NULL;

}
