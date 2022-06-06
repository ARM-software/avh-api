#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "image.h"


char* typeimage_ToString(arm_api_image_TYPE_e type) {
    char* typeArray[] =  { "NULL", "iotfirmware", "kernel", "devicetree", "ramdisk", "loaderfile", "sepfw", "seprom", "bootrom", "llb", "iboot", "ibootdata", "fw", "partition" };
	return typeArray[type];
}

arm_api_image_TYPE_e typeimage_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "iotfirmware", "kernel", "devicetree", "ramdisk", "loaderfile", "sepfw", "seprom", "bootrom", "llb", "iboot", "ibootdata", "fw", "partition" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

image_t *image_create(
    char *status,
    char *id,
    char *name,
    arm_api_image_TYPE_e type,
    char *self,
    char *file,
    double size,
    double checksum,
    char *encoding,
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
    image_local_var->self = self;
    image_local_var->file = file;
    image_local_var->size = size;
    image_local_var->checksum = checksum;
    image_local_var->encoding = encoding;
    image_local_var->project = project;
    image_local_var->created_at = created_at;
    image_local_var->updated_at = updated_at;

    return image_local_var;
}


void image_free(image_t *image) {
    if(NULL == image){
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
    if (image->self) {
        free(image->self);
        image->self = NULL;
    }
    if (image->file) {
        free(image->file);
        image->file = NULL;
    }
    if (image->encoding) {
        free(image->encoding);
        image->encoding = NULL;
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


    // image->self
    if(image->self) {
    if(cJSON_AddStringToObject(item, "self", image->self) == NULL) {
    goto fail; //String
    }
    }


    // image->file
    if(image->file) {
    if(cJSON_AddStringToObject(item, "file", image->file) == NULL) {
    goto fail; //String
    }
    }


    // image->size
    if(image->size) {
    if(cJSON_AddNumberToObject(item, "size", image->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // image->checksum
    if(image->checksum) {
    if(cJSON_AddNumberToObject(item, "checksum", image->checksum) == NULL) {
    goto fail; //Numeric
    }
    }


    // image->encoding
    if(image->encoding) {
    if(cJSON_AddStringToObject(item, "encoding", image->encoding) == NULL) {
    goto fail; //String
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

    // image->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(imageJSON, "self");
    if (cJSON_IsNull(self)) {
        self = NULL;
    }
    if (self) { 
    if(!cJSON_IsString(self))
    {
    goto end; //String
    }
    }

    // image->file
    cJSON *file = cJSON_GetObjectItemCaseSensitive(imageJSON, "file");
    if (cJSON_IsNull(file)) {
        file = NULL;
    }
    if (file) { 
    if(!cJSON_IsString(file))
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

    // image->checksum
    cJSON *checksum = cJSON_GetObjectItemCaseSensitive(imageJSON, "checksum");
    if (cJSON_IsNull(checksum)) {
        checksum = NULL;
    }
    if (checksum) { 
    if(!cJSON_IsNumber(checksum))
    {
    goto end; //Numeric
    }
    }

    // image->encoding
    cJSON *encoding = cJSON_GetObjectItemCaseSensitive(imageJSON, "encoding");
    if (cJSON_IsNull(encoding)) {
        encoding = NULL;
    }
    if (encoding) { 
    if(!cJSON_IsString(encoding))
    {
    goto end; //String
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


    image_local_var = image_create (
        strdup(status->valuestring),
        id ? strdup(id->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        type ? typeVariable : -1,
        self ? strdup(self->valuestring) : NULL,
        file ? strdup(file->valuestring) : NULL,
        size ? size->valuedouble : 0,
        checksum ? checksum->valuedouble : 0,
        encoding ? strdup(encoding->valuestring) : NULL,
        project ? strdup(project->valuestring) : NULL,
        created_at ? strdup(created_at->valuestring) : NULL,
        updated_at ? strdup(updated_at->valuestring) : NULL
        );

    return image_local_var;
end:
    return NULL;

}
