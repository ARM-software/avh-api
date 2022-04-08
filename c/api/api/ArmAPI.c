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


// Log In
//
token_t*
ArmAPI_v1AuthLogin(apiClient_t *apiClient, object_t * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/auth/login")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/auth/login");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","User Authorization");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    token_t *elementToReturn = token_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
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
ArmAPI_v1CreateImage(apiClient_t *apiClient, char * type , arm_api_v1CreateImage_encoding_e encoding , char * name , char * project , char * instance , binary_t* file )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

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
    if (encoding != NULL)
    {
        keyForm_encoding = strdup("encoding");
        valueForm_encoding = (encoding);
        keyPairForm_encoding = keyValuePair_create(keyForm_encoding,(void *)valueForm_encoding);
        list_addElement(localVarFormParameters,keyPairForm_encoding);
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
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","application/json");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    image_t *elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
        free(valueForm_encoding);
        valueForm_encoding = NULL;
    }
    free(keyPairForm_encoding);
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

    // create the path
    long sizeOfPath = strlen("/v1/instances")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances");




    // Body Param
    cJSON *localVarSingleItemJSON_instance_create_options = NULL;
    if (instance_create_options != NULL)
    {
        //string
        localVarSingleItemJSON_instance_create_options = instance_create_options_convertToJSON(instance_create_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_instance_create_options);
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
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 400) {
        printf("%s\n","Bad Request");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    instance_return_t *elementToReturn = instance_return_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots");


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
        //string
        localVarSingleItemJSON_snapshot_creation_options = snapshot_creation_options_convertToJSON(snapshot_creation_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_snapshot_creation_options);
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
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    snapshot_t *elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

    // create the path
    long sizeOfPath = strlen("/v2/images/{imageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/images/{imageId}");


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
                    "DELETE");

    if (apiClient->response_code == 204) {
        printf("%s\n","Success");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}");


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
                    "DELETE");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
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

    // create the path
    long sizeOfPath = strlen("/v1/images/{imageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/images/{imageId}");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","application/json");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    image_t *elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    image_t *elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    instance_t *elementToReturn = instance_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/console")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/console");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","OK");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    instance_console_endpoint_t *elementToReturn = instance_console_endpoint_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
object_t*
ArmAPI_v1GetInstancePeripherals(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/peripherals")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/peripherals");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Current Peripherals State");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
instance_state_t*
ArmAPI_v1GetInstanceState(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/state")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/state");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Current Instance State");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    instance_state_t *elementToReturn = instance_state_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
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

    // create the path
    long sizeOfPath = strlen("/v1/models/{model}/software")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/models/{model}/software");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Supported software loads for this model");
    }
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Supported device configurations");
    }
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
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

// Get Project
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

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","OK");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    project_t *elementToReturn = project_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

    // create the path
    long sizeOfPath = strlen("/v1/projects/{projectId}/instances")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/projects/{projectId}/instances");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Projects");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","No Projects Found");
    }
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
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

// Get Instance Snapshots
//
snapshot_t*
ArmAPI_v1GetSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    snapshot_t *elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
ArmAPI_v1GetSnapshots(apiClient_t *apiClient, char * instanceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots");


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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ArmAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
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

// Update Instance
//
object_t*
ArmAPI_v1PatchInstance(apiClient_t *apiClient, char * instanceId , object_t * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}");


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
                    "PATCH");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/pause")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/pause");


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
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
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
                    "GET");

    if (apiClient->response_code == 204) {
        printf("%s\n","API is ready for queries");
    }
    if (apiClient->response_code == 503) {
        printf("%s\n","API is not ready");
    }
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/reboot")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/reboot");


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
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
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

// Restore a Snapshot
//
void
ArmAPI_v1RestoreSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}/restore")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}/restore");


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
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
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

// Set Instance Peripherals
//
object_t*
ArmAPI_v1SetInstancePeripherals(apiClient_t *apiClient, char * instanceId , char * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/peripherals")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/peripherals");


    // Path Params
    long sizeOfPathParams_instanceId = strlen(instanceId)+3 + strlen("{ instanceId }");
    if(instanceId == NULL) {
        goto end;
    }
    char* localVarToReplace_instanceId = malloc(sizeOfPathParams_instanceId);
    sprintf(localVarToReplace_instanceId, "{%s}", "instanceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceId, instanceId);



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = char_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
                    "PUT");

    if (apiClient->response_code == 200) {
        printf("%s\n","Current Peripherals State");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/state")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/state");


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
        //string
        localVarSingleItemJSON_v1_set_state_body = v1_set_state_body_convertToJSON(v1_set_state_body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_v1_set_state_body);
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
                    "PUT");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 400) {
        printf("%s\n","Bad Request");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    if (apiClient->response_code == 409) {
        printf("%s\n","Conflict");
    }
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

// Delete a Snapshot
//
void
ArmAPI_v1SnapshotDelete(apiClient_t *apiClient, char * instanceId , char * snapshotId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}");


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
                    "DELETE");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
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

// Rename a Snapshot
//
snapshot_t*
ArmAPI_v1SnapshotRename(apiClient_t *apiClient, char * instanceId , char * snapshotId , snapshot_creation_options_t * snapshot_creation_options )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/snapshots/{snapshotId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/snapshots/{snapshotId}");


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
        //string
        localVarSingleItemJSON_snapshot_creation_options = snapshot_creation_options_convertToJSON(snapshot_creation_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_snapshot_creation_options);
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
                    "PATCH");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    snapshot_t *elementToReturn = snapshot_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/start")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/start");


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
        //string
        localVarSingleItemJSON_instance_start_options = instance_start_options_convertToJSON(instance_start_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_instance_start_options);
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
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    if (apiClient->response_code == 409) {
        printf("%s\n","Conflict");
    }
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/stop")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/stop");


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
        //string
        localVarSingleItemJSON_instance_stop_options = instance_stop_options_convertToJSON(instance_stop_options);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_instance_stop_options);
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
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    if (apiClient->response_code == 409) {
        printf("%s\n","Conflict");
    }
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

    // create the path
    long sizeOfPath = strlen("/v1/instances/{instanceId}/unpause")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/instances/{instanceId}/unpause");


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
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","Accepted");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
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

    // create the path
    long sizeOfPath = strlen("/v1/images/{imageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/images/{imageId}");


    // Path Params
    long sizeOfPathParams_imageId = strlen(imageId)+3 + strlen("{ imageId }");
    if(imageId == NULL) {
        goto end;
    }
    char* localVarToReplace_imageId = malloc(sizeOfPathParams_imageId);
    sprintf(localVarToReplace_imageId, "{%s}", "imageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_imageId, imageId);



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = char_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
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
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","application/json");
    }
    if (apiClient->response_code == 409) {
        printf("%s\n","Conflict");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    image_t *elementToReturn = image_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Log In
//
token_t*
ArmAPI_v1UsersLogin(apiClient_t *apiClient, credentials_t * credentials )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v1/users/login")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v1/users/login");




    // Body Param
    cJSON *localVarSingleItemJSON_credentials = NULL;
    if (credentials != NULL)
    {
        //string
        localVarSingleItemJSON_credentials = credentials_convertToJSON(credentials);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_credentials);
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
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","User Authorization");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","Forbidden");
    }
    //nonprimitive not container
    cJSON *ArmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    token_t *elementToReturn = token_parseFromJSON(ArmAPIlocalVarJSON);
    cJSON_Delete(ArmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if (localVarSingleItemJSON_credentials) {
        cJSON_Delete(localVarSingleItemJSON_credentials);
        localVarSingleItemJSON_credentials = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

