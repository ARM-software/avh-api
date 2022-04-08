# ArmAPI

All URIs are relative to *https://app.avh.arm.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ArmAPI_v1AuthLogin**](ArmAPI.md#ArmAPI_v1AuthLogin) | **POST** /v1/auth/login | Log In
[**ArmAPI_v1CreateImage**](ArmAPI.md#ArmAPI_v1CreateImage) | **POST** /v1/images | Create a new Image
[**ArmAPI_v1CreateInstance**](ArmAPI.md#ArmAPI_v1CreateInstance) | **POST** /v1/instances | Create Instance
[**ArmAPI_v1CreateSnapshot**](ArmAPI.md#ArmAPI_v1CreateSnapshot) | **POST** /v1/instances/{instanceId}/snapshots | Create Instance Snapshot
[**ArmAPI_v1DeleteImage**](ArmAPI.md#ArmAPI_v1DeleteImage) | **DELETE** /v2/images/{imageId} | Delete Image
[**ArmAPI_v1DeleteInstance**](ArmAPI.md#ArmAPI_v1DeleteInstance) | **DELETE** /v1/instances/{instanceId} | Remove Instance
[**ArmAPI_v1GetImage**](ArmAPI.md#ArmAPI_v1GetImage) | **GET** /v1/images/{imageId} | Get Image Metadata
[**ArmAPI_v1GetImages**](ArmAPI.md#ArmAPI_v1GetImages) | **GET** /v1/images | Get all Images Metadata
[**ArmAPI_v1GetInstance**](ArmAPI.md#ArmAPI_v1GetInstance) | **GET** /v1/instances/{instanceId} | Get Instance
[**ArmAPI_v1GetInstanceConsole**](ArmAPI.md#ArmAPI_v1GetInstanceConsole) | **GET** /v1/instances/{instanceId}/console | Get console websocket URL
[**ArmAPI_v1GetInstancePeripherals**](ArmAPI.md#ArmAPI_v1GetInstancePeripherals) | **GET** /v1/instances/{instanceId}/peripherals | Get Instance Peripherals
[**ArmAPI_v1GetInstanceState**](ArmAPI.md#ArmAPI_v1GetInstanceState) | **GET** /v1/instances/{instanceId}/state | Get state of Instance
[**ArmAPI_v1GetInstances**](ArmAPI.md#ArmAPI_v1GetInstances) | **GET** /v1/instances | Get Instances
[**ArmAPI_v1GetModelSoftware**](ArmAPI.md#ArmAPI_v1GetModelSoftware) | **GET** /v1/models/{model}/software | Get Software for Model
[**ArmAPI_v1GetModels**](ArmAPI.md#ArmAPI_v1GetModels) | **GET** /v1/models | Get Supported Models
[**ArmAPI_v1GetProject**](ArmAPI.md#ArmAPI_v1GetProject) | **GET** /v1/projects/{projectId} | Get Project
[**ArmAPI_v1GetProjectInstances**](ArmAPI.md#ArmAPI_v1GetProjectInstances) | **GET** /v1/projects/{projectId}/instances | Get Instances in Project
[**ArmAPI_v1GetProjects**](ArmAPI.md#ArmAPI_v1GetProjects) | **GET** /v1/projects | Get Projects
[**ArmAPI_v1GetSnapshot**](ArmAPI.md#ArmAPI_v1GetSnapshot) | **GET** /v1/instances/{instanceId}/snapshots/{snapshotId} | Get Instance Snapshots
[**ArmAPI_v1GetSnapshots**](ArmAPI.md#ArmAPI_v1GetSnapshots) | **GET** /v1/instances/{instanceId}/snapshots | Get Instance Snapshots
[**ArmAPI_v1PatchInstance**](ArmAPI.md#ArmAPI_v1PatchInstance) | **PATCH** /v1/instances/{instanceId} | Update Instance
[**ArmAPI_v1PauseInstance**](ArmAPI.md#ArmAPI_v1PauseInstance) | **POST** /v1/instances/{instanceId}/pause | Pause an Instance
[**ArmAPI_v1Ready**](ArmAPI.md#ArmAPI_v1Ready) | **GET** /v1/ready | API Status
[**ArmAPI_v1RebootInstance**](ArmAPI.md#ArmAPI_v1RebootInstance) | **POST** /v1/instances/{instanceId}/reboot | Reboot an Instance
[**ArmAPI_v1RestoreSnapshot**](ArmAPI.md#ArmAPI_v1RestoreSnapshot) | **POST** /v1/instances/{instanceId}/snapshots/{snapshotId}/restore | Restore a Snapshot
[**ArmAPI_v1SetInstancePeripherals**](ArmAPI.md#ArmAPI_v1SetInstancePeripherals) | **PUT** /v1/instances/{instanceId}/peripherals | Set Instance Peripherals
[**ArmAPI_v1SetInstanceState**](ArmAPI.md#ArmAPI_v1SetInstanceState) | **PUT** /v1/instances/{instanceId}/state | Set state of Instance
[**ArmAPI_v1SnapshotDelete**](ArmAPI.md#ArmAPI_v1SnapshotDelete) | **DELETE** /v1/instances/{instanceId}/snapshots/{snapshotId} | Delete a Snapshot
[**ArmAPI_v1SnapshotRename**](ArmAPI.md#ArmAPI_v1SnapshotRename) | **PATCH** /v1/instances/{instanceId}/snapshots/{snapshotId} | Rename a Snapshot
[**ArmAPI_v1StartInstance**](ArmAPI.md#ArmAPI_v1StartInstance) | **POST** /v1/instances/{instanceId}/start | Start an Instance
[**ArmAPI_v1StopInstance**](ArmAPI.md#ArmAPI_v1StopInstance) | **POST** /v1/instances/{instanceId}/stop | Stop an Instance
[**ArmAPI_v1UnpauseInstance**](ArmAPI.md#ArmAPI_v1UnpauseInstance) | **POST** /v1/instances/{instanceId}/unpause | Unpause an Instance
[**ArmAPI_v1UploadImageData**](ArmAPI.md#ArmAPI_v1UploadImageData) | **POST** /v1/images/{imageId} | Upload Image Data
[**ArmAPI_v1UsersLogin**](ArmAPI.md#ArmAPI_v1UsersLogin) | **POST** /v1/users/login | Log In


# **ArmAPI_v1AuthLogin**
```c
// Log In
//
token_t* ArmAPI_v1AuthLogin(apiClient_t *apiClient, object_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[object_t](object.md) \*** | Authorization data ( Credentials|ApiToken|Token ) | 

### Return type

[token_t](token.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1CreateImage**
```c
// Create a new Image
//
image_t* ArmAPI_v1CreateImage(apiClient_t *apiClient, char * type, arm_api_v1CreateImage_encoding_e encoding, char * name, char * project, char * instance, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **char \*** | Image type | 
**encoding** | **arm_api_v1CreateImage_encoding_e** | How the file is stored | 
**name** | **char \*** | Image name | [optional] 
**project** | **char \*** | Project ID | [optional] 
**instance** | **char \*** | Instance ID | [optional] 
**file** | **binary_t*** | Optionally the actual file | [optional] 

### Return type

[image_t](image.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1CreateInstance**
```c
// Create Instance
//
instance_return_t* ArmAPI_v1CreateInstance(apiClient_t *apiClient, instance_create_options_t * instance_create_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instance_create_options** | **[instance_create_options_t](instance_create_options.md) \*** | The vm definition to create | 

### Return type

[instance_return_t](instance_return.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1CreateSnapshot**
```c
// Create Instance Snapshot
//
snapshot_t* ArmAPI_v1CreateSnapshot(apiClient_t *apiClient, char * instanceId, snapshot_creation_options_t * snapshot_creation_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**snapshot_creation_options** | **[snapshot_creation_options_t](snapshot_creation_options.md) \*** |  | 

### Return type

[snapshot_t](snapshot.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1DeleteImage**
```c
// Delete Image
//
void ArmAPI_v1DeleteImage(apiClient_t *apiClient, char * imageId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**imageId** | **char \*** | Image ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1DeleteInstance**
```c
// Remove Instance
//
void ArmAPI_v1DeleteInstance(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetImage**
```c
// Get Image Metadata
//
image_t* ArmAPI_v1GetImage(apiClient_t *apiClient, char * imageId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**imageId** | **char \*** | Image ID - uuid | 

### Return type

[image_t](image.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetImages**
```c
// Get all Images Metadata
//
image_t* ArmAPI_v1GetImages(apiClient_t *apiClient, char * project);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**project** | **char \*** | Optionally filter by project - uuid | [optional] 

### Return type

[image_t](image.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstance**
```c
// Get Instance
//
instance_t* ArmAPI_v1GetInstance(apiClient_t *apiClient, char * instanceId, list_t * returnAttr);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID | 
**returnAttr** | **[list_t](char.md) \*** | Attributes to include in instance return | [optional] 

### Return type

[instance_t](instance.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstanceConsole**
```c
// Get console websocket URL
//
instance_console_endpoint_t* ArmAPI_v1GetInstanceConsole(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[instance_console_endpoint_t](instance_console_endpoint.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstancePeripherals**
```c
// Get Instance Peripherals
//
object_t* ArmAPI_v1GetInstancePeripherals(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[object_t](object.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstanceState**
```c
// Get state of Instance
//
instance_state_t* ArmAPI_v1GetInstanceState(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[instance_state_t](instance_state.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstances**
```c
// Get Instances
//
list_t* ArmAPI_v1GetInstances(apiClient_t *apiClient, char * name, list_t * returnAttr);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Optionally filter by project name | [optional] 
**returnAttr** | **[list_t](char.md) \*** | Attributes to include in instance return | [optional] 

### Return type

[list_t](instance.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetModelSoftware**
```c
// Get Software for Model
//
list_t* ArmAPI_v1GetModelSoftware(apiClient_t *apiClient, char * model);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**model** | **char \*** | Model to list available software for | 

### Return type

[list_t](firmware.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetModels**
```c
// Get Supported Models
//
list_t* ArmAPI_v1GetModels(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](model.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetProject**
```c
// Get Project
//
project_t* ArmAPI_v1GetProject(apiClient_t *apiClient, char * projectId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 

### Return type

[project_t](project.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetProjectInstances**
```c
// Get Instances in Project
//
list_t* ArmAPI_v1GetProjectInstances(apiClient_t *apiClient, char * projectId, char * name, list_t * returnAttr);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**name** | **char \*** | Filter by project name | [optional] 
**returnAttr** | **[list_t](char.md) \*** | Attributes to include in instance return | [optional] 

### Return type

[list_t](instance.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetProjects**
```c
// Get Projects
//
list_t* ArmAPI_v1GetProjects(apiClient_t *apiClient, char * name, int ids_only);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Filter by project name | [optional] 
**ids_only** | **int** | Only include id of project in results | [optional] 

### Return type

[list_t](project.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetSnapshot**
```c
// Get Instance Snapshots
//
snapshot_t* ArmAPI_v1GetSnapshot(apiClient_t *apiClient, char * instanceId, char * snapshotId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**snapshotId** | **char \*** | Snapshot ID - uuid | 

### Return type

[snapshot_t](snapshot.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetSnapshots**
```c
// Get Instance Snapshots
//
list_t* ArmAPI_v1GetSnapshots(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[list_t](snapshot.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1PatchInstance**
```c
// Update Instance
//
object_t* ArmAPI_v1PatchInstance(apiClient_t *apiClient, char * instanceId, object_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[object_t](object.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1PauseInstance**
```c
// Pause an Instance
//
void ArmAPI_v1PauseInstance(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1Ready**
```c
// API Status
//
// Check if  API is ready for queries
//
void ArmAPI_v1Ready(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1RebootInstance**
```c
// Reboot an Instance
//
void ArmAPI_v1RebootInstance(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1RestoreSnapshot**
```c
// Restore a Snapshot
//
void ArmAPI_v1RestoreSnapshot(apiClient_t *apiClient, char * instanceId, char * snapshotId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**snapshotId** | **char \*** | Snapshot ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1SetInstancePeripherals**
```c
// Set Instance Peripherals
//
object_t* ArmAPI_v1SetInstancePeripherals(apiClient_t *apiClient, char * instanceId, char * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**body** | **char \*** | New peripherals state | 

### Return type

[object_t](object.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1SetInstanceState**
```c
// Set state of Instance
//
void ArmAPI_v1SetInstanceState(apiClient_t *apiClient, char * instanceId, v1_set_state_body_t * v1_set_state_body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**v1_set_state_body** | **[v1_set_state_body_t](v1_set_state_body.md) \*** | Desired State | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1SnapshotDelete**
```c
// Delete a Snapshot
//
void ArmAPI_v1SnapshotDelete(apiClient_t *apiClient, char * instanceId, char * snapshotId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**snapshotId** | **char \*** | Snapshot ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1SnapshotRename**
```c
// Rename a Snapshot
//
snapshot_t* ArmAPI_v1SnapshotRename(apiClient_t *apiClient, char * instanceId, char * snapshotId, snapshot_creation_options_t * snapshot_creation_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**snapshotId** | **char \*** | Snapshot ID - uuid | 
**snapshot_creation_options** | **[snapshot_creation_options_t](snapshot_creation_options.md) \*** |  | 

### Return type

[snapshot_t](snapshot.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1StartInstance**
```c
// Start an Instance
//
void ArmAPI_v1StartInstance(apiClient_t *apiClient, char * instanceId, instance_start_options_t * instance_start_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**instance_start_options** | **[instance_start_options_t](instance_start_options.md) \*** | Start options | [optional] 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1StopInstance**
```c
// Stop an Instance
//
void ArmAPI_v1StopInstance(apiClient_t *apiClient, char * instanceId, instance_stop_options_t * instance_stop_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**instance_stop_options** | **[instance_stop_options_t](instance_stop_options.md) \*** | Stop options | [optional] 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1UnpauseInstance**
```c
// Unpause an Instance
//
void ArmAPI_v1UnpauseInstance(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1UploadImageData**
```c
// Upload Image Data
//
// If the active project has enough remaining quota, updates an Image with the contents of the request body.
//
image_t* ArmAPI_v1UploadImageData(apiClient_t *apiClient, char * imageId, char * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**imageId** | **char \*** | Image ID - uuid | 
**body** | **char \*** | Uploaded Image | 

### Return type

[image_t](image.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: binary
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1UsersLogin**
```c
// Log In
//
token_t* ArmAPI_v1UsersLogin(apiClient_t *apiClient, credentials_t * credentials);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**credentials** | **[credentials_t](credentials.md) \*** | Authorization data | 

### Return type

[token_t](token.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

