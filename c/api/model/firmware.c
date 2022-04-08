#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "firmware.h"



firmware_t *firmware_create(
    char *version,
    char *buildid,
    char *android_flavor,
    char *api_version,
    char *sha256sum,
    char *sha1sum,
    char *md5sum,
    int size,
    char *unique_id,
    object_t *metadata,
    char *releasedate,
    char *uploaddate,
    char *url,
    char *orig_url,
    char *filename
    ) {
    firmware_t *firmware_local_var = malloc(sizeof(firmware_t));
    if (!firmware_local_var) {
        return NULL;
    }
    firmware_local_var->version = version;
    firmware_local_var->buildid = buildid;
    firmware_local_var->android_flavor = android_flavor;
    firmware_local_var->api_version = api_version;
    firmware_local_var->sha256sum = sha256sum;
    firmware_local_var->sha1sum = sha1sum;
    firmware_local_var->md5sum = md5sum;
    firmware_local_var->size = size;
    firmware_local_var->unique_id = unique_id;
    firmware_local_var->metadata = metadata;
    firmware_local_var->releasedate = releasedate;
    firmware_local_var->uploaddate = uploaddate;
    firmware_local_var->url = url;
    firmware_local_var->orig_url = orig_url;
    firmware_local_var->filename = filename;

    return firmware_local_var;
}


void firmware_free(firmware_t *firmware) {
    if(NULL == firmware){
        return ;
    }
    listEntry_t *listEntry;
    if (firmware->version) {
        free(firmware->version);
        firmware->version = NULL;
    }
    if (firmware->buildid) {
        free(firmware->buildid);
        firmware->buildid = NULL;
    }
    if (firmware->android_flavor) {
        free(firmware->android_flavor);
        firmware->android_flavor = NULL;
    }
    if (firmware->api_version) {
        free(firmware->api_version);
        firmware->api_version = NULL;
    }
    if (firmware->sha256sum) {
        free(firmware->sha256sum);
        firmware->sha256sum = NULL;
    }
    if (firmware->sha1sum) {
        free(firmware->sha1sum);
        firmware->sha1sum = NULL;
    }
    if (firmware->md5sum) {
        free(firmware->md5sum);
        firmware->md5sum = NULL;
    }
    if (firmware->unique_id) {
        free(firmware->unique_id);
        firmware->unique_id = NULL;
    }
    if (firmware->metadata) {
        object_free(firmware->metadata);
        firmware->metadata = NULL;
    }
    if (firmware->releasedate) {
        free(firmware->releasedate);
        firmware->releasedate = NULL;
    }
    if (firmware->uploaddate) {
        free(firmware->uploaddate);
        firmware->uploaddate = NULL;
    }
    if (firmware->url) {
        free(firmware->url);
        firmware->url = NULL;
    }
    if (firmware->orig_url) {
        free(firmware->orig_url);
        firmware->orig_url = NULL;
    }
    if (firmware->filename) {
        free(firmware->filename);
        firmware->filename = NULL;
    }
    free(firmware);
}

