#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_boot_options.h"



static instance_boot_options_t *instance_boot_options_create_internal(
    char *boot_args,
    char *restore_boot_args,
    char *udid,
    char *ecid,
    char *random_seed,
    int pac,
    int aprr
    ) {
    instance_boot_options_t *instance_boot_options_local_var = malloc(sizeof(instance_boot_options_t));
    if (!instance_boot_options_local_var) {
        return NULL;
    }
    instance_boot_options_local_var->boot_args = boot_args;
    instance_boot_options_local_var->restore_boot_args = restore_boot_args;
    instance_boot_options_local_var->udid = udid;
    instance_boot_options_local_var->ecid = ecid;
    instance_boot_options_local_var->random_seed = random_seed;
    instance_boot_options_local_var->pac = pac;
    instance_boot_options_local_var->aprr = aprr;

    instance_boot_options_local_var->_library_owned = 1;
    return instance_boot_options_local_var;
}

__attribute__((deprecated)) instance_boot_options_t *instance_boot_options_create(
    char *boot_args,
    char *restore_boot_args,
    char *udid,
    char *ecid,
    char *random_seed,
    int pac,
    int aprr
    ) {
    return instance_boot_options_create_internal (
        boot_args,
        restore_boot_args,
        udid,
        ecid,
        random_seed,
        pac,
        aprr
        );
}

void instance_boot_options_free(instance_boot_options_t *instance_boot_options) {
    if(NULL == instance_boot_options){
        return ;
    }
    if(instance_boot_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_boot_options_free");
        return ;
    }
    listEntry_t *listEntry;
    if (instance_boot_options->boot_args) {
        free(instance_boot_options->boot_args);
        instance_boot_options->boot_args = NULL;
    }
    if (instance_boot_options->restore_boot_args) {
        free(instance_boot_options->restore_boot_args);
        instance_boot_options->restore_boot_args = NULL;
    }
    if (instance_boot_options->udid) {
        free(instance_boot_options->udid);
        instance_boot_options->udid = NULL;
    }
    if (instance_boot_options->ecid) {
        free(instance_boot_options->ecid);
        instance_boot_options->ecid = NULL;
    }
    if (instance_boot_options->random_seed) {
        free(instance_boot_options->random_seed);
        instance_boot_options->random_seed = NULL;
    }
    free(instance_boot_options);
}

cJSON *instance_boot_options_convertToJSON(instance_boot_options_t *instance_boot_options) {
    cJSON *item = cJSON_CreateObject();

    // instance_boot_options->boot_args
    if(instance_boot_options->boot_args) {
    if(cJSON_AddStringToObject(item, "bootArgs", instance_boot_options->boot_args) == NULL) {
    goto fail; //String
    }
    }


    // instance_boot_options->restore_boot_args
    if(instance_boot_options->restore_boot_args) {
    if(cJSON_AddStringToObject(item, "restoreBootArgs", instance_boot_options->restore_boot_args) == NULL) {
    goto fail; //String
    }
    }


    // instance_boot_options->udid
    if(instance_boot_options->udid) {
    if(cJSON_AddStringToObject(item, "udid", instance_boot_options->udid) == NULL) {
    goto fail; //String
    }
    }


    // instance_boot_options->ecid
    if(instance_boot_options->ecid) {
    if(cJSON_AddStringToObject(item, "ecid", instance_boot_options->ecid) == NULL) {
    goto fail; //String
    }
    }


    // instance_boot_options->random_seed
    if(instance_boot_options->random_seed) {
    if(cJSON_AddStringToObject(item, "randomSeed", instance_boot_options->random_seed) == NULL) {
    goto fail; //String
    }
    }


    // instance_boot_options->pac
    if(instance_boot_options->pac) {
    if(cJSON_AddBoolToObject(item, "pac", instance_boot_options->pac) == NULL) {
    goto fail; //Bool
    }
    }


    // instance_boot_options->aprr
    if(instance_boot_options->aprr) {
    if(cJSON_AddBoolToObject(item, "aprr", instance_boot_options->aprr) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

instance_boot_options_t *instance_boot_options_parseFromJSON(cJSON *instance_boot_optionsJSON){

    instance_boot_options_t *instance_boot_options_local_var = NULL;

    // instance_boot_options->boot_args
    cJSON *boot_args = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "bootArgs");
    if (cJSON_IsNull(boot_args)) {
        boot_args = NULL;
    }
    if (boot_args) { 
    if(!cJSON_IsString(boot_args))
    {
    goto end; //String
    }
    }

    // instance_boot_options->restore_boot_args
    cJSON *restore_boot_args = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "restoreBootArgs");
    if (cJSON_IsNull(restore_boot_args)) {
        restore_boot_args = NULL;
    }
    if (restore_boot_args) { 
    if(!cJSON_IsString(restore_boot_args))
    {
    goto end; //String
    }
    }

    // instance_boot_options->udid
    cJSON *udid = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "udid");
    if (cJSON_IsNull(udid)) {
        udid = NULL;
    }
    if (udid) { 
    if(!cJSON_IsString(udid))
    {
    goto end; //String
    }
    }

    // instance_boot_options->ecid
    cJSON *ecid = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "ecid");
    if (cJSON_IsNull(ecid)) {
        ecid = NULL;
    }
    if (ecid) { 
    if(!cJSON_IsString(ecid))
    {
    goto end; //String
    }
    }

    // instance_boot_options->random_seed
    cJSON *random_seed = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "randomSeed");
    if (cJSON_IsNull(random_seed)) {
        random_seed = NULL;
    }
    if (random_seed) { 
    if(!cJSON_IsString(random_seed))
    {
    goto end; //String
    }
    }

    // instance_boot_options->pac
    cJSON *pac = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "pac");
    if (cJSON_IsNull(pac)) {
        pac = NULL;
    }
    if (pac) { 
    if(!cJSON_IsBool(pac))
    {
    goto end; //Bool
    }
    }

    // instance_boot_options->aprr
    cJSON *aprr = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "aprr");
    if (cJSON_IsNull(aprr)) {
        aprr = NULL;
    }
    if (aprr) { 
    if(!cJSON_IsBool(aprr))
    {
    goto end; //Bool
    }
    }


    instance_boot_options_local_var = instance_boot_options_create_internal (
        boot_args ? strdup(boot_args->valuestring) : NULL,
        restore_boot_args ? strdup(restore_boot_args->valuestring) : NULL,
        udid ? strdup(udid->valuestring) : NULL,
        ecid ? strdup(ecid->valuestring) : NULL,
        random_seed ? strdup(random_seed->valuestring) : NULL,
        pac ? pac->valueint : 0,
        aprr ? aprr->valueint : 0
        );

    return instance_boot_options_local_var;
end:
    return NULL;

}
