#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "instance_create_options.h"



static instance_create_options_t *instance_create_options_create_internal(
    char *name,
    char *key,
    char *flavor,
    char *project,
    char *os,
    char *osbuild,
    list_t *patches,
    char *fwpackage,
    char *orig_fw_package_url,
    int encrypt,
    char *override_wifi_mac,
    volume_options_t *volume,
    char *snapshot,
    instance_boot_options_t *boot_options,
    model_t *device
    ) {
    instance_create_options_t *instance_create_options_local_var = malloc(sizeof(instance_create_options_t));
    if (!instance_create_options_local_var) {
        return NULL;
    }
    instance_create_options_local_var->name = name;
    instance_create_options_local_var->key = key;
    instance_create_options_local_var->flavor = flavor;
    instance_create_options_local_var->project = project;
    instance_create_options_local_var->os = os;
    instance_create_options_local_var->osbuild = osbuild;
    instance_create_options_local_var->patches = patches;
    instance_create_options_local_var->fwpackage = fwpackage;
    instance_create_options_local_var->orig_fw_package_url = orig_fw_package_url;
    instance_create_options_local_var->encrypt = encrypt;
    instance_create_options_local_var->override_wifi_mac = override_wifi_mac;
    instance_create_options_local_var->volume = volume;
    instance_create_options_local_var->snapshot = snapshot;
    instance_create_options_local_var->boot_options = boot_options;
    instance_create_options_local_var->device = device;

    instance_create_options_local_var->_library_owned = 1;
    return instance_create_options_local_var;
}

__attribute__((deprecated)) instance_create_options_t *instance_create_options_create(
    char *name,
    char *key,
    char *flavor,
    char *project,
    char *os,
    char *osbuild,
    list_t *patches,
    char *fwpackage,
    char *orig_fw_package_url,
    int encrypt,
    char *override_wifi_mac,
    volume_options_t *volume,
    char *snapshot,
    instance_boot_options_t *boot_options,
    model_t *device
    ) {
    return instance_create_options_create_internal (
        name,
        key,
        flavor,
        project,
        os,
        osbuild,
        patches,
        fwpackage,
        orig_fw_package_url,
        encrypt,
        override_wifi_mac,
        volume,
        snapshot,
        boot_options,
        device
        );
}

void instance_create_options_free(instance_create_options_t *instance_create_options) {
    if(NULL == instance_create_options){
        return ;
    }
    if(instance_create_options->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "instance_create_options_free");
        return ;
    }
    listEntry_t *listEntry;
    if (instance_create_options->name) {
        free(instance_create_options->name);
        instance_create_options->name = NULL;
    }
    if (instance_create_options->key) {
        free(instance_create_options->key);
        instance_create_options->key = NULL;
    }
    if (instance_create_options->flavor) {
        free(instance_create_options->flavor);
        instance_create_options->flavor = NULL;
    }
    if (instance_create_options->project) {
        free(instance_create_options->project);
        instance_create_options->project = NULL;
    }
    if (instance_create_options->os) {
        free(instance_create_options->os);
        instance_create_options->os = NULL;
    }
    if (instance_create_options->osbuild) {
        free(instance_create_options->osbuild);
        instance_create_options->osbuild = NULL;
    }
    if (instance_create_options->patches) {
        list_ForEach(listEntry, instance_create_options->patches) {
            free(listEntry->data);
        }
        list_freeList(instance_create_options->patches);
        instance_create_options->patches = NULL;
    }
    if (instance_create_options->fwpackage) {
        free(instance_create_options->fwpackage);
        instance_create_options->fwpackage = NULL;
    }
    if (instance_create_options->orig_fw_package_url) {
        free(instance_create_options->orig_fw_package_url);
        instance_create_options->orig_fw_package_url = NULL;
    }
    if (instance_create_options->override_wifi_mac) {
        free(instance_create_options->override_wifi_mac);
        instance_create_options->override_wifi_mac = NULL;
    }
    if (instance_create_options->volume) {
        volume_options_free(instance_create_options->volume);
        instance_create_options->volume = NULL;
    }
    if (instance_create_options->snapshot) {
        free(instance_create_options->snapshot);
        instance_create_options->snapshot = NULL;
    }
    if (instance_create_options->boot_options) {
        instance_boot_options_free(instance_create_options->boot_options);
        instance_create_options->boot_options = NULL;
    }
    if (instance_create_options->device) {
        model_free(instance_create_options->device);
        instance_create_options->device = NULL;
    }
    free(instance_create_options);
}