cJSON *firmware_convertToJSON(firmware_t *firmware) {
    cJSON *item = cJSON_CreateObject();

    // firmware->version
    if(firmware->version) { 
    if(cJSON_AddStringToObject(item, "version", firmware->version) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->buildid
    if(firmware->buildid) { 
    if(cJSON_AddStringToObject(item, "buildid", firmware->buildid) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->android_flavor
    if(firmware->android_flavor) { 
    if(cJSON_AddStringToObject(item, "AndroidFlavor", firmware->android_flavor) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->api_version
    if(firmware->api_version) { 
    if(cJSON_AddStringToObject(item, "APIVersion", firmware->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->sha256sum
    if(firmware->sha256sum) { 
    if(cJSON_AddStringToObject(item, "sha256sum", firmware->sha256sum) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->sha1sum
    if(firmware->sha1sum) { 
    if(cJSON_AddStringToObject(item, "sha1sum", firmware->sha1sum) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->md5sum
    if(firmware->md5sum) { 
    if(cJSON_AddStringToObject(item, "md5sum", firmware->md5sum) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->size
    if(firmware->size) { 
    if(cJSON_AddNumberToObject(item, "size", firmware->size) == NULL) {
    goto fail; //Numeric
    }
     } 


    // firmware->unique_id
    if(firmware->unique_id) { 
    if(cJSON_AddStringToObject(item, "uniqueId", firmware->unique_id) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->metadata
    if(firmware->metadata) { 
    cJSON *metadata_object = object_convertToJSON(firmware->metadata);
    if(metadata_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // firmware->releasedate
    if(firmware->releasedate) { 
    if(cJSON_AddStringToObject(item, "releasedate", firmware->releasedate) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // firmware->uploaddate
    if(firmware->uploaddate) { 
    if(cJSON_AddStringToObject(item, "uploaddate", firmware->uploaddate) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // firmware->url
    if(firmware->url) { 
    if(cJSON_AddStringToObject(item, "url", firmware->url) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->orig_url
    if(firmware->orig_url) { 
    if(cJSON_AddStringToObject(item, "orig_url", firmware->orig_url) == NULL) {
    goto fail; //String
    }
     } 


    // firmware->filename
    if(firmware->filename) { 
    if(cJSON_AddStringToObject(item, "filename", firmware->filename) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

firmware_t *firmware_parseFromJSON(cJSON *firmwareJSON){

    firmware_t *firmware_local_var = NULL;

    // firmware->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }
    }

    // firmware->buildid
    cJSON *buildid = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "buildid");
    if (buildid) { 
    if(!cJSON_IsString(buildid))
    {
    goto end; //String
    }
    }

    // firmware->android_flavor
    cJSON *android_flavor = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "AndroidFlavor");
    if (android_flavor) { 
    if(!cJSON_IsString(android_flavor))
    {
    goto end; //String
    }
    }

    // firmware->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "APIVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // firmware->sha256sum
    cJSON *sha256sum = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "sha256sum");
    if (sha256sum) { 
    if(!cJSON_IsString(sha256sum))
    {
    goto end; //String
    }
    }

    // firmware->sha1sum
    cJSON *sha1sum = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "sha1sum");
    if (sha1sum) { 
    if(!cJSON_IsString(sha1sum))
    {
    goto end; //String
    }
    }

    // firmware->md5sum
    cJSON *md5sum = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "md5sum");
    if (md5sum) { 
    if(!cJSON_IsString(md5sum))
    {
    goto end; //String
    }
    }

    // firmware->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "size");
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }

    // firmware->unique_id
    cJSON *unique_id = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "uniqueId");
    if (unique_id) { 
    if(!cJSON_IsString(unique_id))
    {
    goto end; //String
    }
    }

    // firmware->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "metadata");
    object_t *metadata_local_object = NULL;
    if (metadata) { 
    metadata_local_object = object_parseFromJSON(metadata); //object
    }

    // firmware->releasedate
    cJSON *releasedate = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "releasedate");
    if (releasedate) { 
    if(!cJSON_IsString(releasedate))
    {
    goto end; //DateTime
    }
    }

    // firmware->uploaddate
    cJSON *uploaddate = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "uploaddate");
    if (uploaddate) { 
    if(!cJSON_IsString(uploaddate))
    {
    goto end; //DateTime
    }
    }

    // firmware->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // firmware->orig_url
    cJSON *orig_url = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "orig_url");
    if (orig_url) { 
    if(!cJSON_IsString(orig_url))
    {
    goto end; //String
    }
    }

    // firmware->filename
    cJSON *filename = cJSON_GetObjectItemCaseSensitive(firmwareJSON, "filename");
    if (filename) { 
    if(!cJSON_IsString(filename))
    {
    goto end; //String
    }
    }


    firmware_local_var = firmware_create (
        version ? strdup(version->valuestring) : NULL,
        buildid ? strdup(buildid->valuestring) : NULL,
        android_flavor ? strdup(android_flavor->valuestring) : NULL,
        api_version ? strdup(api_version->valuestring) : NULL,
        sha256sum ? strdup(sha256sum->valuestring) : NULL,
        sha1sum ? strdup(sha1sum->valuestring) : NULL,
        md5sum ? strdup(md5sum->valuestring) : NULL,
        size ? size->valuedouble : 0,
        unique_id ? strdup(unique_id->valuestring) : NULL,
        metadata ? metadata_local_object : NULL,
        releasedate ? strdup(releasedate->valuestring) : NULL,
        uploaddate ? strdup(uploaddate->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL,
        orig_url ? strdup(orig_url->valuestring) : NULL,
        filename ? strdup(filename->valuestring) : NULL
        );

    return firmware_local_var;
end:
    return NULL;

}
