#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trial_request_options.h"



static trial_request_options_t *trial_request_options_create_internal(
    address_t *address,
    char *email,
    char *name,
    trial_request_metadata_t *metadata,
    int enterprise,
    char *token
    ) {
    trial_request_options_t *trial_request_options_local_var = malloc(sizeof(trial_request_options_t));
    if (!trial_request_options_local_var) {
        return NULL;
    }
    trial_request_options_local_var->address = address;
    trial_request_options_local_var->email = email;
    trial_request_options_local_var->name = name;
    trial_request_options_local_var->metadata = metadata;
    trial_request_options_local_var->enterprise = enterprise;
    trial_request_options_local_var->token = token;

    trial_request_options_local_var->_library_owned = 1;
    return trial_request_options_local_var;
}

__attribute__((deprecated)) trial_request_options_t *trial_request_options_create(
    address_t *address,
    char *email,
    char *name,
    trial_request_metadata_t *metadata,
    int enterprise,
    char *token
    ) {
    return trial_request_options_create_internal (
        address,
        email,
        name,
        metadata,
        enterprise,
        token
        );
}

void trial_request_options_free(trial_request_options_t *trial_request_options) {
    if(NULL == trial_request_options){
        return ;
    }
    if(trial_request_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "trial_request_options_free");
        return ;
    }
    listEntry_t *listEntry;
    if (trial_request_options->address) {
        address_free(trial_request_options->address);
        trial_request_options->address = NULL;
    }
    if (trial_request_options->email) {
        free(trial_request_options->email);
        trial_request_options->email = NULL;
    }
    if (trial_request_options->name) {
        free(trial_request_options->name);
        trial_request_options->name = NULL;
    }
    if (trial_request_options->metadata) {
        trial_request_metadata_free(trial_request_options->metadata);
        trial_request_options->metadata = NULL;
    }
    if (trial_request_options->token) {
        free(trial_request_options->token);
        trial_request_options->token = NULL;
    }
    free(trial_request_options);
}

cJSON *trial_request_options_convertToJSON(trial_request_options_t *trial_request_options) {
    cJSON *item = cJSON_CreateObject();

    // trial_request_options->address
    if(trial_request_options->address) {
    cJSON *address_local_JSON = address_convertToJSON(trial_request_options->address);
    if(address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "address", address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // trial_request_options->email
    if(trial_request_options->email) {
    if(cJSON_AddStringToObject(item, "email", trial_request_options->email) == NULL) {
    goto fail; //String
    }
    }


    // trial_request_options->name
    if(trial_request_options->name) {
    if(cJSON_AddStringToObject(item, "name", trial_request_options->name) == NULL) {
    goto fail; //String
    }
    }


    // trial_request_options->metadata
    if(trial_request_options->metadata) {
    cJSON *metadata_local_JSON = trial_request_metadata_convertToJSON(trial_request_options->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // trial_request_options->enterprise
    if(trial_request_options->enterprise) {
    if(cJSON_AddBoolToObject(item, "enterprise", trial_request_options->enterprise) == NULL) {
    goto fail; //Bool
    }
    }


    // trial_request_options->token
    if(trial_request_options->token) {
    if(cJSON_AddStringToObject(item, "token", trial_request_options->token) == NULL) {
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

trial_request_options_t *trial_request_options_parseFromJSON(cJSON *trial_request_optionsJSON){

    trial_request_options_t *trial_request_options_local_var = NULL;

    // define the local variable for trial_request_options->address
    address_t *address_local_nonprim = NULL;

    // define the local variable for trial_request_options->metadata
    trial_request_metadata_t *metadata_local_nonprim = NULL;

    // trial_request_options->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(trial_request_optionsJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    address_local_nonprim = address_parseFromJSON(address); //nonprimitive
    }

    // trial_request_options->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(trial_request_optionsJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }
    }

    // trial_request_options->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(trial_request_optionsJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // trial_request_options->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(trial_request_optionsJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = trial_request_metadata_parseFromJSON(metadata); //nonprimitive
    }

    // trial_request_options->enterprise
    cJSON *enterprise = cJSON_GetObjectItemCaseSensitive(trial_request_optionsJSON, "enterprise");
    if (cJSON_IsNull(enterprise)) {
        enterprise = NULL;
    }
    if (enterprise) { 
    if(!cJSON_IsBool(enterprise))
    {
    goto end; //Bool
    }
    }

    // trial_request_options->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(trial_request_optionsJSON, "token");
    if (cJSON_IsNull(token)) {
        token = NULL;
    }
    if (token) { 
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }
    }


    trial_request_options_local_var = trial_request_options_create_internal (
        address ? address_local_nonprim : NULL,
        email ? strdup(email->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        enterprise ? enterprise->valueint : 0,
        token ? strdup(token->valuestring) : NULL
        );

    return trial_request_options_local_var;
end:
    if (address_local_nonprim) {
        address_free(address_local_nonprim);
        address_local_nonprim = NULL;
    }
    if (metadata_local_nonprim) {
        trial_request_metadata_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
