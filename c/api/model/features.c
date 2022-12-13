#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "features.h"



static features_t *features_create_internal(
    int apps,
    int connect,
    int console,
    int coretrace,
    int device_control,
    int device_delete,
    int files,
    int frida,
    int images,
    int messaging,
    int netmon,
    int network,
    int port_forwarding,
    int power_management,
    int profile,
    int sensors,
    int settings,
    int snapshots,
    int strace,
    int system
    ) {
    features_t *features_local_var = malloc(sizeof(features_t));
    if (!features_local_var) {
        return NULL;
    }
    features_local_var->apps = apps;
    features_local_var->connect = connect;
    features_local_var->console = console;
    features_local_var->coretrace = coretrace;
    features_local_var->device_control = device_control;
    features_local_var->device_delete = device_delete;
    features_local_var->files = files;
    features_local_var->frida = frida;
    features_local_var->images = images;
    features_local_var->messaging = messaging;
    features_local_var->netmon = netmon;
    features_local_var->network = network;
    features_local_var->port_forwarding = port_forwarding;
    features_local_var->power_management = power_management;
    features_local_var->profile = profile;
    features_local_var->sensors = sensors;
    features_local_var->settings = settings;
    features_local_var->snapshots = snapshots;
    features_local_var->strace = strace;
    features_local_var->system = system;

    features_local_var->_library_owned = 1;
    return features_local_var;
}

__attribute__((deprecated)) features_t *features_create(
    int apps,
    int connect,
    int console,
    int coretrace,
    int device_control,
    int device_delete,
    int files,
    int frida,
    int images,
    int messaging,
    int netmon,
    int network,
    int port_forwarding,
    int power_management,
    int profile,
    int sensors,
    int settings,
    int snapshots,
    int strace,
    int system
    ) {
    return features_create_internal (
        apps,
        connect,
        console,
        coretrace,
        device_control,
        device_delete,
        files,
        frida,
        images,
        messaging,
        netmon,
        network,
        port_forwarding,
        power_management,
        profile,
        sensors,
        settings,
        snapshots,
        strace,
        system
        );
}

void features_free(features_t *features) {
    if(NULL == features){
        return ;
    }
    if(features->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "features_free");
        return ;
    }
    listEntry_t *listEntry;
    free(features);
}

