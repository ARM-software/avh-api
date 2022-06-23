/*
 * gpio_state_definition.h
 *
 * 
 */

#ifndef _gpio_state_definition_H_
#define _gpio_state_definition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gpio_state_definition_t gpio_state_definition_t;

#include "bit.h"

// Enum BANKS for gpio_state_definition

typedef enum  { arm_api_gpio_state_definition_BANKS_NULL = 0, arm_api_gpio_state_definition_BANKS__0, arm_api_gpio_state_definition_BANKS__1 } arm_api_gpio_state_definition_BANKS_e;

char* gpio_state_definition_banks_ToString(arm_api_gpio_state_definition_BANKS_e banks);

arm_api_gpio_state_definition_BANKS_e gpio_state_definition_banks_FromString(char* banks);



typedef struct gpio_state_definition_t {
    double bit_count; //numeric
    list_t *banks; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} gpio_state_definition_t;

__attribute__((deprecated)) gpio_state_definition_t *gpio_state_definition_create(
    double bit_count,
    list_t *banks
);

void gpio_state_definition_free(gpio_state_definition_t *gpio_state_definition);

gpio_state_definition_t *gpio_state_definition_parseFromJSON(cJSON *gpio_state_definitionJSON);

cJSON *gpio_state_definition_convertToJSON(gpio_state_definition_t *gpio_state_definition);

#endif /* _gpio_state_definition_H_ */

