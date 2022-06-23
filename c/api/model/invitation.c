#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invitation.h"



static invitation_t *invitation_create_internal(
    char *identifier,
    char *email,
    object_t *settings
    ) {
    invitation_t *invitation_local_var = malloc(sizeof(invitation_t));
    if (!invitation_local_var) {
        return NULL;
    }
    invitation_local_var->identifier = identifier;
    invitation_local_var->email = email;
    invitation_local_var->settings = settings;

    invitation_local_var->_library_owned = 1;
    return invitation_local_var;
}

__attribute__((deprecated)) invitation_t *invitation_create(
    char *identifier,
    char *email,
    object_t *settings
    ) {
    return invitation_create_internal (
        identifier,
        email,
        settings
        );
}

void invitation_free(invitation_t *invitation) {
    if(NULL == invitation){
        return ;
    }
    if(invitation->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invitation_free");
        return ;
    }
    listEntry_t *listEntry;
    if (invitation->identifier) {
        free(invitation->identifier);
        invitation->identifier = NULL;
    }
    if (invitation->email) {
        free(invitation->email);
        invitation->email = NULL;
    }
    if (invitation->settings) {
        object_free(invitation->settings);
        invitation->settings = NULL;
    }
    free(invitation);
}

cJSON *invitation_convertToJSON(invitation_t *invitation) {
    cJSON *item = cJSON_CreateObject();

    // invitation->identifier
    if(invitation->identifier) {
    if(cJSON_AddStringToObject(item, "identifier", invitation->identifier) == NULL) {
    goto fail; //String
    }
    }


    // invitation->email
    if(invitation->email) {
    if(cJSON_AddStringToObject(item, "email", invitation->email) == NULL) {
    goto fail; //String
    }
    }


    // invitation->settings
    if(invitation->settings) {
    cJSON *settings_object = object_convertToJSON(invitation->settings);
    if(settings_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "settings", settings_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invitation_t *invitation_parseFromJSON(cJSON *invitationJSON){

    invitation_t *invitation_local_var = NULL;

    // invitation->identifier
    cJSON *identifier = cJSON_GetObjectItemCaseSensitive(invitationJSON, "identifier");
    if (cJSON_IsNull(identifier)) {
        identifier = NULL;
    }
    if (identifier) { 
    if(!cJSON_IsString(identifier))
    {
    goto end; //String
    }
    }

    // invitation->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(invitationJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email))
    {
    goto end; //String
    }
    }

    // invitation->settings
    cJSON *settings = cJSON_GetObjectItemCaseSensitive(invitationJSON, "settings");
    if (cJSON_IsNull(settings)) {
        settings = NULL;
    }
    object_t *settings_local_object = NULL;
    if (settings) { 
    settings_local_object = object_parseFromJSON(settings); //object
    }


    invitation_local_var = invitation_create_internal (
        identifier ? strdup(identifier->valuestring) : NULL,
        email ? strdup(email->valuestring) : NULL,
        settings ? settings_local_object : NULL
        );

    return invitation_local_var;
end:
    return NULL;

}