cJSON *features_convertToJSON(features_t *features) {
    cJSON *item = cJSON_CreateObject();

    // features->apps
    if(features->apps) {
    if(cJSON_AddBoolToObject(item, "apps", features->apps) == NULL) {
    goto fail; //Bool
    }
    }


    // features->connect
    if(features->connect) {
    if(cJSON_AddBoolToObject(item, "connect", features->connect) == NULL) {
    goto fail; //Bool
    }
    }


    // features->console
    if(features->console) {
    if(cJSON_AddBoolToObject(item, "console", features->console) == NULL) {
    goto fail; //Bool
    }
    }


    // features->coretrace
    if(features->coretrace) {
    if(cJSON_AddBoolToObject(item, "coretrace", features->coretrace) == NULL) {
    goto fail; //Bool
    }
    }


    // features->device_control
    if(features->device_control) {
    if(cJSON_AddBoolToObject(item, "deviceControl", features->device_control) == NULL) {
    goto fail; //Bool
    }
    }


    // features->device_delete
    if(features->device_delete) {
    if(cJSON_AddBoolToObject(item, "deviceDelete", features->device_delete) == NULL) {
    goto fail; //Bool
    }
    }


    // features->files
    if(features->files) {
    if(cJSON_AddBoolToObject(item, "files", features->files) == NULL) {
    goto fail; //Bool
    }
    }


    // features->frida
    if(features->frida) {
    if(cJSON_AddBoolToObject(item, "frida", features->frida) == NULL) {
    goto fail; //Bool
    }
    }


    // features->images
    if(features->images) {
    if(cJSON_AddBoolToObject(item, "images", features->images) == NULL) {
    goto fail; //Bool
    }
    }


    // features->messaging
    if(features->messaging) {
    if(cJSON_AddBoolToObject(item, "messaging", features->messaging) == NULL) {
    goto fail; //Bool
    }
    }


    // features->netmon
    if(features->netmon) {
    if(cJSON_AddBoolToObject(item, "netmon", features->netmon) == NULL) {
    goto fail; //Bool
    }
    }


    // features->network
    if(features->network) {
    if(cJSON_AddBoolToObject(item, "network", features->network) == NULL) {
    goto fail; //Bool
    }
    }


    // features->port_forwarding
    if(features->port_forwarding) {
    if(cJSON_AddBoolToObject(item, "portForwarding", features->port_forwarding) == NULL) {
    goto fail; //Bool
    }
    }


    // features->power_management
    if(features->power_management) {
    if(cJSON_AddBoolToObject(item, "powerManagement", features->power_management) == NULL) {
    goto fail; //Bool
    }
    }


    // features->profile
    if(features->profile) {
    if(cJSON_AddBoolToObject(item, "profile", features->profile) == NULL) {
    goto fail; //Bool
    }
    }


    // features->sensors
    if(features->sensors) {
    if(cJSON_AddBoolToObject(item, "sensors", features->sensors) == NULL) {
    goto fail; //Bool
    }
    }


    // features->settings
    if(features->settings) {
    if(cJSON_AddBoolToObject(item, "settings", features->settings) == NULL) {
    goto fail; //Bool
    }
    }


    // features->snapshots
    if(features->snapshots) {
    if(cJSON_AddBoolToObject(item, "snapshots", features->snapshots) == NULL) {
    goto fail; //Bool
    }
    }


    // features->strace
    if(features->strace) {
    if(cJSON_AddBoolToObject(item, "strace", features->strace) == NULL) {
    goto fail; //Bool
    }
    }


    // features->system
    if(features->system) {
    if(cJSON_AddBoolToObject(item, "system", features->system) == NULL) {
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

features_t *features_parseFromJSON(cJSON *featuresJSON){

    features_t *features_local_var = NULL;

    // features->apps
    cJSON *apps = cJSON_GetObjectItemCaseSensitive(featuresJSON, "apps");
    if (cJSON_IsNull(apps)) {
        apps = NULL;
    }
    if (apps) { 
    if(!cJSON_IsBool(apps))
    {
    goto end; //Bool
    }
    }

    // features->connect
    cJSON *connect = cJSON_GetObjectItemCaseSensitive(featuresJSON, "connect");
    if (cJSON_IsNull(connect)) {
        connect = NULL;
    }
    if (connect) { 
    if(!cJSON_IsBool(connect))
    {
    goto end; //Bool
    }
    }

    // features->console
    cJSON *console = cJSON_GetObjectItemCaseSensitive(featuresJSON, "console");
    if (cJSON_IsNull(console)) {
        console = NULL;
    }
    if (console) { 
    if(!cJSON_IsBool(console))
    {
    goto end; //Bool
    }
    }

    // features->coretrace
    cJSON *coretrace = cJSON_GetObjectItemCaseSensitive(featuresJSON, "coretrace");
    if (cJSON_IsNull(coretrace)) {
        coretrace = NULL;
    }
    if (coretrace) { 
    if(!cJSON_IsBool(coretrace))
    {
    goto end; //Bool
    }
    }

    // features->device_control
    cJSON *device_control = cJSON_GetObjectItemCaseSensitive(featuresJSON, "deviceControl");
    if (cJSON_IsNull(device_control)) {
        device_control = NULL;
    }
    if (device_control) { 
    if(!cJSON_IsBool(device_control))
    {
    goto end; //Bool
    }
    }

    // features->device_delete
    cJSON *device_delete = cJSON_GetObjectItemCaseSensitive(featuresJSON, "deviceDelete");
    if (cJSON_IsNull(device_delete)) {
        device_delete = NULL;
    }
    if (device_delete) { 
    if(!cJSON_IsBool(device_delete))
    {
    goto end; //Bool
    }
    }

    // features->files
    cJSON *files = cJSON_GetObjectItemCaseSensitive(featuresJSON, "files");
    if (cJSON_IsNull(files)) {
        files = NULL;
    }
    if (files) { 
    if(!cJSON_IsBool(files))
    {
    goto end; //Bool
    }
    }

    // features->frida
    cJSON *frida = cJSON_GetObjectItemCaseSensitive(featuresJSON, "frida");
    if (cJSON_IsNull(frida)) {
        frida = NULL;
    }
    if (frida) { 
    if(!cJSON_IsBool(frida))
    {
    goto end; //Bool
    }
    }

    // features->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(featuresJSON, "images");
    if (cJSON_IsNull(images)) {
        images = NULL;
    }
    if (images) { 
    if(!cJSON_IsBool(images))
    {
    goto end; //Bool
    }
    }

    // features->messaging
    cJSON *messaging = cJSON_GetObjectItemCaseSensitive(featuresJSON, "messaging");
    if (cJSON_IsNull(messaging)) {
        messaging = NULL;
    }
    if (messaging) { 
    if(!cJSON_IsBool(messaging))
    {
    goto end; //Bool
    }
    }

    // features->netmon
    cJSON *netmon = cJSON_GetObjectItemCaseSensitive(featuresJSON, "netmon");
    if (cJSON_IsNull(netmon)) {
        netmon = NULL;
    }
    if (netmon) { 
    if(!cJSON_IsBool(netmon))
    {
    goto end; //Bool
    }
    }

    // features->network
    cJSON *network = cJSON_GetObjectItemCaseSensitive(featuresJSON, "network");
    if (cJSON_IsNull(network)) {
        network = NULL;
    }
    if (network) { 
    if(!cJSON_IsBool(network))
    {
    goto end; //Bool
    }
    }

    // features->port_forwarding
    cJSON *port_forwarding = cJSON_GetObjectItemCaseSensitive(featuresJSON, "portForwarding");
    if (cJSON_IsNull(port_forwarding)) {
        port_forwarding = NULL;
    }
    if (port_forwarding) { 
    if(!cJSON_IsBool(port_forwarding))
    {
    goto end; //Bool
    }
    }

    // features->power_management
    cJSON *power_management = cJSON_GetObjectItemCaseSensitive(featuresJSON, "powerManagement");
    if (cJSON_IsNull(power_management)) {
        power_management = NULL;
    }
    if (power_management) { 
    if(!cJSON_IsBool(power_management))
    {
    goto end; //Bool
    }
    }

    // features->profile
    cJSON *profile = cJSON_GetObjectItemCaseSensitive(featuresJSON, "profile");
    if (cJSON_IsNull(profile)) {
        profile = NULL;
    }
    if (profile) { 
    if(!cJSON_IsBool(profile))
    {
    goto end; //Bool
    }
    }

    // features->sensors
    cJSON *sensors = cJSON_GetObjectItemCaseSensitive(featuresJSON, "sensors");
    if (cJSON_IsNull(sensors)) {
        sensors = NULL;
    }
    if (sensors) { 
    if(!cJSON_IsBool(sensors))
    {
    goto end; //Bool
    }
    }

    // features->settings
    cJSON *settings = cJSON_GetObjectItemCaseSensitive(featuresJSON, "settings");
    if (cJSON_IsNull(settings)) {
        settings = NULL;
    }
    if (settings) { 
    if(!cJSON_IsBool(settings))
    {
    goto end; //Bool
    }
    }

    // features->snapshots
    cJSON *snapshots = cJSON_GetObjectItemCaseSensitive(featuresJSON, "snapshots");
    if (cJSON_IsNull(snapshots)) {
        snapshots = NULL;
    }
    if (snapshots) { 
    if(!cJSON_IsBool(snapshots))
    {
    goto end; //Bool
    }
    }

    // features->strace
    cJSON *strace = cJSON_GetObjectItemCaseSensitive(featuresJSON, "strace");
    if (cJSON_IsNull(strace)) {
        strace = NULL;
    }
    if (strace) { 
    if(!cJSON_IsBool(strace))
    {
    goto end; //Bool
    }
    }

    // features->system
    cJSON *system = cJSON_GetObjectItemCaseSensitive(featuresJSON, "system");
    if (cJSON_IsNull(system)) {
        system = NULL;
    }
    if (system) { 
    if(!cJSON_IsBool(system))
    {
    goto end; //Bool
    }
    }


    features_local_var = features_create_internal (
        apps ? apps->valueint : 0,
        connect ? connect->valueint : 0,
        console ? console->valueint : 0,
        coretrace ? coretrace->valueint : 0,
        device_control ? device_control->valueint : 0,
        device_delete ? device_delete->valueint : 0,
        files ? files->valueint : 0,
        frida ? frida->valueint : 0,
        images ? images->valueint : 0,
        messaging ? messaging->valueint : 0,
        netmon ? netmon->valueint : 0,
        network ? network->valueint : 0,
        port_forwarding ? port_forwarding->valueint : 0,
        power_management ? power_management->valueint : 0,
        profile ? profile->valueint : 0,
        sensors ? sensors->valueint : 0,
        settings ? settings->valueint : 0,
        snapshots ? snapshots->valueint : 0,
        strace ? strace->valueint : 0,
        system ? system->valueint : 0
        );

    return features_local_var;
end:
    return NULL;

}
