#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_boot_options.h"



instance_boot_options_t *instance_boot_options_create(
    char *boot_args,
    char *restore_boot_args,
    char *udid,
    char *ecid,
    char *random_seed,
    int no_snapshot_mount,
    int pac,
    int aprr,
    list_t *cdhashes
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
    instance_boot_options_local_var->no_snapshot_mount = no_snapshot_mount;
    instance_boot_options_local_var->pac = pac;
    instance_boot_options_local_var->aprr = aprr;
    instance_boot_options_local_var->cdhashes = cdhashes;

    return instance_boot_options_local_var;
}


void instance_boot_options_free(instance_boot_options_t *instance_boot_options) {
    if(NULL == instance_boot_options){
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
    if (instance_boot_options->cdhashes) {
        list_ForEach(listEntry, instance_boot_options->cdhashes) {
            free(listEntry->data);
        }
        list_freeList(instance_boot_options->cdhashes);
        instance_boot_options->cdhashes = NULL;
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


    // instance_boot_options->no_snapshot_mount
    if(instance_boot_options->no_snapshot_mount) {
    if(cJSON_AddBoolToObject(item, "noSnapshotMount", instance_boot_options->no_snapshot_mount) == NULL) {
    goto fail; //Bool
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


    // instance_boot_options->cdhashes
    if(instance_boot_options->cdhashes) {
    cJSON *cdhashes = cJSON_AddArrayToObject(item, "cdhashes");
    if(cdhashes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *cdhashesListEntry;
    list_ForEach(cdhashesListEntry, instance_boot_options->cdhashes) {
    if(cJSON_AddStringToObject(cdhashes, "", (char*)cdhashesListEntry->data) == NULL)
    {
        goto fail;
    }
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

    // define the local list for instance_boot_options->cdhashes
    list_t *cdhashesList = NULL;

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

    // instance_boot_options->no_snapshot_mount
    cJSON *no_snapshot_mount = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "noSnapshotMount");
    if (cJSON_IsNull(no_snapshot_mount)) {
        no_snapshot_mount = NULL;
    }
    if (no_snapshot_mount) { 
    if(!cJSON_IsBool(no_snapshot_mount))
    {
    goto end; //Bool
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

    // instance_boot_options->cdhashes
    cJSON *cdhashes = cJSON_GetObjectItemCaseSensitive(instance_boot_optionsJSON, "cdhashes");
    if (cJSON_IsNull(cdhashes)) {
        cdhashes = NULL;
    }
    if (cdhashes) { 
    cJSON *cdhashes_local = NULL;
    if(!cJSON_IsArray(cdhashes)) {
        goto end;//primitive container
    }
    cdhashesList = list_createList();

    cJSON_ArrayForEach(cdhashes_local, cdhashes)
    {
        if(!cJSON_IsString(cdhashes_local))
        {
            goto end;
        }
        list_addElement(cdhashesList , strdup(cdhashes_local->valuestring));
    }
    }


    instance_boot_options_local_var = instance_boot_options_create (
        boot_args ? strdup(boot_args->valuestring) : NULL,
        restore_boot_args ? strdup(restore_boot_args->valuestring) : NULL,
        udid ? strdup(udid->valuestring) : NULL,
        ecid ? strdup(ecid->valuestring) : NULL,
        random_seed ? strdup(random_seed->valuestring) : NULL,
        no_snapshot_mount ? no_snapshot_mount->valueint : 0,
        pac ? pac->valueint : 0,
        aprr ? aprr->valueint : 0,
        cdhashes ? cdhashesList : NULL
        );

    return instance_boot_options_local_var;
end:
    if (cdhashesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cdhashesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cdhashesList);
        cdhashesList = NULL;
    }
    return NULL;

}
