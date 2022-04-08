#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_quota.h"



project_quota_t *project_quota_create(
    double cores,
    double instances,
    double ram
    ) {
    project_quota_t *project_quota_local_var = malloc(sizeof(project_quota_t));
    if (!project_quota_local_var) {
        return NULL;
    }
    project_quota_local_var->cores = cores;
    project_quota_local_var->instances = instances;
    project_quota_local_var->ram = ram;

    return project_quota_local_var;
}


void project_quota_free(project_quota_t *project_quota) {
    if(NULL == project_quota){
        return ;
    }
    listEntry_t *listEntry;
    free(project_quota);
}

cJSON *project_quota_convertToJSON(project_quota_t *project_quota) {
    cJSON *item = cJSON_CreateObject();

    // project_quota->cores
    if(project_quota->cores) { 
    if(cJSON_AddNumberToObject(item, "cores", project_quota->cores) == NULL) {
    goto fail; //Numeric
    }
     } 


    // project_quota->instances
    if(project_quota->instances) { 
    if(cJSON_AddNumberToObject(item, "instances", project_quota->instances) == NULL) {
    goto fail; //Numeric
    }
     } 


    // project_quota->ram
    if(project_quota->ram) { 
    if(cJSON_AddNumberToObject(item, "ram", project_quota->ram) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

project_quota_t *project_quota_parseFromJSON(cJSON *project_quotaJSON){

    project_quota_t *project_quota_local_var = NULL;

    // project_quota->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(project_quotaJSON, "cores");
    if (cores) { 
    if(!cJSON_IsNumber(cores))
    {
    goto end; //Numeric
    }
    }

    // project_quota->instances
    cJSON *instances = cJSON_GetObjectItemCaseSensitive(project_quotaJSON, "instances");
    if (instances) { 
    if(!cJSON_IsNumber(instances))
    {
    goto end; //Numeric
    }
    }

    // project_quota->ram
    cJSON *ram = cJSON_GetObjectItemCaseSensitive(project_quotaJSON, "ram");
    if (ram) { 
    if(!cJSON_IsNumber(ram))
    {
    goto end; //Numeric
    }
    }


    project_quota_local_var = project_quota_create (
        cores ? cores->valuedouble : 0,
        instances ? instances->valuedouble : 0,
        ram ? ram->valuedouble : 0
        );

    return project_quota_local_var;
end:
    return NULL;

}
