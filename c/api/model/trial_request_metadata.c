#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trial_request_metadata.h"



static trial_request_metadata_t *trial_request_metadata_create_internal(
    char *name,
    char *company,
    int malware,
    int research,
    int pentest,
    char *other
    ) {
    trial_request_metadata_t *trial_request_metadata_local_var = malloc(sizeof(trial_request_metadata_t));
    if (!trial_request_metadata_local_var) {
        return NULL;
    }
    trial_request_metadata_local_var->name = name;
    trial_request_metadata_local_var->company = company;
    trial_request_metadata_local_var->malware = malware;
    trial_request_metadata_local_var->research = research;
    trial_request_metadata_local_var->pentest = pentest;
    trial_request_metadata_local_var->other = other;

    trial_request_metadata_local_var->_library_owned = 1;
    return trial_request_metadata_local_var;
}

__attribute__((deprecated)) trial_request_metadata_t *trial_request_metadata_create(
    char *name,
    char *company,
    int malware,
    int research,
    int pentest,
    char *other
    ) {
    return trial_request_metadata_create_internal (
        name,
        company,
        malware,
        research,
        pentest,
        other
        );
}

void trial_request_metadata_free(trial_request_metadata_t *trial_request_metadata) {
    if(NULL == trial_request_metadata){
        return ;
    }
    if(trial_request_metadata->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "trial_request_metadata_free");
        return ;
    }
    listEntry_t *listEntry;
    if (trial_request_metadata->name) {
        free(trial_request_metadata->name);
        trial_request_metadata->name = NULL;
    }
    if (trial_request_metadata->company) {
        free(trial_request_metadata->company);
        trial_request_metadata->company = NULL;
    }
    if (trial_request_metadata->other) {
        free(trial_request_metadata->other);
        trial_request_metadata->other = NULL;
    }
    free(trial_request_metadata);
}

cJSON *trial_request_metadata_convertToJSON(trial_request_metadata_t *trial_request_metadata) {
    cJSON *item = cJSON_CreateObject();

    // trial_request_metadata->name
    if(trial_request_metadata->name) {
    if(cJSON_AddStringToObject(item, "name", trial_request_metadata->name) == NULL) {
    goto fail; //String
    }
    }


    // trial_request_metadata->company
    if(trial_request_metadata->company) {
    if(cJSON_AddStringToObject(item, "company", trial_request_metadata->company) == NULL) {
    goto fail; //String
    }
    }


    // trial_request_metadata->malware
    if(trial_request_metadata->malware) {
    if(cJSON_AddBoolToObject(item, "malware", trial_request_metadata->malware) == NULL) {
    goto fail; //Bool
    }
    }


    // trial_request_metadata->research
    if(trial_request_metadata->research) {
    if(cJSON_AddBoolToObject(item, "research", trial_request_metadata->research) == NULL) {
    goto fail; //Bool
    }
    }


    // trial_request_metadata->pentest
    if(trial_request_metadata->pentest) {
    if(cJSON_AddBoolToObject(item, "pentest", trial_request_metadata->pentest) == NULL) {
    goto fail; //Bool
    }
    }


    // trial_request_metadata->other
    if(trial_request_metadata->other) {
    if(cJSON_AddStringToObject(item, "other", trial_request_metadata->other) == NULL) {
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

trial_request_metadata_t *trial_request_metadata_parseFromJSON(cJSON *trial_request_metadataJSON){

    trial_request_metadata_t *trial_request_metadata_local_var = NULL;

    // trial_request_metadata->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(trial_request_metadataJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // trial_request_metadata->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(trial_request_metadataJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company))
    {
    goto end; //String
    }
    }

    // trial_request_metadata->malware
    cJSON *malware = cJSON_GetObjectItemCaseSensitive(trial_request_metadataJSON, "malware");
    if (cJSON_IsNull(malware)) {
        malware = NULL;
    }
    if (malware) { 
    if(!cJSON_IsBool(malware))
    {
    goto end; //Bool
    }
    }

    // trial_request_metadata->research
    cJSON *research = cJSON_GetObjectItemCaseSensitive(trial_request_metadataJSON, "research");
    if (cJSON_IsNull(research)) {
        research = NULL;
    }
    if (research) { 
    if(!cJSON_IsBool(research))
    {
    goto end; //Bool
    }
    }

    // trial_request_metadata->pentest
    cJSON *pentest = cJSON_GetObjectItemCaseSensitive(trial_request_metadataJSON, "pentest");
    if (cJSON_IsNull(pentest)) {
        pentest = NULL;
    }
    if (pentest) { 
    if(!cJSON_IsBool(pentest))
    {
    goto end; //Bool
    }
    }

    // trial_request_metadata->other
    cJSON *other = cJSON_GetObjectItemCaseSensitive(trial_request_metadataJSON, "other");
    if (cJSON_IsNull(other)) {
        other = NULL;
    }
    if (other) { 
    if(!cJSON_IsString(other))
    {
    goto end; //String
    }
    }


    trial_request_metadata_local_var = trial_request_metadata_create_internal (
        name ? strdup(name->valuestring) : NULL,
        company ? strdup(company->valuestring) : NULL,
        malware ? malware->valueint : 0,
        research ? research->valueint : 0,
        pentest ? pentest->valueint : 0,
        other ? strdup(other->valuestring) : NULL
        );

    return trial_request_metadata_local_var;
end:
    return NULL;

}
