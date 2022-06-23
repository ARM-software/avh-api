#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_value_return.h"



static agent_value_return_t *agent_value_return_create_internal(
    char *value
    ) {
    agent_value_return_t *agent_value_return_local_var = malloc(sizeof(agent_value_return_t));
    if (!agent_value_return_local_var) {
        return NULL;
    }
    agent_value_return_local_var->value = value;

    agent_value_return_local_var->_library_owned = 1;
    return agent_value_return_local_var;
}

__attribute__((deprecated)) agent_value_return_t *agent_value_return_create(
    char *value
    ) {
    return agent_value_return_create_internal (
        value
        );
}

void agent_value_return_free(agent_value_return_t *agent_value_return) {
    if(NULL == agent_value_return){
        return ;
    }
    if(agent_value_return->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_value_return_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_value_return->value) {
        free(agent_value_return->value);
        agent_value_return->value = NULL;
    }
    free(agent_value_return);
}

cJSON *agent_value_return_convertToJSON(agent_value_return_t *agent_value_return) {
    cJSON *item = cJSON_CreateObject();

    // agent_value_return->value
    if(agent_value_return->value) {
    if(cJSON_AddStringToObject(item, "value", agent_value_return->value) == NULL) {
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

agent_value_return_t *agent_value_return_parseFromJSON(cJSON *agent_value_returnJSON){

    agent_value_return_t *agent_value_return_local_var = NULL;

    // agent_value_return->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(agent_value_returnJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    agent_value_return_local_var = agent_value_return_create_internal (
        value ? strdup(value->valuestring) : NULL
        );

    return agent_value_return_local_var;
end:
    return NULL;

}
