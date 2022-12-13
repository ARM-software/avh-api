#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "team.h"



static team_t *team_create_internal(
    char *id,
    char *label,
    list_t *users
    ) {
    team_t *team_local_var = malloc(sizeof(team_t));
    if (!team_local_var) {
        return NULL;
    }
    team_local_var->id = id;
    team_local_var->label = label;
    team_local_var->users = users;

    team_local_var->_library_owned = 1;
    return team_local_var;
}

__attribute__((deprecated)) team_t *team_create(
    char *id,
    char *label,
    list_t *users
    ) {
    return team_create_internal (
        id,
        label,
        users
        );
}

void team_free(team_t *team) {
    if(NULL == team){
        return ;
    }
    if(team->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "team_free");
        return ;
    }
    listEntry_t *listEntry;
    if (team->id) {
        free(team->id);
        team->id = NULL;
    }
    if (team->label) {
        free(team->label);
        team->label = NULL;
    }
    if (team->users) {
        list_ForEach(listEntry, team->users) {
            user_free(listEntry->data);
        }
        list_freeList(team->users);
        team->users = NULL;
    }
    free(team);
}

cJSON *team_convertToJSON(team_t *team) {
    cJSON *item = cJSON_CreateObject();

    // team->id
    if (!team->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", team->id) == NULL) {
    goto fail; //String
    }


    // team->label
    if (!team->label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "label", team->label) == NULL) {
    goto fail; //String
    }


    // team->users
    if(team->users) {
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (team->users) {
    list_ForEach(usersListEntry, team->users) {
    cJSON *itemLocal = user_convertToJSON(usersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(users, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

team_t *team_parseFromJSON(cJSON *teamJSON){

    team_t *team_local_var = NULL;

    // define the local list for team->users
    list_t *usersList = NULL;

    // team->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(teamJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // team->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(teamJSON, "label");
    if (cJSON_IsNull(label)) {
        label = NULL;
    }
    if (!label) {
        goto end;
    }

    
    if(!cJSON_IsString(label))
    {
    goto end; //String
    }

    // team->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(teamJSON, "users");
    if (cJSON_IsNull(users)) {
        users = NULL;
    }
    if (users) { 
    cJSON *users_local_nonprimitive = NULL;
    if(!cJSON_IsArray(users)){
        goto end; //nonprimitive container
    }

    usersList = list_createList();

    cJSON_ArrayForEach(users_local_nonprimitive,users )
    {
        if(!cJSON_IsObject(users_local_nonprimitive)){
            goto end;
        }
        user_t *usersItem = user_parseFromJSON(users_local_nonprimitive);

        list_addElement(usersList, usersItem);
    }
    }


    team_local_var = team_create_internal (
        strdup(id->valuestring),
        strdup(label->valuestring),
        users ? usersList : NULL
        );

    return team_local_var;
end:
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            user_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    return NULL;

}
