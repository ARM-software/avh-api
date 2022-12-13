#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "role.h"


char* rolerole_ToString(arm_api_role_ROLE_e role) {
    char* roleArray[] =  { "NULL", "admin", "_member_" };
	return roleArray[role];
}

arm_api_role_ROLE_e rolerole_FromString(char* role){
    int stringToReturn = 0;
    char *roleArray[] =  { "NULL", "admin", "_member_" };
    size_t sizeofArray = sizeof(roleArray) / sizeof(roleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(role, roleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static role_t *role_create_internal(
    arm_api_role_ROLE_e role,
    char *project,
    char *user
    ) {
    role_t *role_local_var = malloc(sizeof(role_t));
    if (!role_local_var) {
        return NULL;
    }
    role_local_var->role = role;
    role_local_var->project = project;
    role_local_var->user = user;

    role_local_var->_library_owned = 1;
    return role_local_var;
}

__attribute__((deprecated)) role_t *role_create(
    arm_api_role_ROLE_e role,
    char *project,
    char *user
    ) {
    return role_create_internal (
        role,
        project,
        user
        );
}

void role_free(role_t *role) {
    if(NULL == role){
        return ;
    }
    if(role->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "role_free");
        return ;
    }
    listEntry_t *listEntry;
    if (role->project) {
        free(role->project);
        role->project = NULL;
    }
    if (role->user) {
        free(role->user);
        role->user = NULL;
    }
    free(role);
}

cJSON *role_convertToJSON(role_t *role) {
    cJSON *item = cJSON_CreateObject();

    // role->role
    if (arm_api_role_ROLE_NULL == role->role) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "role", rolerole_ToString(role->role)) == NULL)
    {
    goto fail; //Enum
    }


    // role->project
    if (!role->project) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "project", role->project) == NULL) {
    goto fail; //String
    }


    // role->user
    if (!role->user) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "user", role->user) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

role_t *role_parseFromJSON(cJSON *roleJSON){

    role_t *role_local_var = NULL;

    // role->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(roleJSON, "role");
    if (cJSON_IsNull(role)) {
        role = NULL;
    }
    if (!role) {
        goto end;
    }

    arm_api_role_ROLE_e roleVariable;
    
    if(!cJSON_IsString(role))
    {
    goto end; //Enum
    }
    roleVariable = rolerole_FromString(role->valuestring);

    // role->project
    cJSON *project = cJSON_GetObjectItemCaseSensitive(roleJSON, "project");
    if (cJSON_IsNull(project)) {
        project = NULL;
    }
    if (!project) {
        goto end;
    }

    
    if(!cJSON_IsString(project))
    {
    goto end; //String
    }

    // role->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(roleJSON, "user");
    if (cJSON_IsNull(user)) {
        user = NULL;
    }
    if (!user) {
        goto end;
    }

    
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }


    role_local_var = role_create_internal (
        roleVariable,
        strdup(project->valuestring),
        strdup(user->valuestring)
        );

    return role_local_var;
end:
    return NULL;

}
