#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_team.h"



static create_team_t *create_team_create_internal(
    char *name
    ) {
    create_team_t *create_team_local_var = malloc(sizeof(create_team_t));
    if (!create_team_local_var) {
        return NULL;
    }
    create_team_local_var->name = name;

    create_team_local_var->_library_owned = 1;
    return create_team_local_var;
}

__attribute__((deprecated)) create_team_t *create_team_create(
    char *name
    ) {
    return create_team_create_internal (
        name
        );
}

void create_team_free(create_team_t *create_team) {
    if(NULL == create_team){
        return ;
    }
    if(create_team->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "create_team_free");
        return ;
    }
    listEntry_t *listEntry;
    if (create_team->name) {
        free(create_team->name);
        create_team->name = NULL;
    }
    free(create_team);
}

cJSON *create_team_convertToJSON(create_team_t *create_team) {
    cJSON *item = cJSON_CreateObject();

    // create_team->name
    if (!create_team->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", create_team->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

create_team_t *create_team_parseFromJSON(cJSON *create_teamJSON){

    create_team_t *create_team_local_var = NULL;

    // create_team->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(create_teamJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    create_team_local_var = create_team_create_internal (
        strdup(name->valuestring)
        );

    return create_team_local_var;
end:
    return NULL;

}
