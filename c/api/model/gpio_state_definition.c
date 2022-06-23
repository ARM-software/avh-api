#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gpio_state_definition.h"


char* banksgpio_state_definition_ToString(arm_api_gpio_state_definition_BANKS_e banks) {
	char *banksArray[] =  { "NULL", "0", "1" };
	return banksArray[banks - 1];
}

arm_api_gpio_state_definition_BANKS_e banksgpio_state_definition_FromString(char* banks) {
    int stringToReturn = 0;
    char *banksArray[] =  { "NULL", "0", "1" };
    size_t sizeofArray = sizeof(banksArray) / sizeof(banksArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(banks, banksArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

static gpio_state_definition_t *gpio_state_definition_create_internal(
    double bit_count,
    list_t *banks
    ) {
    gpio_state_definition_t *gpio_state_definition_local_var = malloc(sizeof(gpio_state_definition_t));
    if (!gpio_state_definition_local_var) {
        return NULL;
    }
    gpio_state_definition_local_var->bit_count = bit_count;
    gpio_state_definition_local_var->banks = banks;

    gpio_state_definition_local_var->_library_owned = 1;
    return gpio_state_definition_local_var;
}

__attribute__((deprecated)) gpio_state_definition_t *gpio_state_definition_create(
    double bit_count,
    list_t *banks
    ) {
    return gpio_state_definition_create_internal (
        bit_count,
        banks
        );
}

void gpio_state_definition_free(gpio_state_definition_t *gpio_state_definition) {
    if(NULL == gpio_state_definition){
        return ;
    }
    if(gpio_state_definition->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "gpio_state_definition_free");
        return ;
    }
    listEntry_t *listEntry;
    if (gpio_state_definition->banks) {
        list_ForEach(listEntry, gpio_state_definition->banks) {
            free(listEntry->data);
        }
        list_freeList(gpio_state_definition->banks);
        gpio_state_definition->banks = NULL;
    }
    free(gpio_state_definition);
}

cJSON *gpio_state_definition_convertToJSON(gpio_state_definition_t *gpio_state_definition) {
    cJSON *item = cJSON_CreateObject();

    // gpio_state_definition->bit_count
    if (!gpio_state_definition->bit_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "bitCount", gpio_state_definition->bit_count) == NULL) {
    goto fail; //Numeric
    }


    // gpio_state_definition->banks
    if (arm_api_gpio_state_definition_BANKS_NULL == gpio_state_definition->banks) {
        goto fail;
    }
    cJSON *banks = cJSON_AddArrayToObject(item, "banks");
    if(banks == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *banksListEntry;
    list_ForEach(banksListEntry, gpio_state_definition->banks) {
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

gpio_state_definition_t *gpio_state_definition_parseFromJSON(cJSON *gpio_state_definitionJSON){

    gpio_state_definition_t *gpio_state_definition_local_var = NULL;

    // define the local list for gpio_state_definition->banks
    list_t *banksList = NULL;

    // gpio_state_definition->bit_count
    cJSON *bit_count = cJSON_GetObjectItemCaseSensitive(gpio_state_definitionJSON, "bitCount");
    if (cJSON_IsNull(bit_count)) {
        bit_count = NULL;
    }
    if (!bit_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(bit_count))
    {
    goto end; //Numeric
    }

    // gpio_state_definition->banks
    cJSON *banks = cJSON_GetObjectItemCaseSensitive(gpio_state_definitionJSON, "banks");
    if (cJSON_IsNull(banks)) {
        banks = NULL;
    }
    if (!banks) {
        goto end;
    }

    
    cJSON *banks_local = NULL;
    if(!cJSON_IsArray(banks)) {
        goto end;//primitive container
    }
    banksList = list_createList();

    cJSON_ArrayForEach(banks_local, banks)
    {
    }


    gpio_state_definition_local_var = gpio_state_definition_create_internal (
        bit_count->valuedouble,
        banksList
        );

    return gpio_state_definition_local_var;
end:
    if (banksList) {
        list_freeList(banksList);
        banksList = NULL;
    }
    return NULL;

}
