#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_icons.h"



static agent_icons_t *agent_icons_create_internal(
    char *icon
    ) {
    agent_icons_t *agent_icons_local_var = malloc(sizeof(agent_icons_t));
    if (!agent_icons_local_var) {
        return NULL;
    }
    agent_icons_local_var->icon = icon;

    agent_icons_local_var->_library_owned = 1;
    return agent_icons_local_var;
}

__attribute__((deprecated)) agent_icons_t *agent_icons_create(
    char *icon
    ) {
    return agent_icons_create_internal (
        icon
        );
}

void agent_icons_free(agent_icons_t *agent_icons) {
    if(NULL == agent_icons){
        return ;
    }
    if(agent_icons->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_icons_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_icons->icon) {
        free(agent_icons->icon);
        agent_icons->icon = NULL;
    }
    free(agent_icons);
}

cJSON *agent_icons_convertToJSON(agent_icons_t *agent_icons) {
    cJSON *item = cJSON_CreateObject();

    // agent_icons->icon
    if(agent_icons->icon) {
    if(cJSON_AddStringToObject(item, "icon", agent_icons->icon) == NULL) {
    goto fail; //ByteArray
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_icons_t *agent_icons_parseFromJSON(cJSON *agent_iconsJSON){

    agent_icons_t *agent_icons_local_var = NULL;

    // agent_icons->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(agent_iconsJSON, "icon");
    if (cJSON_IsNull(icon)) {
        icon = NULL;
    }
    if (icon) { 
    if(!cJSON_IsString(icon))
    {
    goto end; //ByteArray
    }
    }


    agent_icons_local_var = agent_icons_create_internal (
        icon ? strdup(icon->valuestring) : NULL
        );

    return agent_icons_local_var;
end:
    return NULL;

}
