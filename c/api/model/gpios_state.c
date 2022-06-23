#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gpios_state.h"



static gpios_state_t *gpios_state_create_internal(
    gpio_state_definition_t *led,
    gpio_state_definition_t *button,
    gpio_state_definition_t *_switch
    ) {
    gpios_state_t *gpios_state_local_var = malloc(sizeof(gpios_state_t));
    if (!gpios_state_local_var) {
        return NULL;
    }
    gpios_state_local_var->led = led;
    gpios_state_local_var->button = button;
    gpios_state_local_var->_switch = _switch;

    gpios_state_local_var->_library_owned = 1;
    return gpios_state_local_var;
}

__attribute__((deprecated)) gpios_state_t *gpios_state_create(
    gpio_state_definition_t *led,
    gpio_state_definition_t *button,
    gpio_state_definition_t *_switch
    ) {
    return gpios_state_create_internal (
        led,
        button,
        _switch
        );
}

void gpios_state_free(gpios_state_t *gpios_state) {
    if(NULL == gpios_state){
        return ;
    }
    if(gpios_state->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "gpios_state_free");
        return ;
    }
    listEntry_t *listEntry;
    if (gpios_state->led) {
        gpio_state_definition_free(gpios_state->led);
        gpios_state->led = NULL;
    }
    if (gpios_state->button) {
        gpio_state_definition_free(gpios_state->button);
        gpios_state->button = NULL;
    }
    if (gpios_state->_switch) {
        gpio_state_definition_free(gpios_state->_switch);
        gpios_state->_switch = NULL;
    }
    free(gpios_state);
}

cJSON *gpios_state_convertToJSON(gpios_state_t *gpios_state) {
    cJSON *item = cJSON_CreateObject();

    // gpios_state->led
    if(gpios_state->led) {
    cJSON *led_local_JSON = gpio_state_definition_convertToJSON(gpios_state->led);
    if(led_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "led", led_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // gpios_state->button
    if(gpios_state->button) {
    cJSON *button_local_JSON = gpio_state_definition_convertToJSON(gpios_state->button);
    if(button_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "button", button_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // gpios_state->_switch
    if(gpios_state->_switch) {
    cJSON *_switch_local_JSON = gpio_state_definition_convertToJSON(gpios_state->_switch);
    if(_switch_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "switch", _switch_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

gpios_state_t *gpios_state_parseFromJSON(cJSON *gpios_stateJSON){

    gpios_state_t *gpios_state_local_var = NULL;

    // define the local variable for gpios_state->led
    gpio_state_definition_t *led_local_nonprim = NULL;

    // define the local variable for gpios_state->button
    gpio_state_definition_t *button_local_nonprim = NULL;

    // define the local variable for gpios_state->_switch
    gpio_state_definition_t *_switch_local_nonprim = NULL;

    // gpios_state->led
    cJSON *led = cJSON_GetObjectItemCaseSensitive(gpios_stateJSON, "led");
    if (cJSON_IsNull(led)) {
        led = NULL;
    }
    if (led) { 
    led_local_nonprim = gpio_state_definition_parseFromJSON(led); //nonprimitive
    }

    // gpios_state->button
    cJSON *button = cJSON_GetObjectItemCaseSensitive(gpios_stateJSON, "button");
    if (cJSON_IsNull(button)) {
        button = NULL;
    }
    if (button) { 
    button_local_nonprim = gpio_state_definition_parseFromJSON(button); //nonprimitive
    }

    // gpios_state->_switch
    cJSON *_switch = cJSON_GetObjectItemCaseSensitive(gpios_stateJSON, "switch");
    if (cJSON_IsNull(_switch)) {
        _switch = NULL;
    }
    if (_switch) { 
    _switch_local_nonprim = gpio_state_definition_parseFromJSON(_switch); //nonprimitive
    }


    gpios_state_local_var = gpios_state_create_internal (
        led ? led_local_nonprim : NULL,
        button ? button_local_nonprim : NULL,
        _switch ? _switch_local_nonprim : NULL
        );

    return gpios_state_local_var;
end:
    if (led_local_nonprim) {
        gpio_state_definition_free(led_local_nonprim);
        led_local_nonprim = NULL;
    }
    if (button_local_nonprim) {
        gpio_state_definition_free(button_local_nonprim);
        button_local_nonprim = NULL;
    }
    if (_switch_local_nonprim) {
        gpio_state_definition_free(_switch_local_nonprim);
        _switch_local_nonprim = NULL;
    }
    return NULL;

}
