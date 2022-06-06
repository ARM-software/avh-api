#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "snapshot_status.h"



snapshot_status_t *snapshot_status_create(
    char *task,
    int created
    ) {
    snapshot_status_t *snapshot_status_local_var = malloc(sizeof(snapshot_status_t));
    if (!snapshot_status_local_var) {
        return NULL;
    }
    snapshot_status_local_var->task = task;
    snapshot_status_local_var->created = created;

    return snapshot_status_local_var;
}


void snapshot_status_free(snapshot_status_t *snapshot_status) {
    if(NULL == snapshot_status){
        return ;
    }
    listEntry_t *listEntry;
    if (snapshot_status->task) {
        free(snapshot_status->task);
        snapshot_status->task = NULL;
    }
    free(snapshot_status);
}

cJSON *snapshot_status_convertToJSON(snapshot_status_t *snapshot_status) {
    cJSON *item = cJSON_CreateObject();

    // snapshot_status->task
    if(snapshot_status->task) {
    if(cJSON_AddStringToObject(item, "task", snapshot_status->task) == NULL) {
    goto fail; //String
    }
    }


    // snapshot_status->created
    if(snapshot_status->created) {
    if(cJSON_AddBoolToObject(item, "created", snapshot_status->created) == NULL) {
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

snapshot_status_t *snapshot_status_parseFromJSON(cJSON *snapshot_statusJSON){

    snapshot_status_t *snapshot_status_local_var = NULL;

    // snapshot_status->task
    cJSON *task = cJSON_GetObjectItemCaseSensitive(snapshot_statusJSON, "task");
    if (cJSON_IsNull(task)) {
        task = NULL;
    }
    if (task) { 
    if(!cJSON_IsString(task))
    {
    goto end; //String
    }
    }

    // snapshot_status->created
    cJSON *created = cJSON_GetObjectItemCaseSensitive(snapshot_statusJSON, "created");
    if (cJSON_IsNull(created)) {
        created = NULL;
    }
    if (created) { 
    if(!cJSON_IsBool(created))
    {
    goto end; //Bool
    }
    }


    snapshot_status_local_var = snapshot_status_create (
        task ? strdup(task->valuestring) : NULL,
        created ? created->valueint : 0
        );

    return snapshot_status_local_var;
end:
    return NULL;

}
