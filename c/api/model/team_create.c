#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "team_create.h"



static team_create_t *team_create_create_internal(
    char *id
    ) {
    team_create_t *team_create_local_var = malloc(sizeof(team_create_t));
    if (!team_create_local_var) {
        return NULL;
    }
    team_create_local_var->id = id;

    team_create_local_var->_library_owned = 1;
    return team_create_local_var;
}

__attribute__((deprecated)) team_create_t *team_create_create(
    char *id
    ) {
    return team_create_create_internal (
        id
        );
}

void team_create_free(team_create_t *team_create) {
    if(NULL == team_create){
        return ;
    }
    if(team_create->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "team_create_free");
        return ;
    }
    listEntry_t *listEntry;
    if (team_create->id) {
        free(team_create->id);
        team_create->id = NULL;
    }
    free(team_create);
}

cJSON *team_create_convertToJSON(team_create_t *team_create) {
    cJSON *item = cJSON_CreateObject();

    // team_create->id
    if(team_create->id) {
    if(cJSON_AddStringToObject(item, "id", team_create->id) == NULL) {
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

team_create_t *team_create_parseFromJSON(cJSON *team_createJSON){

    team_create_t *team_create_local_var = NULL;

    // team_create->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(team_createJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }


    team_create_local_var = team_create_create_internal (
        id ? strdup(id->valuestring) : NULL
        );

    return team_create_local_var;
end:
    return NULL;

}
