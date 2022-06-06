#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "snapshot.h"



snapshot_t *snapshot_create(
    char *id,
    char *name,
    char *instance,
    snapshot_status_t *status,
    double date,
    int fresh,
    int live,
    int local
    ) {
    snapshot_t *snapshot_local_var = malloc(sizeof(snapshot_t));
    if (!snapshot_local_var) {
        return NULL;
    }
    snapshot_local_var->id = id;
    snapshot_local_var->name = name;
    snapshot_local_var->instance = instance;
    snapshot_local_var->status = status;
    snapshot_local_var->date = date;
    snapshot_local_var->fresh = fresh;
    snapshot_local_var->live = live;
    snapshot_local_var->local = local;

    return snapshot_local_var;
}


void snapshot_free(snapshot_t *snapshot) {
    if(NULL == snapshot){
        return ;
    }
    listEntry_t *listEntry;
    if (snapshot->id) {
        free(snapshot->id);
        snapshot->id = NULL;
    }
    if (snapshot->name) {
        free(snapshot->name);
        snapshot->name = NULL;
    }
    if (snapshot->instance) {
        free(snapshot->instance);
        snapshot->instance = NULL;
    }
    if (snapshot->status) {
        snapshot_status_free(snapshot->status);
        snapshot->status = NULL;
    }
    free(snapshot);
}

cJSON *snapshot_convertToJSON(snapshot_t *snapshot) {
    cJSON *item = cJSON_CreateObject();

    // snapshot->id
    if(snapshot->id) {
    if(cJSON_AddStringToObject(item, "id", snapshot->id) == NULL) {
    goto fail; //String
    }
    }


    // snapshot->name
    if(snapshot->name) {
    if(cJSON_AddStringToObject(item, "name", snapshot->name) == NULL) {
    goto fail; //String
    }
    }


    // snapshot->instance
    if(snapshot->instance) {
    if(cJSON_AddStringToObject(item, "instance", snapshot->instance) == NULL) {
    goto fail; //String
    }
    }


    // snapshot->status
    if(snapshot->status) {
    cJSON *status_local_JSON = snapshot_status_convertToJSON(snapshot->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // snapshot->date
    if(snapshot->date) {
    if(cJSON_AddNumberToObject(item, "date", snapshot->date) == NULL) {
    goto fail; //Numeric
    }
    }


    // snapshot->fresh
    if(snapshot->fresh) {
    if(cJSON_AddBoolToObject(item, "fresh", snapshot->fresh) == NULL) {
    goto fail; //Bool
    }
    }


    // snapshot->live
    if(snapshot->live) {
    if(cJSON_AddBoolToObject(item, "live", snapshot->live) == NULL) {
    goto fail; //Bool
    }
    }


    // snapshot->local
    if(snapshot->local) {
    if(cJSON_AddBoolToObject(item, "local", snapshot->local) == NULL) {
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

snapshot_t *snapshot_parseFromJSON(cJSON *snapshotJSON){

    snapshot_t *snapshot_local_var = NULL;

    // define the local variable for snapshot->status
    snapshot_status_t *status_local_nonprim = NULL;

    // snapshot->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }

    // snapshot->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // snapshot->instance
    cJSON *instance = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "instance");
    if (cJSON_IsNull(instance)) {
        instance = NULL;
    }
    if (instance) { 
    if(!cJSON_IsString(instance))
    {
    goto end; //String
    }
    }

    // snapshot->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    status_local_nonprim = snapshot_status_parseFromJSON(status); //nonprimitive
    }

    // snapshot->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsNumber(date))
    {
    goto end; //Numeric
    }
    }

    // snapshot->fresh
    cJSON *fresh = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "fresh");
    if (cJSON_IsNull(fresh)) {
        fresh = NULL;
    }
    if (fresh) { 
    if(!cJSON_IsBool(fresh))
    {
    goto end; //Bool
    }
    }

    // snapshot->live
    cJSON *live = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "live");
    if (cJSON_IsNull(live)) {
        live = NULL;
    }
    if (live) { 
    if(!cJSON_IsBool(live))
    {
    goto end; //Bool
    }
    }

    // snapshot->local
    cJSON *local = cJSON_GetObjectItemCaseSensitive(snapshotJSON, "local");
    if (cJSON_IsNull(local)) {
        local = NULL;
    }
    if (local) { 
    if(!cJSON_IsBool(local))
    {
    goto end; //Bool
    }
    }


    snapshot_local_var = snapshot_create (
        id ? strdup(id->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        instance ? strdup(instance->valuestring) : NULL,
        status ? status_local_nonprim : NULL,
        date ? date->valuedouble : 0,
        fresh ? fresh->valueint : 0,
        live ? live->valueint : 0,
        local ? local->valueint : 0
        );

    return snapshot_local_var;
end:
    if (status_local_nonprim) {
        snapshot_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
