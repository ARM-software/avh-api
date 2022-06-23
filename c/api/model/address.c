#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address.h"



static address_t *address_create_internal(
    char *address1,
    char *address2,
    char *city,
    char *country,
    char *postal_code,
    char *state
    ) {
    address_t *address_local_var = malloc(sizeof(address_t));
    if (!address_local_var) {
        return NULL;
    }
    address_local_var->address1 = address1;
    address_local_var->address2 = address2;
    address_local_var->city = city;
    address_local_var->country = country;
    address_local_var->postal_code = postal_code;
    address_local_var->state = state;

    address_local_var->_library_owned = 1;
    return address_local_var;
}

__attribute__((deprecated)) address_t *address_create(
    char *address1,
    char *address2,
    char *city,
    char *country,
    char *postal_code,
    char *state
    ) {
    return address_create_internal (
        address1,
        address2,
        city,
        country,
        postal_code,
        state
        );
}

void address_free(address_t *address) {
    if(NULL == address){
        return ;
    }
    if(address->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "address_free");
        return ;
    }
    listEntry_t *listEntry;
    if (address->address1) {
        free(address->address1);
        address->address1 = NULL;
    }
    if (address->address2) {
        free(address->address2);
        address->address2 = NULL;
    }
    if (address->city) {
        free(address->city);
        address->city = NULL;
    }
    if (address->country) {
        free(address->country);
        address->country = NULL;
    }
    if (address->postal_code) {
        free(address->postal_code);
        address->postal_code = NULL;
    }
    if (address->state) {
        free(address->state);
        address->state = NULL;
    }
    free(address);
}

cJSON *address_convertToJSON(address_t *address) {
    cJSON *item = cJSON_CreateObject();

    // address->address1
    if(address->address1) {
    if(cJSON_AddStringToObject(item, "address1", address->address1) == NULL) {
    goto fail; //String
    }
    }


    // address->address2
    if(address->address2) {
    if(cJSON_AddStringToObject(item, "address2", address->address2) == NULL) {
    goto fail; //String
    }
    }


    // address->city
    if(address->city) {
    if(cJSON_AddStringToObject(item, "city", address->city) == NULL) {
    goto fail; //String
    }
    }


    // address->country
    if(address->country) {
    if(cJSON_AddStringToObject(item, "country", address->country) == NULL) {
    goto fail; //String
    }
    }


    // address->postal_code
    if(address->postal_code) {
    if(cJSON_AddStringToObject(item, "postal_code", address->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // address->state
    if(address->state) {
    if(cJSON_AddStringToObject(item, "state", address->state) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

address_t *address_parseFromJSON(cJSON *addressJSON){

    address_t *address_local_var = NULL;

    // address->address1
    cJSON *address1 = cJSON_GetObjectItemCaseSensitive(addressJSON, "address1");
    if (cJSON_IsNull(address1)) {
        address1 = NULL;
    }
    if (address1) { 
    if(!cJSON_IsString(address1))
    {
    goto end; //String
    }
    }

    // address->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(addressJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2))
    {
    goto end; //String
    }
    }

    // address->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(addressJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city))
    {
    goto end; //String
    }
    }

    // address->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(addressJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country))
    {
    goto end; //String
    }
    }

    // address->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(addressJSON, "postal_code");
    if (cJSON_IsNull(postal_code)) {
        postal_code = NULL;
    }
    if (postal_code) { 
    if(!cJSON_IsString(postal_code))
    {
    goto end; //String
    }
    }

    // address->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(addressJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state))
    {
    goto end; //String
    }
    }


    address_local_var = address_create_internal (
        address1 ? strdup(address1->valuestring) : NULL,
        address2 ? strdup(address2->valuestring) : NULL,
        city ? strdup(city->valuestring) : NULL,
        country ? strdup(country->valuestring) : NULL,
        postal_code ? strdup(postal_code->valuestring) : NULL,
        state ? strdup(state->valuestring) : NULL
        );

    return address_local_var;
end:
    return NULL;

}
