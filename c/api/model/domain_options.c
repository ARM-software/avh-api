#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_options.h"



static domain_options_t *domain_options_create_internal(
    int totp_required,
    trial_extension_t *trial_extension
    ) {
    domain_options_t *domain_options_local_var = malloc(sizeof(domain_options_t));
    if (!domain_options_local_var) {
        return NULL;
    }
    domain_options_local_var->totp_required = totp_required;
    domain_options_local_var->trial_extension = trial_extension;

    domain_options_local_var->_library_owned = 1;
    return domain_options_local_var;
}

__attribute__((deprecated)) domain_options_t *domain_options_create(
    int totp_required,
    trial_extension_t *trial_extension
    ) {
    return domain_options_create_internal (
        totp_required,
        trial_extension
        );
}

void domain_options_free(domain_options_t *domain_options) {
    if(NULL == domain_options){
        return ;
    }
    if(domain_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_options_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_options->trial_extension) {
        trial_extension_free(domain_options->trial_extension);
        domain_options->trial_extension = NULL;
    }
    free(domain_options);
}

cJSON *domain_options_convertToJSON(domain_options_t *domain_options) {
    cJSON *item = cJSON_CreateObject();

    // domain_options->totp_required
    if(domain_options->totp_required) {
    if(cJSON_AddBoolToObject(item, "totpRequired", domain_options->totp_required) == NULL) {
    goto fail; //Bool
    }
    }


    // domain_options->trial_extension
    if(domain_options->trial_extension) {
    cJSON *trial_extension_local_JSON = trial_extension_convertToJSON(domain_options->trial_extension);
    if(trial_extension_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "trialExtension", trial_extension_local_JSON);
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

domain_options_t *domain_options_parseFromJSON(cJSON *domain_optionsJSON){

    domain_options_t *domain_options_local_var = NULL;

    // define the local variable for domain_options->trial_extension
    trial_extension_t *trial_extension_local_nonprim = NULL;

    // domain_options->totp_required
    cJSON *totp_required = cJSON_GetObjectItemCaseSensitive(domain_optionsJSON, "totpRequired");
    if (cJSON_IsNull(totp_required)) {
        totp_required = NULL;
    }
    if (totp_required) { 
    if(!cJSON_IsBool(totp_required))
    {
    goto end; //Bool
    }
    }

    // domain_options->trial_extension
    cJSON *trial_extension = cJSON_GetObjectItemCaseSensitive(domain_optionsJSON, "trialExtension");
    if (cJSON_IsNull(trial_extension)) {
        trial_extension = NULL;
    }
    if (trial_extension) { 
    trial_extension_local_nonprim = trial_extension_parseFromJSON(trial_extension); //nonprimitive
    }


    domain_options_local_var = domain_options_create_internal (
        totp_required ? totp_required->valueint : 0,
        trial_extension ? trial_extension_local_nonprim : NULL
        );

    return domain_options_local_var;
end:
    if (trial_extension_local_nonprim) {
        trial_extension_free(trial_extension_local_nonprim);
        trial_extension_local_nonprim = NULL;
    }
    return NULL;

}
