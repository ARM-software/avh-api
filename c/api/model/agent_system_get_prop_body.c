#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_system_get_prop_body.h"



static agent_system_get_prop_body_t *agent_system_get_prop_body_create_internal(
    char *property
    ) {
    agent_system_get_prop_body_t *agent_system_get_prop_body_local_var = malloc(sizeof(agent_system_get_prop_body_t));
    if (!agent_system_get_prop_body_local_var) {
        return NULL;
    }
    agent_system_get_prop_body_local_var->property = property;

    agent_system_get_prop_body_local_var->_library_owned = 1;
    return agent_system_get_prop_body_local_var;
}

__attribute__((deprecated)) agent_system_get_prop_body_t *agent_system_get_prop_body_create(
    char *property
    ) {
    return agent_system_get_prop_body_create_internal (
        property
        );
}

void agent_system_get_prop_body_free(agent_system_get_prop_body_t *agent_system_get_prop_body) {
    if(NULL == agent_system_get_prop_body){
        return ;
    }
    if(agent_system_get_prop_body->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_system_get_prop_body_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_system_get_prop_body->property) {
        free(agent_system_get_prop_body->property);
        agent_system_get_prop_body->property = NULL;
    }
    free(agent_system_get_prop_body);
}

cJSON *agent_system_get_prop_body_convertToJSON(agent_system_get_prop_body_t *agent_system_get_prop_body) {
    cJSON *item = cJSON_CreateObject();

    // agent_system_get_prop_body->property
    if (!agent_system_get_prop_body->property) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "property", agent_system_get_prop_body->property) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_system_get_prop_body_t *agent_system_get_prop_body_parseFromJSON(cJSON *agent_system_get_prop_bodyJSON){

    agent_system_get_prop_body_t *agent_system_get_prop_body_local_var = NULL;

    // agent_system_get_prop_body->property
    cJSON *property = cJSON_GetObjectItemCaseSensitive(agent_system_get_prop_bodyJSON, "property");
    if (cJSON_IsNull(property)) {
        property = NULL;
    }
    if (!property) {
        goto end;
    }

    
    if(!cJSON_IsString(property))
    {
    goto end; //String
    }


    agent_system_get_prop_body_local_var = agent_system_get_prop_body_create_internal (
        strdup(property->valuestring)
        );

    return agent_system_get_prop_body_local_var;
end:
    return NULL;

}
