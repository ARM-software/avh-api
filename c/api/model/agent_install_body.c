#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_install_body.h"



static agent_install_body_t *agent_install_body_create_internal(
    char *path
    ) {
    agent_install_body_t *agent_install_body_local_var = malloc(sizeof(agent_install_body_t));
    if (!agent_install_body_local_var) {
        return NULL;
    }
    agent_install_body_local_var->path = path;

    agent_install_body_local_var->_library_owned = 1;
    return agent_install_body_local_var;
}

__attribute__((deprecated)) agent_install_body_t *agent_install_body_create(
    char *path
    ) {
    return agent_install_body_create_internal (
        path
        );
}

void agent_install_body_free(agent_install_body_t *agent_install_body) {
    if(NULL == agent_install_body){
        return ;
    }
    if(agent_install_body->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_install_body_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_install_body->path) {
        free(agent_install_body->path);
        agent_install_body->path = NULL;
    }
    free(agent_install_body);
}

cJSON *agent_install_body_convertToJSON(agent_install_body_t *agent_install_body) {
    cJSON *item = cJSON_CreateObject();

    // agent_install_body->path
    if(agent_install_body->path) {
    if(cJSON_AddStringToObject(item, "path", agent_install_body->path) == NULL) {
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

agent_install_body_t *agent_install_body_parseFromJSON(cJSON *agent_install_bodyJSON){

    agent_install_body_t *agent_install_body_local_var = NULL;

    // agent_install_body->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(agent_install_bodyJSON, "path");
    if (cJSON_IsNull(path)) {
        path = NULL;
    }
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }


    agent_install_body_local_var = agent_install_body_create_internal (
        path ? strdup(path->valuestring) : NULL
        );

    return agent_install_body_local_var;
end:
    return NULL;

}
