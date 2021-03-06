#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_usage.h"



static project_usage_t *project_usage_create_internal(
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

    project_usage_local_var->_library_owned = 1;
    return project_usage_local_var;
}

__attribute__((deprecated)) project_usage_t *project_usage_create(
    double cores,
    double instances,
    double ram,
    double gpu
    ) {
    return project_usage_create_internal (
        cores,
        instances,
        ram,
        gpu
        );
}

void project_usage_free(project_usage_t *project_usage) {
    if(NULL == project_usage){
        return ;
    }
    if(project_usage->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "project_usage_free");
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
    if (cJSON_IsNull(cores)) {
        cores = NULL;
    }
    if (cores) { 
    if(!cJSON_IsNumber(cores))
    {
    goto end; //Numeric
    }
    }

    // project_usage->instances
    cJSON *instances = cJSON_GetObjectItemCaseSensitive(project_usageJSON, "instances");
    if (cJSON_IsNull(instances)) {
        instances = NULL;
    }
    if (instances) { 
    if(!cJSON_IsNumber(instances))
    {
    goto end; //Numeric
    }
    }

    // project_usage->ram
    cJSON *ram = cJSON_GetObjectItemCaseSensitive(project_usageJSON, "ram");
    if (cJSON_IsNull(ram)) {
        ram = NULL;
    }
    if (ram) { 
    if(!cJSON_IsNumber(ram))
    {
    goto end; //Numeric
    }
    }

    // project_usage->gpu
    cJSON *gpu = cJSON_GetObjectItemCaseSensitive(project_usageJSON, "gpu");
    if (cJSON_IsNull(gpu)) {
        gpu = NULL;
    }
    if (gpu) { 
    if(!cJSON_IsNumber(gpu))
    {
    goto end; //Numeric
    }
    }


    project_usage_local_var = project_usage_create_internal (
        cores ? cores->valuedouble : 0,
        instances ? instances->valuedouble : 0,
        ram ? ram->valuedouble : 0,
        gpu ? gpu->valuedouble : 0
        );

    return project_usage_local_var;
end:
    return NULL;

}
