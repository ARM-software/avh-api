#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_error.h"


char* error_idagent_error_ToString(arm_api_agent_error_ERRORID_e error_id) {
    char* error_idArray[] =  { "NULL", "AgentError" };
	return error_idArray[error_id];
}

arm_api_agent_error_ERRORID_e error_idagent_error_FromString(char* error_id){
    int stringToReturn = 0;
    char *error_idArray[] =  { "NULL", "AgentError" };
    size_t sizeofArray = sizeof(error_idArray) / sizeof(error_idArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(error_id, error_idArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static agent_error_t *agent_error_create_internal(
    char *error,
    arm_api_agent_error_ERRORID_e error_id,
    object_t *original_error
    ) {
    agent_error_t *agent_error_local_var = malloc(sizeof(agent_error_t));
    if (!agent_error_local_var) {
        return NULL;
    }
    agent_error_local_var->error = error;
    agent_error_local_var->error_id = error_id;
    agent_error_local_var->original_error = original_error;

    agent_error_local_var->_library_owned = 1;
    return agent_error_local_var;
}

__attribute__((deprecated)) agent_error_t *agent_error_create(
    char *error,
    arm_api_agent_error_ERRORID_e error_id,
    object_t *original_error
    ) {
    return agent_error_create_internal (
        error,
        error_id,
        original_error
        );
}

void agent_error_free(agent_error_t *agent_error) {
    if(NULL == agent_error){
        return ;
    }
    if(agent_error->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_error_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_error->error) {
        free(agent_error->error);
        agent_error->error = NULL;
    }
    if (agent_error->original_error) {
        object_free(agent_error->original_error);
        agent_error->original_error = NULL;
    }
    free(agent_error);
}

cJSON *agent_error_convertToJSON(agent_error_t *agent_error) {
    cJSON *item = cJSON_CreateObject();

    // agent_error->error
    if (!agent_error->error) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "error", agent_error->error) == NULL) {
    goto fail; //String
    }


    // agent_error->error_id
    if (arm_api_agent_error_ERRORID_NULL == agent_error->error_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "errorID", error_idagent_error_ToString(agent_error->error_id)) == NULL)
    {
    goto fail; //Enum
    }


    // agent_error->original_error
    if(agent_error->original_error) {
    cJSON *original_error_object = object_convertToJSON(agent_error->original_error);
    if(original_error_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "originalError", original_error_object);
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

agent_error_t *agent_error_parseFromJSON(cJSON *agent_errorJSON){

    agent_error_t *agent_error_local_var = NULL;

    // agent_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(agent_errorJSON, "error");
    if (cJSON_IsNull(error)) {
        error = NULL;
    }
    if (!error) {
        goto end;
    }

    
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }

    // agent_error->error_id
    cJSON *error_id = cJSON_GetObjectItemCaseSensitive(agent_errorJSON, "errorID");
    if (cJSON_IsNull(error_id)) {
        error_id = NULL;
    }
    if (!error_id) {
        goto end;
    }

    arm_api_agent_error_ERRORID_e error_idVariable;
    
    if(!cJSON_IsString(error_id))
    {
    goto end; //Enum
    }
    error_idVariable = error_idagent_error_FromString(error_id->valuestring);

    // agent_error->original_error
    cJSON *original_error = cJSON_GetObjectItemCaseSensitive(agent_errorJSON, "originalError");
    if (cJSON_IsNull(original_error)) {
        original_error = NULL;
    }
    object_t *original_error_local_object = NULL;
    if (original_error) { 
    original_error_local_object = object_parseFromJSON(original_error); //object
    }


    agent_error_local_var = agent_error_create_internal (
        strdup(error->valuestring),
        error_idVariable,
        original_error ? original_error_local_object : NULL
        );

    return agent_error_local_var;
end:
    return NULL;

}