cJSON *instance_create_options_convertToJSON(instance_create_options_t *instance_create_options) {
    cJSON *item = cJSON_CreateObject();

    // instance_create_options->name
    if(instance_create_options->name) {
    if(cJSON_AddStringToObject(item, "name", instance_create_options->name) == NULL) {
    goto fail; //String
    }
    }


    // instance_create_options->key
    if(instance_create_options->key) {
    if(cJSON_AddStringToObject(item, "key", instance_create_options->key) == NULL) {
    goto fail; //String
    }
    }


    // instance_create_options->flavor
    if (!instance_create_options->flavor) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "flavor", instance_create_options->flavor) == NULL) {
    goto fail; //String
    }


    // instance_create_options->project
    if (!instance_create_options->project) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "project", instance_create_options->project) == NULL) {
    goto fail; //String
    }


    // instance_create_options->os
    if (!instance_create_options->os) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "os", instance_create_options->os) == NULL) {
    goto fail; //String
    }


    // instance_create_options->osbuild
    if(instance_create_options->osbuild) {
    if(cJSON_AddStringToObject(item, "osbuild", instance_create_options->osbuild) == NULL) {
    goto fail; //String
    }
    }


    // instance_create_options->patches
    if(instance_create_options->patches) {
    cJSON *patches = cJSON_AddArrayToObject(item, "patches");
    if(patches == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *patchesListEntry;
    list_ForEach(patchesListEntry, instance_create_options->patches) {
    if(cJSON_AddStringToObject(patches, "", (char*)patchesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // instance_create_options->fwpackage
    if(instance_create_options->fwpackage) {
    if(cJSON_AddStringToObject(item, "fwpackage", instance_create_options->fwpackage) == NULL) {
    goto fail; //String
    }
    }


    // instance_create_options->orig_fw_package_url
    if(instance_create_options->orig_fw_package_url) {
    if(cJSON_AddStringToObject(item, "origFwPackageUrl", instance_create_options->orig_fw_package_url) == NULL) {
    goto fail; //String
    }
    }


    // instance_create_options->encrypt
    if(instance_create_options->encrypt) {
    if(cJSON_AddBoolToObject(item, "encrypt", instance_create_options->encrypt) == NULL) {
    goto fail; //Bool
    }
    }


    // instance_create_options->override_wifi_mac
    if(instance_create_options->override_wifi_mac) {
    if(cJSON_AddStringToObject(item, "overrideWifiMAC", instance_create_options->override_wifi_mac) == NULL) {
    goto fail; //String
    }
    }


    // instance_create_options->volume
    if(instance_create_options->volume) {
    cJSON *volume_local_JSON = volume_options_convertToJSON(instance_create_options->volume);
    if(volume_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "volume", volume_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // instance_create_options->snapshot
    if(instance_create_options->snapshot) {
    if(cJSON_AddStringToObject(item, "snapshot", instance_create_options->snapshot) == NULL) {
    goto fail; //String
    }
    }


    // instance_create_options->boot_options
    if(instance_create_options->boot_options) {
    cJSON *boot_options_local_JSON = instance_boot_options_convertToJSON(instance_create_options->boot_options);
    if(boot_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bootOptions", boot_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // instance_create_options->device
    if(instance_create_options->device) {
    cJSON *device_local_JSON = model_convertToJSON(instance_create_options->device);
    if(device_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "device", device_local_JSON);
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

instance_create_options_t *instance_create_options_parseFromJSON(cJSON *instance_create_optionsJSON){

    instance_create_options_t *instance_create_options_local_var = NULL;

    // define the local list for instance_create_options->patches
    list_t *patchesList = NULL;

    // define the local variable for instance_create_options->volume
    volume_options_t *volume_local_nonprim = NULL;

    // define the local variable for instance_create_options->boot_options
    instance_boot_options_t *boot_options_local_nonprim = NULL;

    // define the local variable for instance_create_options->device
    model_t *device_local_nonprim = NULL;

    // instance_create_options->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // instance_create_options->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "key");
    if (cJSON_IsNull(key)) {
        key = NULL;
    }
    if (key) { 
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }
    }

    // instance_create_options->flavor
    cJSON *flavor = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "flavor");
    if (cJSON_IsNull(flavor)) {
        flavor = NULL;
    }
    if (!flavor) {
        goto end;
    }

    
    if(!cJSON_IsString(flavor))
    {
    goto end; //String
    }

    // instance_create_options->project
    cJSON *project = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "project");
    if (cJSON_IsNull(project)) {
        project = NULL;
    }
    if (!project) {
        goto end;
    }

    
    if(!cJSON_IsString(project))
    {
    goto end; //String
    }

    // instance_create_options->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (!os) {
        goto end;
    }

    
    if(!cJSON_IsString(os))
    {
    goto end; //String
    }

    // instance_create_options->osbuild
    cJSON *osbuild = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "osbuild");
    if (cJSON_IsNull(osbuild)) {
        osbuild = NULL;
    }
    if (osbuild) { 
    if(!cJSON_IsString(osbuild))
    {
    goto end; //String
    }
    }

    // instance_create_options->patches
    cJSON *patches = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "patches");
    if (cJSON_IsNull(patches)) {
        patches = NULL;
    }
    if (patches) { 
    cJSON *patches_local = NULL;
    if(!cJSON_IsArray(patches)) {
        goto end;//primitive container
    }
    patchesList = list_createList();

    cJSON_ArrayForEach(patches_local, patches)
    {
        if(!cJSON_IsString(patches_local))
        {
            goto end;
        }
        list_addElement(patchesList , strdup(patches_local->valuestring));
    }
    }

    // instance_create_options->fwpackage
    cJSON *fwpackage = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "fwpackage");
    if (cJSON_IsNull(fwpackage)) {
        fwpackage = NULL;
    }
    if (fwpackage) { 
    if(!cJSON_IsString(fwpackage))
    {
    goto end; //String
    }
    }

    // instance_create_options->orig_fw_package_url
    cJSON *orig_fw_package_url = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "origFwPackageUrl");
    if (cJSON_IsNull(orig_fw_package_url)) {
        orig_fw_package_url = NULL;
    }
    if (orig_fw_package_url) { 
    if(!cJSON_IsString(orig_fw_package_url))
    {
    goto end; //String
    }
    }

    // instance_create_options->encrypt
    cJSON *encrypt = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "encrypt");
    if (cJSON_IsNull(encrypt)) {
        encrypt = NULL;
    }
    if (encrypt) { 
    if(!cJSON_IsBool(encrypt))
    {
    goto end; //Bool
    }
    }

    // instance_create_options->override_wifi_mac
    cJSON *override_wifi_mac = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "overrideWifiMAC");
    if (cJSON_IsNull(override_wifi_mac)) {
        override_wifi_mac = NULL;
    }
    if (override_wifi_mac) { 
    if(!cJSON_IsString(override_wifi_mac))
    {
    goto end; //String
    }
    }

    // instance_create_options->volume
    cJSON *volume = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "volume");
    if (cJSON_IsNull(volume)) {
        volume = NULL;
    }
    if (volume) { 
    volume_local_nonprim = volume_options_parseFromJSON(volume); //nonprimitive
    }

    // instance_create_options->snapshot
    cJSON *snapshot = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "snapshot");
    if (cJSON_IsNull(snapshot)) {
        snapshot = NULL;
    }
    if (snapshot) { 
    if(!cJSON_IsString(snapshot))
    {
    goto end; //String
    }
    }

    // instance_create_options->boot_options
    cJSON *boot_options = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "bootOptions");
    if (cJSON_IsNull(boot_options)) {
        boot_options = NULL;
    }
    if (boot_options) { 
    boot_options_local_nonprim = instance_boot_options_parseFromJSON(boot_options); //nonprimitive
    }

    // instance_create_options->device
    cJSON *device = cJSON_GetObjectItemCaseSensitive(instance_create_optionsJSON, "device");
    if (cJSON_IsNull(device)) {
        device = NULL;
    }
    if (device) { 
    device_local_nonprim = model_parseFromJSON(device); //nonprimitive
    }


    instance_create_options_local_var = instance_create_options_create_internal (
        name ? strdup(name->valuestring) : NULL,
        key ? strdup(key->valuestring) : NULL,
        strdup(flavor->valuestring),
        strdup(project->valuestring),
        strdup(os->valuestring),
        osbuild ? strdup(osbuild->valuestring) : NULL,
        patches ? patchesList : NULL,
        fwpackage ? strdup(fwpackage->valuestring) : NULL,
        orig_fw_package_url ? strdup(orig_fw_package_url->valuestring) : NULL,
        encrypt ? encrypt->valueint : 0,
        override_wifi_mac ? strdup(override_wifi_mac->valuestring) : NULL,
        volume ? volume_local_nonprim : NULL,
        snapshot ? strdup(snapshot->valuestring) : NULL,
        boot_options ? boot_options_local_nonprim : NULL,
        device ? device_local_nonprim : NULL
        );

    return instance_create_options_local_var;
end:
    if (patchesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, patchesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(patchesList);
        patchesList = NULL;
    }
    if (volume_local_nonprim) {
        volume_options_free(volume_local_nonprim);
        volume_local_nonprim = NULL;
    }
    if (boot_options_local_nonprim) {
        instance_boot_options_free(boot_options_local_nonprim);
        boot_options_local_nonprim = NULL;
    }
    if (device_local_nonprim) {
        model_free(device_local_nonprim);
        device_local_nonprim = NULL;
    }
    return NULL;

}
