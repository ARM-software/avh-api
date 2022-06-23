#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "coupon_options.h"


char* typecoupon_options_ToString(arm_api_coupon_options_TYPE_e type) {
    char* typeArray[] =  { "NULL", "percent", "discount", "absolute" };
	return typeArray[type];
}

arm_api_coupon_options_TYPE_e typecoupon_options_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "percent", "discount", "absolute" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static coupon_options_t *coupon_options_create_internal(
    arm_api_coupon_options_TYPE_e type,
    double amount,
    int used
    ) {
    coupon_options_t *coupon_options_local_var = malloc(sizeof(coupon_options_t));
    if (!coupon_options_local_var) {
        return NULL;
    }
    coupon_options_local_var->type = type;
    coupon_options_local_var->amount = amount;
    coupon_options_local_var->used = used;

    coupon_options_local_var->_library_owned = 1;
    return coupon_options_local_var;
}

__attribute__((deprecated)) coupon_options_t *coupon_options_create(
    arm_api_coupon_options_TYPE_e type,
    double amount,
    int used
    ) {
    return coupon_options_create_internal (
        type,
        amount,
        used
        );
}

void coupon_options_free(coupon_options_t *coupon_options) {
    if(NULL == coupon_options){
        return ;
    }
    if(coupon_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "coupon_options_free");
        return ;
    }
    listEntry_t *listEntry;
    free(coupon_options);
}

cJSON *coupon_options_convertToJSON(coupon_options_t *coupon_options) {
    cJSON *item = cJSON_CreateObject();

    // coupon_options->type
    if (arm_api_coupon_options_TYPE_NULL == coupon_options->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", typecoupon_options_ToString(coupon_options->type)) == NULL)
    {
    goto fail; //Enum
    }


    // coupon_options->amount
    if (!coupon_options->amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "amount", coupon_options->amount) == NULL) {
    goto fail; //Numeric
    }


    // coupon_options->used
    if (!coupon_options->used) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "used", coupon_options->used) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

coupon_options_t *coupon_options_parseFromJSON(cJSON *coupon_optionsJSON){

    coupon_options_t *coupon_options_local_var = NULL;

    // coupon_options->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(coupon_optionsJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    arm_api_coupon_options_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typecoupon_options_FromString(type->valuestring);

    // coupon_options->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(coupon_optionsJSON, "amount");
    if (cJSON_IsNull(amount)) {
        amount = NULL;
    }
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }

    // coupon_options->used
    cJSON *used = cJSON_GetObjectItemCaseSensitive(coupon_optionsJSON, "used");
    if (cJSON_IsNull(used)) {
        used = NULL;
    }
    if (!used) {
        goto end;
    }

    
    if(!cJSON_IsBool(used))
    {
    goto end; //Bool
    }


    coupon_options_local_var = coupon_options_create_internal (
        typeVariable,
        amount->valuedouble,
        used->valueint
        );

    return coupon_options_local_var;
end:
    return NULL;

}
