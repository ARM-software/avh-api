#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "image.h"


char* typeimage_ToString(arm_api_image_TYPE_e type) {
    char* typeArray[] =  { "NULL", "fwbinary", "kernel", "devicetree", "ramdisk", "loaderfile", "sepfw", "seprom", "bootrom", "llb", "iboot", "ibootdata", "fwpackage", "partition" };
	return typeArray[type];
}

arm_api_image_TYPE_e typeimage_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "fwbinary", "kernel", "devicetree", "ramdisk", "loaderfile", "sepfw", "seprom", "bootrom", "llb", "iboot", "ibootdata", "fwpackage", "partition" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static image_t *image_create_internal(
    char *status,
    char *id,
    char *name,
    arm_api_image_TYPE_e type,
    char *filename,
    char *uniqueid,
    double size,
    char *project,
    char *created_at,
    char *updated_at
    ) {
    image_t *image_local_var = malloc(sizeof(image_t));
    if (!image_local_var) {
        return NULL;
    }
    image_local_var->status = status;
    image_local_var->id = id;
    image_local_var->name = name;
    image_local_var->type = type;
    image_local_var->filename = filename;
    image_local_var->uniqueid = uniqueid;
    image_local_var->size = size;
    image_local_var->project = project;
    image_local_var->created_at = created_at;
    image_local_var->updated_at = updated_at;

    image_local_var->_library_owned = 1;
    return image_local_var;
}

__attribute__((deprecated)) image_t *image_create(
    char *status,
    char *id,
    char *name,
    arm_api_image_TYPE_e type,
    char *filename,
    char *uniqueid,
    double size,
    char *project,
    char *created_at,
    char *updated_at
    ) {
    return image_create_internal (
        status,
        id,
        name,
        type,
        filename,
        uniqueid,
        size,
        project,
        created_at,
        updated_at
        );
}

void image_free(image_t *image) {
    if(NULL == image){
        return ;
    }
    if(image->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "image_free");
        return ;
    }
    listEntry_t *listEntry;
    if (image->status) {
        free(image->status);
        image->status = NULL;
    }
    if (image->id) {
        free(image->id);
        image->id = NULL;
    }
    if (image->name) {
        free(image->name);
        image->name = NULL;
    }
    if (image->filename) {
        free(image->filename);
        image->filename = NULL;
    }
    if (image->uniqueid) {
        free(image->uniqueid);
        image->uniqueid = NULL;
    }
    if (image->project) {
        free(image->project);
        image->project = NULL;
    }
    if (image->created_at) {
        free(image->created_at);
        image->created_at = NULL;
    }
    if (image->updated_at) {
        free(image->updated_at);
        image->updated_at = NULL;
    }
    free(image);
}

cJSON *image_convertToJSON(image_t *image) {
    cJSON *item = cJSON_CreateObject();

    // image->status
    if (!image->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", image->status) == NULL) {
    goto fail; //String
    }


    // image->id
    if(image->id) {
    if(cJSON_AddStringToObject(item, "id", image->id) == NULL) {
    goto fail; //String
    }
    }


    // image->name
    if(image->name) {
    if(cJSON_AddStringToObject(item, "name", image->name) == NULL) {
    goto fail; //String
    }
    }


    // image->type
    if(image->type != arm_api_image_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typeimage_ToString(image->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // image->filename
    if(image->filename) {
    if(cJSON_AddStringToObject(item, "filename", image->filename) == NULL) {
    goto fail; //String
    }
    }


    // image->uniqueid
    if(image->uniqueid) {
    if(cJSON_AddStringToObject(item, "uniqueid", image->uniqueid) == NULL) {
    goto fail; //String
    }
    }


    // image->size
    if(image->size) {
    if(cJSON_AddNumberToObject(item, "size", image->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // image->project
    if(image->project) {
    if(cJSON_AddStringToObject(item, "project", image->project) == NULL) {
    goto fail; //String
    }
    }


    // image->created_at
    if(image->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", image->created_at) == NULL) {
    goto fail; //Date-Time
    }
    }


    // image->updated_at
    if(image->updated_at) {
    if(cJSON_AddStringToObject(item, "updated_at", image->updated_at) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

image_t *image_parseFromJSON(cJSON *imageJSON){

    image_t *image_local_var = NULL;

    // image->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(imageJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // image->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(imageJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }

    // image->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(imageJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // image->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(imageJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    arm_api_image_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typeimage_FromString(type->valuestring);
    }

    // image->filename
    cJSON *filename = cJSON_GetObjectItemCaseSensitive(imageJSON, "filename");
    if (cJSON_IsNull(filename)) {
        filename = NULL;
    }
    if (filename) { 
    if(!cJSON_IsString(filename))
    {
    goto end; //String
    }
    }

    // image->uniqueid
    cJSON *uniqueid = cJSON_GetObjectItemCaseSensitive(imageJSON, "uniqueid");
    if (cJSON_IsNull(uniqueid)) {
        uniqueid = NULL;
    }
    if (uniqueid) { 
    if(!cJSON_IsString(uniqueid))
    {
    goto end; //String
    }
    }

    // image->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(imageJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }

    // image->project
    cJSON *project = cJSON_GetObjectItemCaseSensitive(imageJSON, "project");
    if (cJSON_IsNull(project)) {
        project = NULL;
    }
    if (project) { 
    if(!cJSON_IsString(project))
    {
    goto end; //String
    }
    }

    // image->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(imageJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }
    }

    // image->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(imageJSON, "updated_at");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (updated_at) { 
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }
    }


    image_local_var = image_create_internal (
        strdup(status->valuestring),
        id ? strdup(id->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        type ? typeVariable : -1,
        filename ? strdup(filename->valuestring) : NULL,
        uniqueid ? strdup(uniqueid->valuestring) : NULL,
        size ? size->valuedouble : 0,
        project ? strdup(project->valuestring) : NULL,
        created_at ? strdup(created_at->valuestring) : NULL,
        updated_at ? strdup(updated_at->valuestring) : NULL
        );

    return image_local_var;
end:
    return NULL;

}
