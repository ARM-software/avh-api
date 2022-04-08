#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_usage.h"



project_usage_t *project_usage_create(
    double cores,
    double instances,
    double ram,
    double gpu
    ) {
    project_usage_t *project_usage_local_var = malloc(sizeof(project_usage_t));
    if (!project_usage_local_var) {
        return NULL;
    }
    project_usage_local_var->cores = cores;
    project_usage_local_var->instances = instances;
    project_usage_local_var->ram = ram;
    project_usage_local_var->gpu = gpu;

    return project_usage_local_var;
}


void project_usage_free(project_usage_t *project_usage) {
    if(NULL == project_usage){
        return ;
    }
    listEntry_t *listEntry;
    free(project_usage);
}

cJSON *project_usage_convertToJSON(project_usage_t *project_usage) {
    cJSON *item = cJSON_CreateObject();

    // project_usage->cores
    if(project_usage->cores) { 
    if(cJSON_AddNumberToObject(item, "cores", project_usage->cores) == NULL) {
    goto fail; //Numeric
    }
     } 


    // project_usage->instances
    if(project_usage->instances) { 
    if(cJSON_AddNumberToObject(item, "instances", project_usage->instances) == NULL) {
    goto fail; //Numeric
    }
     } 


    // project_usage->ram
    if(project_usage->ram) { 
    if(cJSON_AddNumberToObject(item, "ram", project_usage->ram) == NULL) {
    goto fail; //Numeric
    }
     } 


    // project_usage->gpu
    if(project_usage->gpu) { 
    if(cJSON_AddNumberToObject(item, "gpu", project_usage->gpu) == NULL) {
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

project_usage_t *project_usage_parseFromJSON(cJSON *project_usageJSON){

    project_usage_t *project_usage_local_var = NULL;

    // project_usage->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(project_usageJSON, "cores");
    if (cores) { 
    if(!cJSON_IsNumber(cores))
    {
    goto end; //Numeric
    }
    }

    // project_usage->instances
    cJSON *instances = cJSON_GetObjectItemCaseSensitive(project_usageJSON, "instances");
    if (instances) { 
    if(!cJSON_IsNumber(instances))
    {
    goto end; //Numeric
    }
    }

    // project_usage->ram
    cJSON *ram = cJSON_GetObjectItemCaseSensitive(project_usageJSON, "ram");
    if (ram) { 
    if(!cJSON_IsNumber(ram))
    {
    goto end; //Numeric
    }
    }

    // project_usage->gpu
    cJSON *gpu = cJSON_GetObjectItemCaseSensitive(project_usageJSON, "gpu");
    if (gpu) { 
    if(!cJSON_IsNumber(gpu))
    {
    goto end; //Numeric
    }
    }


    project_usage_local_var = project_usage_create (
        cores ? cores->valuedouble : 0,
        instances ? instances->valuedouble : 0,
        ram ? ram->valuedouble : 0,
        gpu ? gpu->valuedouble : 0
        );

    return project_usage_local_var;
end:
    return NULL;

}
