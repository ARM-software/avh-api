#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ArmAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum ENCODING for ArmAPI_v1CreateImage

static char* v1CreateImage_ENCODING_ToString(arm_api_v1CreateImage_encoding_e ENCODING){
    char *ENCODINGArray[] =  { "NULL", "plain" };
    return ENCODINGArray[ENCODING];
}

static arm_api_v1CreateImage_encoding_e v1CreateImage_ENCODING_FromString(char* ENCODING){
    int stringToReturn = 0;
    char *ENCODINGArray[] =  { "NULL", "plain" };
    size_t sizeofArray = sizeof(ENCODINGArray) / sizeof(ENCODINGArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ENCODING, ENCODINGArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function v1CreateImage_ENCODING_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *v1CreateImage_ENCODING_convertToJSON(arm_api_v1CreateImage_encoding_e ENCODING) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "encoding", v1CreateImage_ENCODING_ToString(ENCODING)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function v1CreateImage_ENCODING_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static arm_api_v1CreateImage_encoding_e v1CreateImage_ENCODING_parseFromJSON(cJSON* ENCODINGJSON) {
    arm_api_v1CreateImage_encoding_e ENCODINGVariable = 0;
    cJSON *ENCODINGVar = cJSON_GetObjectItemCaseSensitive(ENCODINGJSON, "encoding");
    if(!cJSON_IsString(ENCODINGVar) || (ENCODINGVar->valuestring == NULL))
    {
        goto end;
    }
    ENCODINGVariable = v1CreateImage_ENCODING_FromString(ENCODINGVar->valuestring);
    return ENCODINGVariable;
end:
    return 0;
}
*/

// Functions for enum SORT for ArmAPI_v1GetHooks

static char* v1GetHooks_SORT_ToString(arm_api_v1GetHooks_sort_e SORT){
    char *SORTArray[] =  { "NULL", "ASC", "DESC" };
    return SORTArray[SORT];
}

static arm_api_v1GetHooks_sort_e v1GetHooks_SORT_FromString(char* SORT){
    int stringToReturn = 0;
    char *SORTArray[] =  { "NULL", "ASC", "DESC" };
    size_t sizeofArray = sizeof(SORTArray) / sizeof(SORTArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(SORT, SORTArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function v1GetHooks_SORT_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *v1GetHooks_SORT_convertToJSON(arm_api_v1GetHooks_sort_e SORT) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sort", v1GetHooks_SORT_ToString(SORT)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function v1GetHooks_SORT_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static arm_api_v1GetHooks_sort_e v1GetHooks_SORT_parseFromJSON(cJSON* SORTJSON) {
    arm_api_v1GetHooks_sort_e SORTVariable = 0;
    cJSON *SORTVar = cJSON_GetObjectItemCaseSensitive(SORTJSON, "sort");
    if(!cJSON_IsString(SORTVar) || (SORTVar->valuestring == NULL))
    {
        goto end;
    }
    SORTVariable = v1GetHooks_SORT_FromString(SORTVar->valuestring);
    return SORTVariable;
end:
    return 0;
}
*/

// Functions for enum FORMAT for ArmAPI_v1GetInstanceScreenshot

static char* v1GetInstanceScreenshot_FORMAT_ToString(arm_api_v1GetInstanceScreenshot_format_e FORMAT){
    char *FORMATArray[] =  { "NULL", "png", "jpeg" };
    return FORMATArray[FORMAT];
}

static arm_api_v1GetInstanceScreenshot_format_e v1GetInstanceScreenshot_FORMAT_FromString(char* FORMAT){
    int stringToReturn = 0;
    char *FORMATArray[] =  { "NULL", "png", "jpeg" };
    size_t sizeofArray = sizeof(FORMATArray) / sizeof(FORMATArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(FORMAT, FORMATArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function v1GetInstanceScreenshot_FORMAT_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *v1GetInstanceScreenshot_FORMAT_convertToJSON(arm_api_v1GetInstanceScreenshot_format_e FORMAT) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "format", v1GetInstanceScreenshot_FORMAT_ToString(FORMAT)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function v1GetInstanceScreenshot_FORMAT_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static arm_api_v1GetInstanceScreenshot_format_e v1GetInstanceScreenshot_FORMAT_parseFromJSON(cJSON* FORMATJSON) {
    arm_api_v1GetInstanceScreenshot_format_e FORMATVariable = 0;
    cJSON *FORMATVar = cJSON_GetObjectItemCaseSensitive(FORMATJSON, "format");
    if(!cJSON_IsString(FORMATVar) || (FORMATVar->valuestring == NULL))
    {
        goto end;
    }
    FORMATVariable = v1GetInstanceScreenshot_FORMAT_FromString(FORMATVar->valuestring);
    return FORMATVariable;
end:
    return 0;
}
*/

// Functions for enum FORMAT for ArmAPI_v1GetProjectVpnConfig

static char* v1GetProjectVpnConfig_FORMAT_ToString(arm_api_v1GetProjectVpnConfig_format_e FORMAT){
    char *FORMATArray[] =  { "NULL", "ovpn" };
    return FORMATArray[FORMAT];
}

static arm_api_v1GetProjectVpnConfig_format_e v1GetProjectVpnConfig_FORMAT_FromString(char* FORMAT){
    int stringToReturn = 0;
    char *FORMATArray[] =  { "NULL", "ovpn" };
    size_t sizeofArray = sizeof(FORMATArray) / sizeof(FORMATArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(FORMAT, FORMATArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function v1GetProjectVpnConfig_FORMAT_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *v1GetProjectVpnConfig_FORMAT_convertToJSON(arm_api_v1GetProjectVpnConfig_format_e FORMAT) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "format", v1GetProjectVpnConfig_FORMAT_ToString(FORMAT)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function v1GetProjectVpnConfig_FORMAT_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static arm_api_v1GetProjectVpnConfig_format_e v1GetProjectVpnConfig_FORMAT_parseFromJSON(cJSON* FORMATJSON) {
    arm_api_v1GetProjectVpnConfig_format_e FORMATVariable = 0;
    cJSON *FORMATVar = cJSON_GetObjectItemCaseSensitive(FORMATJSON, "format");
    if(!cJSON_IsString(FORMATVar) || (FORMATVar->valuestring == NULL))
    {
        goto end;
    }
    FORMATVariable = v1GetProjectVpnConfig_FORMAT_FromString(FORMATVar->valuestring);
    return FORMATVariable;
end:
    return 0;
}
*/


// Get Trial Status
//
// Allow users to check the trial status of an email.
//
object_t*
ArmAPI_trialStatus(apiClient_t *apiClient, char * trialEmail )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/billing/trial-status/{trialEmail}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/billing/trial-status/{trialEmail}");

    if(!trialEmail)
        goto end;


    // Path Params
    long sizeOfPathParams_trialEmail = strlen(trialEmail)+3 + strlen("{ trialEmail }");
    if(trialEmail == NULL) {
        goto end;
    }
    char* localVarToReplace_trialEmail = malloc(sizeOfPathParams_trialEmail);
    sprintf(localVarToReplace_trialEmail, "{%s}", "trialEmail");

    localVarPath = strReplace(localVarPath, localVarToReplace_trialEmail, trialEmail);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    object_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = object_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_trialEmail);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Add Project Authorized Key
//
char*
ArmAPI_v1AddProjectKey(apiClient_t *apiClient, char * projectId , project_key_t * project_key )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}/keys")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}/keys");

    if(!projectId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);



    // Body Param
    cJSON *localVarSingleItemJSON_project_key = NULL;
    if (project_key != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_project_key = project_key_convertToJSON(project_key);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_project_key);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Authorized Keys");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //primitive return type simple string
    char* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_projectId);
    if (localVarSingleItemJSON_project_key) {
        cJSON_Delete(localVarSingleItemJSON_project_key);
        localVarSingleItemJSON_project_key = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Add team role to project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1AddTeamRoleToProject(apiClient_t *apiClient, char * projectId , char * teamId , char * roleId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId}");

    if(!projectId)
        goto end;
    if(!teamId)
        goto end;
    if(!roleId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen(teamId)+3 + strlen(roleId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);

    // Path Params
    long sizeOfPathParams_teamId = strlen(projectId)+3 + strlen(teamId)+3 + strlen(roleId)+3 + strlen("{ teamId }");
    if(teamId == NULL) {
        goto end;
    }
    char* localVarToReplace_teamId = malloc(sizeOfPathParams_teamId);
    sprintf(localVarToReplace_teamId, "{%s}", "teamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_teamId, teamId);

    // Path Params
    long sizeOfPathParams_roleId = strlen(projectId)+3 + strlen(teamId)+3 + strlen(roleId)+3 + strlen("{ roleId }");
    if(roleId == NULL) {
        goto end;
    }
    char* localVarToReplace_roleId = malloc(sizeOfPathParams_roleId);
    sprintf(localVarToReplace_roleId, "{%s}", "roleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_roleId, roleId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    free(localVarToReplace_teamId);
    free(localVarToReplace_roleId);

}

// Add user role to project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1AddUserRoleToProject(apiClient_t *apiClient, char * projectId , char * userId , char * roleId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/roles/projects/{projectId}/users/{userId}/roles/{roleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/roles/projects/{projectId}/users/{userId}/roles/{roleId}");

    if(!projectId)
        goto end;
    if(!userId)
        goto end;
    if(!roleId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen(userId)+3 + strlen(roleId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);

    // Path Params
    long sizeOfPathParams_userId = strlen(projectId)+3 + strlen(userId)+3 + strlen(roleId)+3 + strlen("{ userId }");
    if(userId == NULL) {
        goto end;
    }
    char* localVarToReplace_userId = malloc(sizeOfPathParams_userId);
    sprintf(localVarToReplace_userId, "{%s}", "userId");

    localVarPath = strReplace(localVarPath, localVarToReplace_userId, userId);

    // Path Params
    long sizeOfPathParams_roleId = strlen(projectId)+3 + strlen(userId)+3 + strlen(roleId)+3 + strlen("{ roleId }");
    if(roleId == NULL) {
        goto end;
    }
    char* localVarToReplace_roleId = malloc(sizeOfPathParams_roleId);
    sprintf(localVarToReplace_roleId, "{%s}", "roleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_roleId, roleId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    free(localVarToReplace_userId);
    free(localVarToReplace_roleId);

}

// Add user to team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1AddUserToTeam(apiClient_t *apiClient, char * teamId , char * userId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/teams/{teamId}/users/{userId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/teams/{teamId}/users/{userId}");

    if(!teamId)
        goto end;
    if(!userId)
        goto end;


    // Path Params
    long sizeOfPathParams_teamId = strlen(teamId)+3 + strlen(userId)+3 + strlen("{ teamId }");
    if(teamId == NULL) {
        goto end;
    }
    char* localVarToReplace_teamId = malloc(sizeOfPathParams_teamId);
    sprintf(localVarToReplace_teamId, "{%s}", "teamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_teamId, teamId);

    // Path Params
    long sizeOfPathParams_userId = strlen(teamId)+3 + strlen(userId)+3 + strlen("{ userId }");
    if(userId == NULL) {
        goto end;
    }
    char* localVarToReplace_userId = malloc(sizeOfPathParams_userId);
    sprintf(localVarToReplace_userId, "{%s}", "userId");

    localVarPath = strReplace(localVarPath, localVarToReplace_userId, userId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_teamId);
    free(localVarToReplace_userId);

}

// Log In
//
token_t*
ArmAPI_v1AuthLogin(apiClient_t *apiClient, api_token_t * api_token )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/auth/login")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/auth/login");





    // Body Param
    cJSON *localVarSingleItemJSON_api_token = NULL;
    if (api_token != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_api_token = api_token_convertToJSON(api_token);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_api_token);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","User Authorization");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    token_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = token_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_api_token) {
        cJSON_Delete(localVarSingleItemJSON_api_token);
        localVarSingleItemJSON_api_token = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Pre-authorize an btrace download
//
object_t*
ArmAPI_v1BtracePreauthorize(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/btrace-authorize")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/btrace-authorize");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Token");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    object_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = object_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Clear CoreTrace logs
//
void
ArmAPI_v1ClearCoreTrace(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/strace")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/strace");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Clear HyperTrace logs
//
void
ArmAPI_v1ClearHyperTrace(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/btrace")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/btrace");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Clear Hooks on an instance
//
void
ArmAPI_v1ClearHyperTraceHooks(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/hooks/clear")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/hooks/clear");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Clear Panics
//
void
ArmAPI_v1ClearInstancePanics(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/panics")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/panics");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Create hypervisor hook for Instance
//
hook_t*
ArmAPI_v1CreateHook(apiClient_t *apiClient, char * instanceId , v1_create_hook_parameters_t * v1_create_hook_parameters )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/hooks")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/hooks");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_v1_create_hook_parameters = NULL;
    if (v1_create_hook_parameters != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_v1_create_hook_parameters = v1_create_hook_parameters_convertToJSON(v1_create_hook_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_v1_create_hook_parameters);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Hook");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    hook_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = hook_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_v1_create_hook_parameters) {
        cJSON_Delete(localVarSingleItemJSON_v1_create_hook_parameters);
        localVarSingleItemJSON_v1_create_hook_parameters = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Image
//
image_t*
ArmAPI_v1CreateImage(apiClient_t *apiClient, char * type , arm_api_v1CreateImage_encoding_e encoding , int encapsulated , char * name , char * project , char * instance , binary_t* file )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/images")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/images");





    // form parameters
    char *keyForm_type = NULL;
    char * valueForm_type = 0;
    keyValuePair_t *keyPairForm_type = 0;
    if (type != NULL)
    {
        keyForm_type = strdup("type");
        valueForm_type = strdup((type));
        keyPairForm_type = keyValuePair_create(keyForm_type,valueForm_type);
        list_addElement(localVarFormParameters,keyPairForm_type);
    }

    // form parameters
    char *keyForm_encoding = NULL;
    arm_api_v1CreateImage_encoding_e valueForm_encoding = 0;
    keyValuePair_t *keyPairForm_encoding = 0;
    if (encoding != 0)
    {
        keyForm_encoding = strdup("encoding");
        valueForm_encoding = (encoding);
        keyPairForm_encoding = keyValuePair_create(keyForm_encoding,(void *)valueForm_encoding);
        list_addElement(localVarFormParameters,keyPairForm_encoding);
    }

    // form parameters
    char *keyForm_encapsulated = NULL;
    int valueForm_encapsulated = 0;
    keyValuePair_t *keyPairForm_encapsulated = 0;
    if (encapsulated != NULL)
    {
        keyForm_encapsulated = strdup("encapsulated");
        valueForm_encapsulated = (encapsulated);
        keyPairForm_encapsulated = keyValuePair_create(keyForm_encapsulated,&valueForm_encapsulated);
        list_addElement(localVarFormParameters,keyPairForm_encapsulated);
    }

    // form parameters
    char *keyForm_name = NULL;
    char * valueForm_name = 0;
    keyValuePair_t *keyPairForm_name = 0;
    if (name != NULL)
    {
        keyForm_name = strdup("name");
        valueForm_name = strdup((name));
        keyPairForm_name = keyValuePair_create(keyForm_name,valueForm_name);
        list_addElement(localVarFormParameters,keyPairForm_name);
    }

    // form parameters
    char *keyForm_project = NULL;
    char * valueForm_project = 0;
    keyValuePair_t *keyPairForm_project = 0;
    if (project != NULL)
    {
        keyForm_project = strdup("project");
        valueForm_project = strdup((project));
        keyPairForm_project = keyValuePair_create(keyForm_project,valueForm_project);
        list_addElement(localVarFormParameters,keyPairForm_project);
    }

    // form parameters
    char *keyForm_instance = NULL;
    char * valueForm_instance = 0;
    keyValuePair_t *keyPairForm_instance = 0;
    if (instance != NULL)
    {
        keyForm_instance = strdup("instance");
        valueForm_instance = strdup((instance));
        keyPairForm_instance = keyValuePair_create(keyForm_instance,valueForm_instance);
        list_addElement(localVarFormParameters,keyPairForm_instance);
    }

    // form parameters
    char *keyForm_file = NULL;
    binary_t* valueForm_file = 0;
    keyValuePair_t *keyPairForm_file = 0;
    if (file != NULL)
    {
        keyForm_file = strdup("file");
        valueForm_file = file;
        keyPairForm_file = keyValuePair_create(keyForm_file, &valueForm_file);
        list_addElement(localVarFormParameters,keyPairForm_file); //file adding
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","application/json");
    //}
    //nonprimitive not container
    image_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (keyForm_type) {
        free(keyForm_type);
        keyForm_type = NULL;
    }
    if (valueForm_type) {
        free(valueForm_type);
        valueForm_type = NULL;
    }
    free(keyPairForm_type);
    if (keyForm_encoding) {
        free(keyForm_encoding);
        keyForm_encoding = NULL;
    }
    if (valueForm_encoding) {
        valueForm_encoding = 0;
    }
    free(keyPairForm_encoding);
    if (keyForm_encapsulated) {
        free(keyForm_encapsulated);
        keyForm_encapsulated = NULL;
    }
    free(keyPairForm_encapsulated);
    if (keyForm_name) {
        free(keyForm_name);
        keyForm_name = NULL;
    }
    if (valueForm_name) {
        free(valueForm_name);
        valueForm_name = NULL;
    }
    free(keyPairForm_name);
    if (keyForm_project) {
        free(keyForm_project);
        keyForm_project = NULL;
    }
    if (valueForm_project) {
        free(valueForm_project);
        valueForm_project = NULL;
    }
    free(keyPairForm_project);
    if (keyForm_instance) {
        free(keyForm_instance);
        keyForm_instance = NULL;
    }
    if (valueForm_instance) {
        free(valueForm_instance);
        valueForm_instance = NULL;
    }
    free(keyPairForm_instance);
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);
    free(keyPairForm_file);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create Instance
//
instance_return_t*
ArmAPI_v1CreateInstance(apiClient_t *apiClient, instance_create_options_t * instance_create_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances");





    // Body Param
    cJSON *localVarSingleItemJSON_instance_create_options = NULL;
    if (instance_create_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_instance_create_options = instance_create_options_convertToJSON(instance_create_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_instance_create_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    instance_return_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = instance_return_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_instance_create_options) {
        cJSON_Delete(localVarSingleItemJSON_instance_create_options);
        localVarSingleItemJSON_instance_create_options = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a Project
//
project_t*
ArmAPI_v1CreateProject(apiClient_t *apiClient, project_t * project )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects");





    // Body Param
    cJSON *localVarSingleItemJSON_project = NULL;
    if (project != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_project = project_convertToJSON(project);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_project);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    project_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = project_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_project) {
        cJSON_Delete(localVarSingleItemJSON_project);
        localVarSingleItemJSON_project = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create Instance Snapshot
//
snapshot_t*
ArmAPI_v1CreateSnapshot(apiClient_t *apiClient, char * instanceId , snapshot_creation_options_t * snapshot_creation_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_snapshot_creation_options = NULL;
    if (snapshot_creation_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_snapshot_creation_options = snapshot_creation_options_convertToJSON(snapshot_creation_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_snapshot_creation_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    snapshot_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_snapshot_creation_options) {
        cJSON_Delete(localVarSingleItemJSON_snapshot_creation_options);
        localVarSingleItemJSON_snapshot_creation_options = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create Subscriber Invite
//
// Create Subscriber Invite
//
subscriber_invite_t*
ArmAPI_v1CreateSubscriberInvite(apiClient_t *apiClient, subscriber_invite_t * subscriber_invite )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/billing/invites")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/billing/invites");





    // Body Param
    cJSON *localVarSingleItemJSON_subscriber_invite = NULL;
    if (subscriber_invite != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_subscriber_invite = subscriber_invite_convertToJSON(subscriber_invite);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_subscriber_invite);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    subscriber_invite_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = subscriber_invite_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_subscriber_invite) {
        cJSON_Delete(localVarSingleItemJSON_subscriber_invite);
        localVarSingleItemJSON_subscriber_invite = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing hypervisor hook
//
void
ArmAPI_v1DeleteHook(apiClient_t *apiClient, char * hookId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/hooks/{hookId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/hooks/{hookId}");

    if(!hookId)
        goto end;


    // Path Params
    long sizeOfPathParams_hookId = strlen(hookId)+3 + strlen("{ hookId }");
    if(hookId == NULL) {
        goto end;
    }
    char* localVarToReplace_hookId = malloc(sizeOfPathParams_hookId);
    sprintf(localVarToReplace_hookId, "{%s}", "hookId");

    localVarPath = strReplace(localVarPath, localVarToReplace_hookId, hookId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_hookId);

}

// Delete Image
//
void
ArmAPI_v1DeleteImage(apiClient_t *apiClient, char * imageId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v2/images/{imageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/images/{imageId}");

    if(!imageId)
        goto end;


    // Path Params
    long sizeOfPathParams_imageId = strlen(imageId)+3 + strlen("{ imageId }");
    if(imageId == NULL) {
        goto end;
    }
    char* localVarToReplace_imageId = malloc(sizeOfPathParams_imageId);
    sprintf(localVarToReplace_imageId, "{%s}", "imageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_imageId, imageId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_imageId);

}

// Remove Instance
//
void
ArmAPI_v1DeleteInstance(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Delete a Snapshot
//
void
ArmAPI_v1DeleteInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}");

    if(!instanceId)
        goto end;
    if(!snapshotId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);

    // Path Params
    long sizeOfPathParams_snapshotId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ snapshotId }");
    if(snapshotId == NULL) {
        goto end;
    }
    char* localVarToReplace_snapshotId = malloc(sizeOfPathParams_snapshotId);
    sprintf(localVarToReplace_snapshotId, "{%s}", "snapshotId");

    localVarPath = strReplace(localVarPath, localVarToReplace_snapshotId, snapshotId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    free(localVarToReplace_snapshotId);

}

// Delete a Project
//
void
ArmAPI_v1DeleteProject(apiClient_t *apiClient, char * projectId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}");

    if(!projectId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);

}

// Delete a Snapshot
//
void
ArmAPI_v1DeleteSnapshot(apiClient_t *apiClient, char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/snapshots/{snapshotId}");

    if(!snapshotId)
        goto end;


    // Path Params
    long sizeOfPathParams_snapshotId = strlen(snapshotId)+3 + strlen("{ snapshotId }");
    if(snapshotId == NULL) {
        goto end;
    }
    char* localVarToReplace_snapshotId = malloc(sizeOfPathParams_snapshotId);
    sprintf(localVarToReplace_snapshotId, "{%s}", "snapshotId");

    localVarPath = strReplace(localVarPath, localVarToReplace_snapshotId, snapshotId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_snapshotId);

}

// Disable an exposed port on an instance for device access.
//
void
ArmAPI_v1DisableExposePort(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/exposeport/disable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/exposeport/disable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Enable an exposed port on an instance for device access.
//
void
ArmAPI_v1EnableExposePort(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/exposeport/enable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/exposeport/enable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Execute Hooks on an instance
//
void
ArmAPI_v1ExecuteHyperTraceHooks(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/hooks/execute")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/hooks/execute");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Get hypervisor hook by id
//
hook_t*
ArmAPI_v1GetHookById(apiClient_t *apiClient, char * hookId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/hooks/{hookId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/hooks/{hookId}");

    if(!hookId)
        goto end;


    // Path Params
    long sizeOfPathParams_hookId = strlen(hookId)+3 + strlen("{ hookId }");
    if(hookId == NULL) {
        goto end;
    }
    char* localVarToReplace_hookId = malloc(sizeOfPathParams_hookId);
    sprintf(localVarToReplace_hookId, "{%s}", "hookId");

    localVarPath = strReplace(localVarPath, localVarToReplace_hookId, hookId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Hook");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    hook_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = hook_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_hookId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get all hypervisor hooks for Instance
//
list_t*
ArmAPI_v1GetHooks(apiClient_t *apiClient, char * instanceId , double limit , double offset , arm_api_v1GetHooks_sort_e sort )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/hooks")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/hooks");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // query parameters
    char *keyQuery_limit = NULL;
    double valueQuery_limit ;
    keyValuePair_t *keyPairQuery_limit = 0;
    if (limit)
    {
        keyQuery_limit = strdup("limit");
        valueQuery_limit = (limit);
        keyPairQuery_limit = keyValuePair_create(keyQuery_limit, &valueQuery_limit);
        list_addElement(localVarQueryParameters,keyPairQuery_limit);
    }

    // query parameters
    char *keyQuery_offset = NULL;
    double valueQuery_offset ;
    keyValuePair_t *keyPairQuery_offset = 0;
    if (offset)
    {
        keyQuery_offset = strdup("offset");
        valueQuery_offset = (offset);
        keyPairQuery_offset = keyValuePair_create(keyQuery_offset, &valueQuery_offset);
        list_addElement(localVarQueryParameters,keyPairQuery_offset);
    }

    // query parameters
    char *keyQuery_sort = NULL;
    arm_api_v1GetHooks_sort_e valueQuery_sort ;
    keyValuePair_t *keyPairQuery_sort = 0;
    if (sort)
    {
        keyQuery_sort = strdup("sort");
        valueQuery_sort = (sort);
        keyPairQuery_sort = keyValuePair_create(keyQuery_sort, (void *)strdup(v1GetHooks_SORT_ToString(
		valueQuery_sort)));
        list_addElement(localVarQueryParameters,keyPairQuery_sort);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Hooks");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 304) {
    //    printf("%s\n","No changes");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if(keyQuery_limit){
        free(keyQuery_limit);
        keyQuery_limit = NULL;
    }
    if(keyPairQuery_limit){
        keyValuePair_free(keyPairQuery_limit);
        keyPairQuery_limit = NULL;
    }
    if(keyQuery_offset){
        free(keyQuery_offset);
        keyQuery_offset = NULL;
    }
    if(keyPairQuery_offset){
        keyValuePair_free(keyPairQuery_offset);
        keyPairQuery_offset = NULL;
    }
    if(keyQuery_sort){
        free(keyQuery_sort);
        keyQuery_sort = NULL;
    }
    if(keyPairQuery_sort){
        keyValuePair_free(keyPairQuery_sort);
        keyPairQuery_sort = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Image Metadata
//
image_t*
ArmAPI_v1GetImage(apiClient_t *apiClient, char * imageId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/images/{imageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/images/{imageId}");

    if(!imageId)
        goto end;


    // Path Params
    long sizeOfPathParams_imageId = strlen(imageId)+3 + strlen("{ imageId }");
    if(imageId == NULL) {
        goto end;
    }
    char* localVarToReplace_imageId = malloc(sizeOfPathParams_imageId);
    sprintf(localVarToReplace_imageId, "{%s}", "imageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_imageId, imageId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","application/json");
    //}
    //nonprimitive not container
    image_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_imageId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get all Images Metadata
//
image_t*
ArmAPI_v1GetImages(apiClient_t *apiClient, char * project )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/images")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/images");





    // query parameters
    char *keyQuery_project = NULL;
    char * valueQuery_project = NULL;
    keyValuePair_t *keyPairQuery_project = 0;
    if (project)
    {
        keyQuery_project = strdup("project");
        valueQuery_project = strdup((project));
        keyPairQuery_project = keyValuePair_create(keyQuery_project, valueQuery_project);
        list_addElement(localVarQueryParameters,keyPairQuery_project);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    //nonprimitive not container
    image_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_project){
        free(keyQuery_project);
        keyQuery_project = NULL;
    }
    if(valueQuery_project){
        free(valueQuery_project);
        valueQuery_project = NULL;
    }
    if(keyPairQuery_project){
        keyValuePair_free(keyPairQuery_project);
        keyPairQuery_project = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Instance
//
instance_t*
ArmAPI_v1GetInstance(apiClient_t *apiClient, char * instanceId , list_t * returnAttr )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // query parameters
    if (returnAttr)
    {
        list_addElement(localVarQueryParameters,returnAttr);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    instance_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = instance_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get console websocket URL
//
instance_console_endpoint_t*
ArmAPI_v1GetInstanceConsole(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/console")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/console");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    instance_console_endpoint_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = instance_console_endpoint_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Console Log
//
char*
ArmAPI_v1GetInstanceConsoleLog(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/consoleLog")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/consoleLog");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Current console log");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //primitive return type simple string
    char* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Instance GPIOs
//
gpios_state_t*
ArmAPI_v1GetInstanceGpios(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/gpios")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/gpios");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Current GPIO State");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    gpios_state_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = gpios_state_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Panics
//
list_t*
ArmAPI_v1GetInstancePanics(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/panics")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/panics");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Array of panics");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Instance Peripherals
//
peripherals_data_t*
ArmAPI_v1GetInstancePeripherals(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/peripherals")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/peripherals");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Current Peripherals State");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    peripherals_data_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = peripherals_data_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Recommended SSH Command for Quick Connect
//
char*
ArmAPI_v1GetInstanceQuickConnectCommand(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/quickConnectCommand")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/quickConnectCommand");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Quick Connect Command");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //primitive return type simple string
    char* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Instance Screenshot
//
binary_t*
ArmAPI_v1GetInstanceScreenshot(apiClient_t *apiClient, char * instanceId , arm_api_v1GetInstanceScreenshot_format_e format , int scale )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/screenshot.{format}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/screenshot.{format}");

    if(!instanceId)
        goto end;
    if(!format)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen(v1GetInstanceScreenshot_FORMAT_ToString(format))+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);

    // Path Params
    long sizeOfPathParams_format = strlen(instanceId)+3 + strlen(v1GetInstanceScreenshot_FORMAT_ToString(format))+3 + strlen("{ format }");
    if(format == 0) {
        goto end;
    }
    char* localVarToReplace_format = malloc(sizeOfPathParams_format);
    sprintf(localVarToReplace_format, "{%s}", "format");

    localVarPath = strReplace(localVarPath, localVarToReplace_format, v1GetInstanceScreenshot_FORMAT_ToString(format));



    // query parameters
    char *keyQuery_scale = NULL;
    char * valueQuery_scale = NULL;
    keyValuePair_t *keyPairQuery_scale = 0;
    if (scale)
    {
        keyQuery_scale = strdup("scale");
        valueQuery_scale = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_scale, MAX_NUMBER_LENGTH, "%d", scale);
        keyPairQuery_scale = keyValuePair_create(keyQuery_scale, valueQuery_scale);
        list_addElement(localVarQueryParameters,keyPairQuery_scale);
    }
    list_addElement(localVarHeaderType,"image/png"); //produces
    list_addElement(localVarHeaderType,"image/jpeg"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Screenshot");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //primitive return type simple binary
    binary_t* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = instantiate_binary_t(apiClient->dataReceived, apiClient->dataReceivedLen);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    free(localVarToReplace_format);
    if(keyQuery_scale){
        free(keyQuery_scale);
        keyQuery_scale = NULL;
    }
    if(valueQuery_scale){
        free(valueQuery_scale);
        valueQuery_scale = NULL;
    }
    if(keyPairQuery_scale){
        keyValuePair_free(keyPairQuery_scale);
        keyPairQuery_scale = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Instance Snapshot
//
snapshot_t*
ArmAPI_v1GetInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}");

    if(!instanceId)
        goto end;
    if(!snapshotId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);

    // Path Params
    long sizeOfPathParams_snapshotId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ snapshotId }");
    if(snapshotId == NULL) {
        goto end;
    }
    char* localVarToReplace_snapshotId = malloc(sizeOfPathParams_snapshotId);
    sprintf(localVarToReplace_snapshotId, "{%s}", "snapshotId");

    localVarPath = strReplace(localVarPath, localVarToReplace_snapshotId, snapshotId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    snapshot_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    free(localVarToReplace_snapshotId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Instance Snapshots
//
list_t*
ArmAPI_v1GetInstanceSnapshots(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get state of Instance
//
arm_api_instance_state__e
ArmAPI_v1GetInstanceState(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/state")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/state");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Current Instance State");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    arm_api_instance_state__e elementToReturn = 0;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = instance_state_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == 0) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return 0;

}

// Get Instances
//
list_t*
ArmAPI_v1GetInstances(apiClient_t *apiClient, char * name , list_t * returnAttr )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances");





    // query parameters
    char *keyQuery_name = NULL;
    char * valueQuery_name = NULL;
    keyValuePair_t *keyPairQuery_name = 0;
    if (name)
    {
        keyQuery_name = strdup("name");
        valueQuery_name = strdup((name));
        keyPairQuery_name = keyValuePair_create(keyQuery_name, valueQuery_name);
        list_addElement(localVarQueryParameters,keyPairQuery_name);
    }

    // query parameters
    if (returnAttr)
    {
        list_addElement(localVarQueryParameters,returnAttr);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_name){
        free(keyQuery_name);
        keyQuery_name = NULL;
    }
    if(valueQuery_name){
        free(valueQuery_name);
        valueQuery_name = NULL;
    }
    if(keyPairQuery_name){
        keyValuePair_free(keyPairQuery_name);
        keyPairQuery_name = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Software for Model
//
list_t*
ArmAPI_v1GetModelSoftware(apiClient_t *apiClient, char * model )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/models/{model}/software")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/models/{model}/software");

    if(!model)
        goto end;


    // Path Params
    long sizeOfPathParams_model = strlen(model)+3 + strlen("{ model }");
    if(model == NULL) {
        goto end;
    }
    char* localVarToReplace_model = malloc(sizeOfPathParams_model);
    sprintf(localVarToReplace_model, "{%s}", "model");

    localVarPath = strReplace(localVarPath, localVarToReplace_model, model);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Supported software loads for this model");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_model);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Supported Models
//
list_t*
ArmAPI_v1GetModels(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/models")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/models");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Supported device configurations");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a Project
//
project_t*
ArmAPI_v1GetProject(apiClient_t *apiClient, char * projectId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}");

    if(!projectId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    project_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = project_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Instances in Project
//
list_t*
ArmAPI_v1GetProjectInstances(apiClient_t *apiClient, char * projectId , char * name , list_t * returnAttr )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}/instances")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}/instances");

    if(!projectId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);



    // query parameters
    char *keyQuery_name = NULL;
    char * valueQuery_name = NULL;
    keyValuePair_t *keyPairQuery_name = 0;
    if (name)
    {
        keyQuery_name = strdup("name");
        valueQuery_name = strdup((name));
        keyPairQuery_name = keyValuePair_create(keyQuery_name, valueQuery_name);
        list_addElement(localVarQueryParameters,keyPairQuery_name);
    }

    // query parameters
    if (returnAttr)
    {
        list_addElement(localVarQueryParameters,returnAttr);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    if(keyQuery_name){
        free(keyQuery_name);
        keyQuery_name = NULL;
    }
    if(valueQuery_name){
        free(valueQuery_name);
        valueQuery_name = NULL;
    }
    if(keyPairQuery_name){
        keyValuePair_free(keyPairQuery_name);
        keyPairQuery_name = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Project Authorized Keys
//
list_t*
ArmAPI_v1GetProjectKeys(apiClient_t *apiClient, char * projectId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}/keys")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}/keys");

    if(!projectId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Authorized Keys");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Project VPN Configuration
//
char*
ArmAPI_v1GetProjectVpnConfig(apiClient_t *apiClient, char * projectId , arm_api_v1GetProjectVpnConfig_format_e format )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}/vpnconfig/{format}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}/vpnconfig/{format}");

    if(!projectId)
        goto end;
    if(!format)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen(v1GetProjectVpnConfig_FORMAT_ToString(format))+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);

    // Path Params
    long sizeOfPathParams_format = strlen(projectId)+3 + strlen(v1GetProjectVpnConfig_FORMAT_ToString(format))+3 + strlen("{ format }");
    if(format == 0) {
        goto end;
    }
    char* localVarToReplace_format = malloc(sizeOfPathParams_format);
    sprintf(localVarToReplace_format, "{%s}", "format");

    localVarPath = strReplace(localVarPath, localVarToReplace_format, v1GetProjectVpnConfig_FORMAT_ToString(format));


    list_addElement(localVarHeaderType,"application/x-openvpn-profile"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OpenVPN Configuration");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //primitive return type simple string
    char* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    free(localVarToReplace_format);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Projects
//
list_t*
ArmAPI_v1GetProjects(apiClient_t *apiClient, char * name , int ids_only )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects");





    // query parameters
    char *keyQuery_name = NULL;
    char * valueQuery_name = NULL;
    keyValuePair_t *keyPairQuery_name = 0;
    if (name)
    {
        keyQuery_name = strdup("name");
        valueQuery_name = strdup((name));
        keyPairQuery_name = keyValuePair_create(keyQuery_name, valueQuery_name);
        list_addElement(localVarQueryParameters,keyPairQuery_name);
    }

    // query parameters
    char *keyQuery_ids_only = NULL;
    char * valueQuery_ids_only = NULL;
    keyValuePair_t *keyPairQuery_ids_only = 0;
    if (ids_only)
    {
        keyQuery_ids_only = strdup("ids_only");
        valueQuery_ids_only = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_ids_only, MAX_NUMBER_LENGTH, "%d", ids_only);
        keyPairQuery_ids_only = keyValuePair_create(keyQuery_ids_only, valueQuery_ids_only);
        list_addElement(localVarQueryParameters,keyPairQuery_ids_only);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Projects");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","No Projects Found");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_name){
        free(keyQuery_name);
        keyQuery_name = NULL;
    }
    if(valueQuery_name){
        free(valueQuery_name);
        valueQuery_name = NULL;
    }
    if(keyPairQuery_name){
        keyValuePair_free(keyPairQuery_name);
        keyPairQuery_name = NULL;
    }
    if(keyQuery_ids_only){
        free(keyQuery_ids_only);
        keyQuery_ids_only = NULL;
    }
    if(valueQuery_ids_only){
        free(valueQuery_ids_only);
        valueQuery_ids_only = NULL;
    }
    if(keyPairQuery_ids_only){
        keyValuePair_free(keyPairQuery_ids_only);
        keyPairQuery_ids_only = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Snapshot
//
snapshot_t*
ArmAPI_v1GetSnapshot(apiClient_t *apiClient, char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/snapshots/{snapshotId}");

    if(!snapshotId)
        goto end;


    // Path Params
    long sizeOfPathParams_snapshotId = strlen(snapshotId)+3 + strlen("{ snapshotId }");
    if(snapshotId == NULL) {
        goto end;
    }
    char* localVarToReplace_snapshotId = malloc(sizeOfPathParams_snapshotId);
    sprintf(localVarToReplace_snapshotId, "{%s}", "snapshotId");

    localVarPath = strReplace(localVarPath, localVarToReplace_snapshotId, snapshotId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    snapshot_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_snapshotId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Kernel extension ranges
//
list_t*
ArmAPI_v1Kcrange(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/btrace-kcrange")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/btrace-kcrange");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Kcranges");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Running Threads (CoreTrace)
//
list_t*
ArmAPI_v1ListThreads(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/strace/thread-list")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/strace/thread-list");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Threads");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Start playing media
//
void
ArmAPI_v1MediaPlay(apiClient_t *apiClient, char * instanceId , media_play_body_t * media_play_body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/media/play")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/media/play");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_media_play_body = NULL;
    if (media_play_body != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_media_play_body = media_play_body_convertToJSON(media_play_body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_media_play_body);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_media_play_body) {
        cJSON_Delete(localVarSingleItemJSON_media_play_body);
        localVarSingleItemJSON_media_play_body = NULL;
    }
    free(localVarBodyParameters);

}

// Stop playing media
//
void
ArmAPI_v1MediaStop(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/media/stop")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/media/stop");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Update Instance
//
instance_t*
ArmAPI_v1PatchInstance(apiClient_t *apiClient, char * instanceId , patch_instance_options_t * patch_instance_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_patch_instance_options = NULL;
    if (patch_instance_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_patch_instance_options = patch_instance_options_convertToJSON(patch_instance_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_patch_instance_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    instance_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = instance_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_patch_instance_options) {
        cJSON_Delete(localVarSingleItemJSON_patch_instance_options);
        localVarSingleItemJSON_patch_instance_options = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Pause an Instance
//
void
ArmAPI_v1PauseInstance(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/pause")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/pause");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Provide Instance Input
//
// Sends a touch or button event to the VM.  - Buttons (or keys) to be held during the input are specified as an array of strings, each string must be either a single ascii character or one of the following keywords:   - VM Buttons: finger, homeButton, holdButton, volumeUp, volumeDown, ringerSwitch, backButton, overviewButton   - Keyboard Buttons: again, alt, alterase, apostrophe, back, backslash, backspace, bassboost, bookmarks, bsp, calc, camera, cancel, caps, capslock, chat, close, closecd, comma, compose, computer, config, connect, copy, ctrl, cut, cyclewindows, dashboard, del, delete, deletefile, dot, down, edit, eject, ejectclose, email, end, enter, equal, esc, escape, exit, f1, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f2, f20, f21, f22, f23, f24, f3, f4, f5, f6, f7, f8, f9, fastfwd, file, finance, find, forward, front, grave, hangeul, hanja, help, henkan, home, homepage, hp, hrgn, ins, insert, iso, k102, kp0, kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9, kpasterisk, kpcomma, kpdot, kpenter, kpequal, kpjpcomma, kpleftparen, kpminus, kpplus, kpplusminus, kprightparen, kpslash, ktkn, ktknhrgn, left, leftalt, leftbrace, leftctrl, leftmeta, leftshift, linefeed, macro, mail, menu, meta, minus, move, msdos, muhenkan, mute, new, next, numlock, open, pagedown, pageup, paste, pause, pausecd, pgdn, pgup, phone, play, playcd, playpause, power, previous, print, prog1, prog2, prog3, prog4, props, question, record, redo, refresh, return, rewind, right, rightalt, rightbrace, rightctrl, rightmeta, rightshift, ro, rotate, scale, screenlock, scrolldown, scrolllock, scrollup, search, semicolon, sendfile, setup, shift, shop, slash, sleep, sound, space, sport, stop, stopcd, suspend, sysrq, tab, undo, up, voldown, volup, wakeup, www, xfer, yen, zkhk
//
int
ArmAPI_v1PostInstanceInput(apiClient_t *apiClient, char * instanceId , list_t * instance_input )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/input")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/input");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    //notstring
    cJSON *localVar_instance_input = NULL;
    cJSON *localVarItemJSON_instance_input = NULL;
    cJSON *localVarSingleItemJSON_instance_input = NULL;
    if (instance_input != NULL)
    {
        localVarItemJSON_instance_input = cJSON_CreateObject();
        localVarSingleItemJSON_instance_input = cJSON_AddArrayToObject(localVarItemJSON_instance_input, "instance_input");
        if (localVarSingleItemJSON_instance_input == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *instance_inputBodyListEntry;
    list_ForEach(instance_inputBodyListEntry, instance_input)
    {
        localVar_instance_input = instance_input_convertToJSON(instance_inputBodyListEntry->data);
        if(localVar_instance_input == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_instance_input, localVar_instance_input);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_instance_input);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","ETA of input completion in milliseconds");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //primitive return type simple integer
    int elementToReturn = 0;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = atoi(apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarItemJSON_instance_input) {
        cJSON_Delete(localVarItemJSON_instance_input);
        localVarItemJSON_instance_input = NULL;
    }
    if (localVarSingleItemJSON_instance_input) {
        cJSON_Delete(localVarSingleItemJSON_instance_input);
        localVarSingleItemJSON_instance_input = NULL;
    }
    if (localVar_instance_input) {
        cJSON_Delete(localVar_instance_input);
        localVar_instance_input = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return 0;

}

// API Status
//
// Check if  API is ready for queries
//
void
ArmAPI_v1Ready(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/ready")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/ready");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","API is ready for queries");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","API is not ready");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);

}

// Reboot an Instance
//
void
ArmAPI_v1RebootInstance(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/reboot")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/reboot");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Delete Project Authorized Key
//
void
ArmAPI_v1RemoveProjectKey(apiClient_t *apiClient, char * projectId , char * keyId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}/keys/{keyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}/keys/{keyId}");

    if(!projectId)
        goto end;
    if(!keyId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen(keyId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);

    // Path Params
    long sizeOfPathParams_keyId = strlen(projectId)+3 + strlen(keyId)+3 + strlen("{ keyId }");
    if(keyId == NULL) {
        goto end;
    }
    char* localVarToReplace_keyId = malloc(sizeOfPathParams_keyId);
    sprintf(localVarToReplace_keyId, "{%s}", "keyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_keyId, keyId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Deleted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    free(localVarToReplace_keyId);

}

// Remove team role from project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1RemoveTeamRoleFromProject(apiClient_t *apiClient, char * projectId , char * teamId , char * roleId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId}");

    if(!projectId)
        goto end;
    if(!teamId)
        goto end;
    if(!roleId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen(teamId)+3 + strlen(roleId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);

    // Path Params
    long sizeOfPathParams_teamId = strlen(projectId)+3 + strlen(teamId)+3 + strlen(roleId)+3 + strlen("{ teamId }");
    if(teamId == NULL) {
        goto end;
    }
    char* localVarToReplace_teamId = malloc(sizeOfPathParams_teamId);
    sprintf(localVarToReplace_teamId, "{%s}", "teamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_teamId, teamId);

    // Path Params
    long sizeOfPathParams_roleId = strlen(projectId)+3 + strlen(teamId)+3 + strlen(roleId)+3 + strlen("{ roleId }");
    if(roleId == NULL) {
        goto end;
    }
    char* localVarToReplace_roleId = malloc(sizeOfPathParams_roleId);
    sprintf(localVarToReplace_roleId, "{%s}", "roleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_roleId, roleId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    free(localVarToReplace_teamId);
    free(localVarToReplace_roleId);

}

// Remove user from team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1RemoveUserFromTeam(apiClient_t *apiClient, char * teamId , char * userId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/teams/{teamId}/users/{userId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/teams/{teamId}/users/{userId}");

    if(!teamId)
        goto end;
    if(!userId)
        goto end;


    // Path Params
    long sizeOfPathParams_teamId = strlen(teamId)+3 + strlen(userId)+3 + strlen("{ teamId }");
    if(teamId == NULL) {
        goto end;
    }
    char* localVarToReplace_teamId = malloc(sizeOfPathParams_teamId);
    sprintf(localVarToReplace_teamId, "{%s}", "teamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_teamId, teamId);

    // Path Params
    long sizeOfPathParams_userId = strlen(teamId)+3 + strlen(userId)+3 + strlen("{ userId }");
    if(userId == NULL) {
        goto end;
    }
    char* localVarToReplace_userId = malloc(sizeOfPathParams_userId);
    sprintf(localVarToReplace_userId, "{%s}", "userId");

    localVarPath = strReplace(localVarPath, localVarToReplace_userId, userId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_teamId);
    free(localVarToReplace_userId);

}

// Remove user role from project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1RemoveUserRoleFromProject(apiClient_t *apiClient, char * projectId , char * userId , char * roleId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/roles/projects/{projectId}/users/{userId}/roles/{roleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/roles/projects/{projectId}/users/{userId}/roles/{roleId}");

    if(!projectId)
        goto end;
    if(!userId)
        goto end;
    if(!roleId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen(userId)+3 + strlen(roleId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);

    // Path Params
    long sizeOfPathParams_userId = strlen(projectId)+3 + strlen(userId)+3 + strlen(roleId)+3 + strlen("{ userId }");
    if(userId == NULL) {
        goto end;
    }
    char* localVarToReplace_userId = malloc(sizeOfPathParams_userId);
    sprintf(localVarToReplace_userId, "{%s}", "userId");

    localVarPath = strReplace(localVarPath, localVarToReplace_userId, userId);

    // Path Params
    long sizeOfPathParams_roleId = strlen(projectId)+3 + strlen(userId)+3 + strlen(roleId)+3 + strlen("{ roleId }");
    if(roleId == NULL) {
        goto end;
    }
    char* localVarToReplace_roleId = malloc(sizeOfPathParams_roleId);
    sprintf(localVarToReplace_roleId, "{%s}", "roleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_roleId, roleId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_projectId);
    free(localVarToReplace_userId);
    free(localVarToReplace_roleId);

}

// Rename a Snapshot
//
snapshot_t*
ArmAPI_v1RenameInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId , snapshot_creation_options_t * snapshot_creation_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}");

    if(!instanceId)
        goto end;
    if(!snapshotId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);

    // Path Params
    long sizeOfPathParams_snapshotId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ snapshotId }");
    if(snapshotId == NULL) {
        goto end;
    }
    char* localVarToReplace_snapshotId = malloc(sizeOfPathParams_snapshotId);
    sprintf(localVarToReplace_snapshotId, "{%s}", "snapshotId");

    localVarPath = strReplace(localVarPath, localVarToReplace_snapshotId, snapshotId);



    // Body Param
    cJSON *localVarSingleItemJSON_snapshot_creation_options = NULL;
    if (snapshot_creation_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_snapshot_creation_options = snapshot_creation_options_convertToJSON(snapshot_creation_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_snapshot_creation_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    snapshot_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    free(localVarToReplace_snapshotId);
    if (localVarSingleItemJSON_snapshot_creation_options) {
        cJSON_Delete(localVarSingleItemJSON_snapshot_creation_options);
        localVarSingleItemJSON_snapshot_creation_options = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Restore a Snapshot
//
void
ArmAPI_v1RestoreInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}/restore")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}/restore");

    if(!instanceId)
        goto end;
    if(!snapshotId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);

    // Path Params
    long sizeOfPathParams_snapshotId = strlen(instanceId)+3 + strlen(snapshotId)+3 + strlen("{ snapshotId }");
    if(snapshotId == NULL) {
        goto end;
    }
    char* localVarToReplace_snapshotId = malloc(sizeOfPathParams_snapshotId);
    sprintf(localVarToReplace_snapshotId, "{%s}", "snapshotId");

    localVarPath = strReplace(localVarPath, localVarToReplace_snapshotId, snapshotId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);
    free(localVarToReplace_snapshotId);

}

// Get all roles
//
// This endpoint is available for Enterprise accounts only
//
list_t*
ArmAPI_v1Roles(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/roles")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/roles");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Roles");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set Instance GPIOs
//
gpios_state_t*
ArmAPI_v1SetInstanceGpios(apiClient_t *apiClient, char * instanceId , gpios_state_t * gpios_state )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/gpios")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/gpios");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_gpios_state = NULL;
    if (gpios_state != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_gpios_state = gpios_state_convertToJSON(gpios_state);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_gpios_state);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Current GPIOs State");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    gpios_state_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = gpios_state_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_gpios_state) {
        cJSON_Delete(localVarSingleItemJSON_gpios_state);
        localVarSingleItemJSON_gpios_state = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set Instance Peripherals
//
peripherals_data_t*
ArmAPI_v1SetInstancePeripherals(apiClient_t *apiClient, char * instanceId , peripherals_data_t * peripherals_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/peripherals")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/peripherals");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_peripherals_data = NULL;
    if (peripherals_data != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_peripherals_data = peripherals_data_convertToJSON(peripherals_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_peripherals_data);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Current Peripherals State");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    peripherals_data_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = peripherals_data_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_peripherals_data) {
        cJSON_Delete(localVarSingleItemJSON_peripherals_data);
        localVarSingleItemJSON_peripherals_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set state of Instance
//
void
ArmAPI_v1SetInstanceState(apiClient_t *apiClient, char * instanceId , v1_set_state_body_t * v1_set_state_body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/state")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/state");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_v1_set_state_body = NULL;
    if (v1_set_state_body != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_v1_set_state_body = v1_set_state_body_convertToJSON(v1_set_state_body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_v1_set_state_body);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_v1_set_state_body) {
        cJSON_Delete(localVarSingleItemJSON_v1_set_state_body);
        localVarSingleItemJSON_v1_set_state_body = NULL;
    }
    free(localVarBodyParameters);

}

// Rename a Snapshot
//
snapshot_t*
ArmAPI_v1SnapshotRename(apiClient_t *apiClient, char * snapshotId , snapshot_creation_options_t * snapshot_creation_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/snapshots/{snapshotId}");

    if(!snapshotId)
        goto end;


    // Path Params
    long sizeOfPathParams_snapshotId = strlen(snapshotId)+3 + strlen("{ snapshotId }");
    if(snapshotId == NULL) {
        goto end;
    }
    char* localVarToReplace_snapshotId = malloc(sizeOfPathParams_snapshotId);
    sprintf(localVarToReplace_snapshotId, "{%s}", "snapshotId");

    localVarPath = strReplace(localVarPath, localVarToReplace_snapshotId, snapshotId);



    // Body Param
    cJSON *localVarSingleItemJSON_snapshot_creation_options = NULL;
    if (snapshot_creation_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_snapshot_creation_options = snapshot_creation_options_convertToJSON(snapshot_creation_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_snapshot_creation_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    snapshot_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_snapshotId);
    if (localVarSingleItemJSON_snapshot_creation_options) {
        cJSON_Delete(localVarSingleItemJSON_snapshot_creation_options);
        localVarSingleItemJSON_snapshot_creation_options = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Start CoreTrace on an instance
//
void
ArmAPI_v1StartCoreTrace(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/strace/enable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/strace/enable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Start HyperTrace on an instance
//
void
ArmAPI_v1StartHyperTrace(apiClient_t *apiClient, char * instanceId , btrace_enable_options_t * btrace_enable_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/btrace/enable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/btrace/enable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_btrace_enable_options = NULL;
    if (btrace_enable_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_btrace_enable_options = btrace_enable_options_convertToJSON(btrace_enable_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_btrace_enable_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_btrace_enable_options) {
        cJSON_Delete(localVarSingleItemJSON_btrace_enable_options);
        localVarSingleItemJSON_btrace_enable_options = NULL;
    }
    free(localVarBodyParameters);

}

// Start an Instance
//
void
ArmAPI_v1StartInstance(apiClient_t *apiClient, char * instanceId , instance_start_options_t * instance_start_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/start")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/start");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_instance_start_options = NULL;
    if (instance_start_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_instance_start_options = instance_start_options_convertToJSON(instance_start_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_instance_start_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_instance_start_options) {
        cJSON_Delete(localVarSingleItemJSON_instance_start_options);
        localVarSingleItemJSON_instance_start_options = NULL;
    }
    free(localVarBodyParameters);

}

// Start Network Monitor on an instance.
//
void
ArmAPI_v1StartNetworkMonitor(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/sslsplit/enable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/sslsplit/enable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Stop CoreTrace on an instance.
//
void
ArmAPI_v1StopCoreTrace(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/strace/disable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/strace/disable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Stop HyperTrace on an instance.
//
void
ArmAPI_v1StopHyperTrace(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/btrace/disable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/btrace/disable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Stop an Instance
//
void
ArmAPI_v1StopInstance(apiClient_t *apiClient, char * instanceId , instance_stop_options_t * instance_stop_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/stop")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/stop");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_instance_stop_options = NULL;
    if (instance_stop_options != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_instance_stop_options = instance_stop_options_convertToJSON(instance_stop_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_instance_stop_options);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_instanceId);
    if (localVarSingleItemJSON_instance_stop_options) {
        cJSON_Delete(localVarSingleItemJSON_instance_stop_options);
        localVarSingleItemJSON_instance_stop_options = NULL;
    }
    free(localVarBodyParameters);

}

// Stop Network Monitor on an instance.
//
void
ArmAPI_v1StopNetworkMonitor(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/sslsplit/disable")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/sslsplit/disable");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Update team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1TeamChange(apiClient_t *apiClient, char * teamId , create_team_t * create_team )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/teams/{teamId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/teams/{teamId}");

    if(!teamId)
        goto end;


    // Path Params
    long sizeOfPathParams_teamId = strlen(teamId)+3 + strlen("{ teamId }");
    if(teamId == NULL) {
        goto end;
    }
    char* localVarToReplace_teamId = malloc(sizeOfPathParams_teamId);
    sprintf(localVarToReplace_teamId, "{%s}", "teamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_teamId, teamId);



    // Body Param
    cJSON *localVarSingleItemJSON_create_team = NULL;
    if (create_team != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_create_team = create_team_convertToJSON(create_team);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_create_team);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_teamId);
    if (localVarSingleItemJSON_create_team) {
        cJSON_Delete(localVarSingleItemJSON_create_team);
        localVarSingleItemJSON_create_team = NULL;
    }
    free(localVarBodyParameters);

}

// Create team
//
// This endpoint is available for Enterprise accounts only
//
team_create_t*
ArmAPI_v1TeamCreate(apiClient_t *apiClient, create_team_t * create_team )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/teams")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/teams");





    // Body Param
    cJSON *localVarSingleItemJSON_create_team = NULL;
    if (create_team != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_create_team = create_team_convertToJSON(create_team);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_create_team);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","User");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    team_create_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = team_create_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_create_team) {
        cJSON_Delete(localVarSingleItemJSON_create_team);
        localVarSingleItemJSON_create_team = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1TeamDelete(apiClient_t *apiClient, char * teamId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/teams/{teamId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/teams/{teamId}");

    if(!teamId)
        goto end;


    // Path Params
    long sizeOfPathParams_teamId = strlen(teamId)+3 + strlen("{ teamId }");
    if(teamId == NULL) {
        goto end;
    }
    char* localVarToReplace_teamId = malloc(sizeOfPathParams_teamId);
    sprintf(localVarToReplace_teamId, "{%s}", "teamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_teamId, teamId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_teamId);

}

// Get teams
//
// This endpoint is available for Enterprise accounts only
//
list_t*
ArmAPI_v1Teams(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/teams")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/teams");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Teams");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Unpause an Instance
//
void
ArmAPI_v1UnpauseInstance(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/unpause")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/unpause");

    if(!instanceId)
        goto end;


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Accepted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_instanceId);

}

// Update an existing hypervisor hook
//
hook_t*
ArmAPI_v1UpdateHook(apiClient_t *apiClient, char * hookId , v1_create_hook_parameters_t * v1_create_hook_parameters )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/hooks/{hookId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/hooks/{hookId}");

    if(!hookId)
        goto end;


    // Path Params
    long sizeOfPathParams_hookId = strlen(hookId)+3 + strlen("{ hookId }");
    if(hookId == NULL) {
        goto end;
    }
    char* localVarToReplace_hookId = malloc(sizeOfPathParams_hookId);
    sprintf(localVarToReplace_hookId, "{%s}", "hookId");

    localVarPath = strReplace(localVarPath, localVarToReplace_hookId, hookId);



    // Body Param
    cJSON *localVarSingleItemJSON_v1_create_hook_parameters = NULL;
    if (v1_create_hook_parameters != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_v1_create_hook_parameters = v1_create_hook_parameters_convertToJSON(v1_create_hook_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_v1_create_hook_parameters);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Hook");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    hook_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = hook_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_hookId);
    if (localVarSingleItemJSON_v1_create_hook_parameters) {
        cJSON_Delete(localVarSingleItemJSON_v1_create_hook_parameters);
        localVarSingleItemJSON_v1_create_hook_parameters = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update a Project
//
project_t*
ArmAPI_v1UpdateProject(apiClient_t *apiClient, char * projectId , project_t * project )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}");

    if(!projectId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);



    // Body Param
    cJSON *localVarSingleItemJSON_project = NULL;
    if (project != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_project = project_convertToJSON(project);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_project);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    project_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = project_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_projectId);
    if (localVarSingleItemJSON_project) {
        cJSON_Delete(localVarSingleItemJSON_project);
        localVarSingleItemJSON_project = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Change Project Settings
//
void
ArmAPI_v1UpdateProjectSettings(apiClient_t *apiClient, char * projectId , project_settings_t * project_settings )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}/settings")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}/settings");

    if(!projectId)
        goto end;


    // Path Params
    long sizeOfPathParams_projectId = strlen(projectId)+3 + strlen("{ projectId }");
    if(projectId == NULL) {
        goto end;
    }
    char* localVarToReplace_projectId = malloc(sizeOfPathParams_projectId);
    sprintf(localVarToReplace_projectId, "{%s}", "projectId");

    localVarPath = strReplace(localVarPath, localVarToReplace_projectId, projectId);



    // Body Param
    cJSON *localVarSingleItemJSON_project_settings = NULL;
    if (project_settings != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_project_settings = project_settings_convertToJSON(project_settings);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_project_settings);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_projectId);
    if (localVarSingleItemJSON_project_settings) {
        cJSON_Delete(localVarSingleItemJSON_project_settings);
        localVarSingleItemJSON_project_settings = NULL;
    }
    free(localVarBodyParameters);

}

// Upload Image Data
//
// If the active project has enough remaining quota, updates an Image with the contents of the request body.
//
image_t*
ArmAPI_v1UploadImageData(apiClient_t *apiClient, char * imageId , char * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/images/{imageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/images/{imageId}");

    if(!imageId)
        goto end;


    // Path Params
    long sizeOfPathParams_imageId = strlen(imageId)+3 + strlen("{ imageId }");
    if(imageId == NULL) {
        goto end;
    }
    char* localVarToReplace_imageId = malloc(sizeOfPathParams_imageId);
    sprintf(localVarToReplace_imageId, "{%s}", "imageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_imageId, imageId);



    // Body Param
    localVarBodyParameters = strdup(body);
    localVarBodyLength = strlen(localVarBodyParameters);
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"binary"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","application/json");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    //nonprimitive not container
    image_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_imageId);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve the list of allowed domains for all Web Player sessions
//
web_player_session_t*
ArmAPI_v1WebPlayerAllowedDomains(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/webplayer/allowedDomains")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/webplayer/allowedDomains");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    web_player_session_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = web_player_session_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Web Player Session
//
web_player_session_t*
ArmAPI_v1WebPlayerCreateSession(apiClient_t *apiClient, web_player_create_session_request_t * web_player_create_session_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/webplayer")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/webplayer");





    // Body Param
    cJSON *localVarSingleItemJSON_web_player_create_session_request = NULL;
    if (web_player_create_session_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_web_player_create_session_request = web_player_create_session_request_convertToJSON(web_player_create_session_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_web_player_create_session_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    web_player_session_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = web_player_session_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_web_player_create_session_request) {
        cJSON_Delete(localVarSingleItemJSON_web_player_create_session_request);
        localVarSingleItemJSON_web_player_create_session_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Tear down a Web Player Session
//
void
ArmAPI_v1WebPlayerDestroySession(apiClient_t *apiClient, char * sessionId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/webplayer/{sessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/webplayer/{sessionId}");

    if(!sessionId)
        goto end;


    // Path Params
    long sizeOfPathParams_sessionId = strlen(sessionId)+3 + strlen("{ sessionId }");
    if(sessionId == NULL) {
        goto end;
    }
    char* localVarToReplace_sessionId = malloc(sizeOfPathParams_sessionId);
    sprintf(localVarToReplace_sessionId, "{%s}", "sessionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_sessionId, sessionId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_sessionId);

}

// List all Web Player sessions
//
list_t*
ArmAPI_v1WebPlayerListSessions(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/webplayer")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/webplayer");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, ArmAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( ArmAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Web Player Session Information
//
web_player_session_t*
ArmAPI_v1WebPlayerSessionInfo(apiClient_t *apiClient, char * sessionId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    long sizeOfPath = strlen("/v1/webplayer/{sessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/webplayer/{sessionId}");

    if(!sessionId)
        goto end;


    // Path Params
    long sizeOfPathParams_sessionId = strlen(sessionId)+3 + strlen("{ sessionId }");
    if(sessionId == NULL) {
        goto end;
    }
    char* localVarToReplace_sessionId = malloc(sizeOfPathParams_sessionId);
    sprintf(localVarToReplace_sessionId, "{%s}", "sessionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_sessionId, sessionId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    web_player_session_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = web_player_session_parseFromJSON(ArmAPIlocalVarJSON);
        cJSON_Delete(ArmAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_sessionId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

