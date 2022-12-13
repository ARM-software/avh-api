# ArmAPI

All URIs are relative to *https://app.avh.arm.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ArmAPI_trialStatus**](ArmAPI.md#ArmAPI_trialStatus) | **GET** /v1/billing/trial-status/{trialEmail} | Get Trial Status
[**ArmAPI_v1AddProjectKey**](ArmAPI.md#ArmAPI_v1AddProjectKey) | **POST** /v1/projects/{projectId}/keys | Add Project Authorized Key
[**ArmAPI_v1AddTeamRoleToProject**](ArmAPI.md#ArmAPI_v1AddTeamRoleToProject) | **PUT** /v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId} | Add team role to project
[**ArmAPI_v1AddUserRoleToProject**](ArmAPI.md#ArmAPI_v1AddUserRoleToProject) | **PUT** /v1/roles/projects/{projectId}/users/{userId}/roles/{roleId} | Add user role to project
[**ArmAPI_v1AddUserToTeam**](ArmAPI.md#ArmAPI_v1AddUserToTeam) | **PUT** /v1/teams/{teamId}/users/{userId} | Add user to team
[**ArmAPI_v1AuthLogin**](ArmAPI.md#ArmAPI_v1AuthLogin) | **POST** /v1/auth/login | Log In
[**ArmAPI_v1BtracePreauthorize**](ArmAPI.md#ArmAPI_v1BtracePreauthorize) | **GET** /v1/instances/{instanceId}/btrace-authorize | Pre-authorize an btrace download
[**ArmAPI_v1ClearCoreTrace**](ArmAPI.md#ArmAPI_v1ClearCoreTrace) | **DELETE** /v1/instances/{instanceId}/strace | Clear CoreTrace logs
[**ArmAPI_v1ClearHyperTrace**](ArmAPI.md#ArmAPI_v1ClearHyperTrace) | **DELETE** /v1/instances/{instanceId}/btrace | Clear HyperTrace logs
[**ArmAPI_v1ClearHyperTraceHooks**](ArmAPI.md#ArmAPI_v1ClearHyperTraceHooks) | **POST** /v1/instances/{instanceId}/hooks/clear | Clear Hooks on an instance
[**ArmAPI_v1ClearInstancePanics**](ArmAPI.md#ArmAPI_v1ClearInstancePanics) | **DELETE** /v1/instances/{instanceId}/panics | Clear Panics
[**ArmAPI_v1CreateHook**](ArmAPI.md#ArmAPI_v1CreateHook) | **POST** /v1/instances/{instanceId}/hooks | Create hypervisor hook for Instance
[**ArmAPI_v1CreateImage**](ArmAPI.md#ArmAPI_v1CreateImage) | **POST** /v1/images | Create a new Image
[**ArmAPI_v1CreateInstance**](ArmAPI.md#ArmAPI_v1CreateInstance) | **POST** /v1/instances | Create Instance
[**ArmAPI_v1CreateProject**](ArmAPI.md#ArmAPI_v1CreateProject) | **POST** /v1/projects | Create a Project
[**ArmAPI_v1CreateSnapshot**](ArmAPI.md#ArmAPI_v1CreateSnapshot) | **POST** /v1/instances/{instanceId}/snapshots | Create Instance Snapshot
[**ArmAPI_v1CreateSubscriberInvite**](ArmAPI.md#ArmAPI_v1CreateSubscriberInvite) | **POST** /v1/billing/invites | Create Subscriber Invite
[**ArmAPI_v1DeleteHook**](ArmAPI.md#ArmAPI_v1DeleteHook) | **DELETE** /v1/hooks/{hookId} | Delete an existing hypervisor hook
[**ArmAPI_v1DeleteImage**](ArmAPI.md#ArmAPI_v1DeleteImage) | **DELETE** /v2/images/{imageId} | Delete Image
[**ArmAPI_v1DeleteInstance**](ArmAPI.md#ArmAPI_v1DeleteInstance) | **DELETE** /v1/instances/{instanceId} | Remove Instance
[**ArmAPI_v1DeleteInstanceSnapshot**](ArmAPI.md#ArmAPI_v1DeleteInstanceSnapshot) | **DELETE** /v1/instances/{instanceId}/snapshots/{snapshotId} | Delete a Snapshot
[**ArmAPI_v1DeleteProject**](ArmAPI.md#ArmAPI_v1DeleteProject) | **DELETE** /v1/projects/{projectId} | Delete a Project
[**ArmAPI_v1DeleteSnapshot**](ArmAPI.md#ArmAPI_v1DeleteSnapshot) | **DELETE** /v1/snapshots/{snapshotId} | Delete a Snapshot
[**ArmAPI_v1DisableExposePort**](ArmAPI.md#ArmAPI_v1DisableExposePort) | **POST** /v1/instances/{instanceId}/exposeport/disable | Disable an exposed port on an instance for device access.
[**ArmAPI_v1EnableExposePort**](ArmAPI.md#ArmAPI_v1EnableExposePort) | **POST** /v1/instances/{instanceId}/exposeport/enable | Enable an exposed port on an instance for device access.
[**ArmAPI_v1ExecuteHyperTraceHooks**](ArmAPI.md#ArmAPI_v1ExecuteHyperTraceHooks) | **POST** /v1/instances/{instanceId}/hooks/execute | Execute Hooks on an instance
[**ArmAPI_v1GetHookById**](ArmAPI.md#ArmAPI_v1GetHookById) | **GET** /v1/hooks/{hookId} | Get hypervisor hook by id
[**ArmAPI_v1GetHooks**](ArmAPI.md#ArmAPI_v1GetHooks) | **GET** /v1/instances/{instanceId}/hooks | Get all hypervisor hooks for Instance
[**ArmAPI_v1GetImage**](ArmAPI.md#ArmAPI_v1GetImage) | **GET** /v1/images/{imageId} | Get Image Metadata
[**ArmAPI_v1GetImages**](ArmAPI.md#ArmAPI_v1GetImages) | **GET** /v1/images | Get all Images Metadata
[**ArmAPI_v1GetInstance**](ArmAPI.md#ArmAPI_v1GetInstance) | **GET** /v1/instances/{instanceId} | Get Instance
[**ArmAPI_v1GetInstanceConsole**](ArmAPI.md#ArmAPI_v1GetInstanceConsole) | **GET** /v1/instances/{instanceId}/console | Get console websocket URL
[**ArmAPI_v1GetInstanceConsoleLog**](ArmAPI.md#ArmAPI_v1GetInstanceConsoleLog) | **GET** /v1/instances/{instanceId}/consoleLog | Get Console Log
[**ArmAPI_v1GetInstanceGpios**](ArmAPI.md#ArmAPI_v1GetInstanceGpios) | **GET** /v1/instances/{instanceId}/gpios | Get Instance GPIOs
[**ArmAPI_v1GetInstancePanics**](ArmAPI.md#ArmAPI_v1GetInstancePanics) | **GET** /v1/instances/{instanceId}/panics | Get Panics
[**ArmAPI_v1GetInstancePeripherals**](ArmAPI.md#ArmAPI_v1GetInstancePeripherals) | **GET** /v1/instances/{instanceId}/peripherals | Get Instance Peripherals
[**ArmAPI_v1GetInstanceQuickConnectCommand**](ArmAPI.md#ArmAPI_v1GetInstanceQuickConnectCommand) | **GET** /v1/instances/{instanceId}/quickConnectCommand | Recommended SSH Command for Quick Connect
[**ArmAPI_v1GetInstanceScreenshot**](ArmAPI.md#ArmAPI_v1GetInstanceScreenshot) | **GET** /v1/instances/{instanceId}/screenshot.{format} | Get Instance Screenshot
[**ArmAPI_v1GetInstanceSnapshot**](ArmAPI.md#ArmAPI_v1GetInstanceSnapshot) | **GET** /v1/instances/{instanceId}/snapshots/{snapshotId} | Get Instance Snapshot
[**ArmAPI_v1GetInstanceSnapshots**](ArmAPI.md#ArmAPI_v1GetInstanceSnapshots) | **GET** /v1/instances/{instanceId}/snapshots | Get Instance Snapshots
[**ArmAPI_v1GetInstanceState**](ArmAPI.md#ArmAPI_v1GetInstanceState) | **GET** /v1/instances/{instanceId}/state | Get state of Instance
[**ArmAPI_v1GetInstances**](ArmAPI.md#ArmAPI_v1GetInstances) | **GET** /v1/instances | Get Instances
[**ArmAPI_v1GetModelSoftware**](ArmAPI.md#ArmAPI_v1GetModelSoftware) | **GET** /v1/models/{model}/software | Get Software for Model
[**ArmAPI_v1GetModels**](ArmAPI.md#ArmAPI_v1GetModels) | **GET** /v1/models | Get Supported Models
[**ArmAPI_v1GetProject**](ArmAPI.md#ArmAPI_v1GetProject) | **GET** /v1/projects/{projectId} | Get a Project
[**ArmAPI_v1GetProjectInstances**](ArmAPI.md#ArmAPI_v1GetProjectInstances) | **GET** /v1/projects/{projectId}/instances | Get Instances in Project
[**ArmAPI_v1GetProjectKeys**](ArmAPI.md#ArmAPI_v1GetProjectKeys) | **GET** /v1/projects/{projectId}/keys | Get Project Authorized Keys
[**ArmAPI_v1GetProjectVpnConfig**](ArmAPI.md#ArmAPI_v1GetProjectVpnConfig) | **GET** /v1/projects/{projectId}/vpnconfig/{format} | Get Project VPN Configuration
[**ArmAPI_v1GetProjects**](ArmAPI.md#ArmAPI_v1GetProjects) | **GET** /v1/projects | Get Projects
[**ArmAPI_v1GetSnapshot**](ArmAPI.md#ArmAPI_v1GetSnapshot) | **GET** /v1/snapshots/{snapshotId} | Get Snapshot
[**ArmAPI_v1Kcrange**](ArmAPI.md#ArmAPI_v1Kcrange) | **GET** /v1/instances/{instanceId}/btrace-kcrange | Get Kernel extension ranges
[**ArmAPI_v1ListThreads**](ArmAPI.md#ArmAPI_v1ListThreads) | **GET** /v1/instances/{instanceId}/strace/thread-list | Get Running Threads (CoreTrace)
[**ArmAPI_v1MediaPlay**](ArmAPI.md#ArmAPI_v1MediaPlay) | **POST** /v1/instances/{instanceId}/media/play | Start playing media
[**ArmAPI_v1MediaStop**](ArmAPI.md#ArmAPI_v1MediaStop) | **POST** /v1/instances/{instanceId}/media/stop | Stop playing media
[**ArmAPI_v1PatchInstance**](ArmAPI.md#ArmAPI_v1PatchInstance) | **PATCH** /v1/instances/{instanceId} | Update Instance
[**ArmAPI_v1PauseInstance**](ArmAPI.md#ArmAPI_v1PauseInstance) | **POST** /v1/instances/{instanceId}/pause | Pause an Instance
[**ArmAPI_v1PostInstanceInput**](ArmAPI.md#ArmAPI_v1PostInstanceInput) | **POST** /v1/instances/{instanceId}/input | Provide Instance Input
[**ArmAPI_v1Ready**](ArmAPI.md#ArmAPI_v1Ready) | **GET** /v1/ready | API Status
[**ArmAPI_v1RebootInstance**](ArmAPI.md#ArmAPI_v1RebootInstance) | **POST** /v1/instances/{instanceId}/reboot | Reboot an Instance
[**ArmAPI_v1RemoveProjectKey**](ArmAPI.md#ArmAPI_v1RemoveProjectKey) | **DELETE** /v1/projects/{projectId}/keys/{keyId} | Delete Project Authorized Key
[**ArmAPI_v1RemoveTeamRoleFromProject**](ArmAPI.md#ArmAPI_v1RemoveTeamRoleFromProject) | **DELETE** /v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId} | Remove team role from project
[**ArmAPI_v1RemoveUserFromTeam**](ArmAPI.md#ArmAPI_v1RemoveUserFromTeam) | **DELETE** /v1/teams/{teamId}/users/{userId} | Remove user from team
[**ArmAPI_v1RemoveUserRoleFromProject**](ArmAPI.md#ArmAPI_v1RemoveUserRoleFromProject) | **DELETE** /v1/roles/projects/{projectId}/users/{userId}/roles/{roleId} | Remove user role from project
[**ArmAPI_v1RenameInstanceSnapshot**](ArmAPI.md#ArmAPI_v1RenameInstanceSnapshot) | **PATCH** /v1/instances/{instanceId}/snapshots/{snapshotId} | Rename a Snapshot
[**ArmAPI_v1RestoreInstanceSnapshot**](ArmAPI.md#ArmAPI_v1RestoreInstanceSnapshot) | **POST** /v1/instances/{instanceId}/snapshots/{snapshotId}/restore | Restore a Snapshot
[**ArmAPI_v1Roles**](ArmAPI.md#ArmAPI_v1Roles) | **GET** /v1/roles | Get all roles
[**ArmAPI_v1SetInstanceGpios**](ArmAPI.md#ArmAPI_v1SetInstanceGpios) | **PUT** /v1/instances/{instanceId}/gpios | Set Instance GPIOs
[**ArmAPI_v1SetInstancePeripherals**](ArmAPI.md#ArmAPI_v1SetInstancePeripherals) | **PUT** /v1/instances/{instanceId}/peripherals | Set Instance Peripherals
[**ArmAPI_v1SetInstanceState**](ArmAPI.md#ArmAPI_v1SetInstanceState) | **PUT** /v1/instances/{instanceId}/state | Set state of Instance
[**ArmAPI_v1SnapshotRename**](ArmAPI.md#ArmAPI_v1SnapshotRename) | **PATCH** /v1/snapshots/{snapshotId} | Rename a Snapshot
[**ArmAPI_v1StartCoreTrace**](ArmAPI.md#ArmAPI_v1StartCoreTrace) | **POST** /v1/instances/{instanceId}/strace/enable | Start CoreTrace on an instance
[**ArmAPI_v1StartHyperTrace**](ArmAPI.md#ArmAPI_v1StartHyperTrace) | **POST** /v1/instances/{instanceId}/btrace/enable | Start HyperTrace on an instance
[**ArmAPI_v1StartInstance**](ArmAPI.md#ArmAPI_v1StartInstance) | **POST** /v1/instances/{instanceId}/start | Start an Instance
[**ArmAPI_v1StartNetworkMonitor**](ArmAPI.md#ArmAPI_v1StartNetworkMonitor) | **POST** /v1/instances/{instanceId}/sslsplit/enable | Start Network Monitor on an instance.
[**ArmAPI_v1StopCoreTrace**](ArmAPI.md#ArmAPI_v1StopCoreTrace) | **POST** /v1/instances/{instanceId}/strace/disable | Stop CoreTrace on an instance.
[**ArmAPI_v1StopHyperTrace**](ArmAPI.md#ArmAPI_v1StopHyperTrace) | **POST** /v1/instances/{instanceId}/btrace/disable | Stop HyperTrace on an instance.
[**ArmAPI_v1StopInstance**](ArmAPI.md#ArmAPI_v1StopInstance) | **POST** /v1/instances/{instanceId}/stop | Stop an Instance
[**ArmAPI_v1StopNetworkMonitor**](ArmAPI.md#ArmAPI_v1StopNetworkMonitor) | **POST** /v1/instances/{instanceId}/sslsplit/disable | Stop Network Monitor on an instance.
[**ArmAPI_v1TeamChange**](ArmAPI.md#ArmAPI_v1TeamChange) | **PATCH** /v1/teams/{teamId} | Update team
[**ArmAPI_v1TeamCreate**](ArmAPI.md#ArmAPI_v1TeamCreate) | **POST** /v1/teams | Create team
[**ArmAPI_v1TeamDelete**](ArmAPI.md#ArmAPI_v1TeamDelete) | **DELETE** /v1/teams/{teamId} | Delete team
[**ArmAPI_v1Teams**](ArmAPI.md#ArmAPI_v1Teams) | **GET** /v1/teams | Get teams
[**ArmAPI_v1UnpauseInstance**](ArmAPI.md#ArmAPI_v1UnpauseInstance) | **POST** /v1/instances/{instanceId}/unpause | Unpause an Instance
[**ArmAPI_v1UpdateHook**](ArmAPI.md#ArmAPI_v1UpdateHook) | **PUT** /v1/hooks/{hookId} | Update an existing hypervisor hook
[**ArmAPI_v1UpdateProject**](ArmAPI.md#ArmAPI_v1UpdateProject) | **PATCH** /v1/projects/{projectId} | Update a Project
[**ArmAPI_v1UpdateProjectSettings**](ArmAPI.md#ArmAPI_v1UpdateProjectSettings) | **PATCH** /v1/projects/{projectId}/settings | Change Project Settings
[**ArmAPI_v1UploadImageData**](ArmAPI.md#ArmAPI_v1UploadImageData) | **POST** /v1/images/{imageId} | Upload Image Data
[**ArmAPI_v1WebPlayerAllowedDomains**](ArmAPI.md#ArmAPI_v1WebPlayerAllowedDomains) | **GET** /v1/webplayer/allowedDomains | Retrieve the list of allowed domains for all Web Player sessions
[**ArmAPI_v1WebPlayerCreateSession**](ArmAPI.md#ArmAPI_v1WebPlayerCreateSession) | **POST** /v1/webplayer | Create a new Web Player Session
[**ArmAPI_v1WebPlayerDestroySession**](ArmAPI.md#ArmAPI_v1WebPlayerDestroySession) | **DELETE** /v1/webplayer/{sessionId} | Tear down a Web Player Session
[**ArmAPI_v1WebPlayerListSessions**](ArmAPI.md#ArmAPI_v1WebPlayerListSessions) | **GET** /v1/webplayer | List all Web Player sessions
[**ArmAPI_v1WebPlayerSessionInfo**](ArmAPI.md#ArmAPI_v1WebPlayerSessionInfo) | **GET** /v1/webplayer/{sessionId} | Retrieve Web Player Session Information


# **ArmAPI_trialStatus**
```c
// Get Trial Status
//
// Allow users to check the trial status of an email.
//
object_t* ArmAPI_trialStatus(apiClient_t *apiClient, char * trialEmail);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**trialEmail** | **char \*** | Trial Email | 

### Return type

[object_t](object.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1AddProjectKey**
```c
// Add Project Authorized Key
//
char* ArmAPI_v1AddProjectKey(apiClient_t *apiClient, char * projectId, project_key_t * project_key);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**project_key** | **[project_key_t](project_key.md) \*** | Key to add | 

### Return type

char*



### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1AddTeamRoleToProject**
```c
// Add team role to project
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1AddTeamRoleToProject(apiClient_t *apiClient, char * projectId, char * teamId, char * roleId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**teamId** | **char \*** | Team ID - uuid | 
**roleId** | **char \*** | Role ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1AddUserRoleToProject**
```c
// Add user role to project
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1AddUserRoleToProject(apiClient_t *apiClient, char * projectId, char * userId, char * roleId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**userId** | **char \*** | User ID - uuid | 
**roleId** | **char \*** | Role ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1AddUserToTeam**
```c
// Add user to team
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1AddUserToTeam(apiClient_t *apiClient, char * teamId, char * userId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**teamId** | **char \*** | Team ID - uuid | 
**userId** | **char \*** | User ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1AuthLogin**
```c
// Log In
//
token_t* ArmAPI_v1AuthLogin(apiClient_t *apiClient, api_token_t * api_token);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_token** | **[api_token_t](api_token.md) \*** | Authorization Data | 

### Return type

[token_t](token.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1BtracePreauthorize**
```c
// Pre-authorize an btrace download
//
object_t* ArmAPI_v1BtracePreauthorize(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1ClearCoreTrace**
```c
// Clear CoreTrace logs
//
void ArmAPI_v1ClearCoreTrace(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1ClearHyperTrace**
```c
// Clear HyperTrace logs
//
void ArmAPI_v1ClearHyperTrace(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1ClearHyperTraceHooks**
```c
// Clear Hooks on an instance
//
void ArmAPI_v1ClearHyperTraceHooks(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1ClearInstancePanics**
```c
// Clear Panics
//
void ArmAPI_v1ClearInstancePanics(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1CreateHook**
```c
// Create hypervisor hook for Instance
//
hook_t* ArmAPI_v1CreateHook(apiClient_t *apiClient, char * instanceId, v1_create_hook_parameters_t * v1_create_hook_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**v1_create_hook_parameters** | **[v1_create_hook_parameters_t](v1_create_hook_parameters.md) \*** | application/json | 

### Return type

[hook_t](hook.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1CreateImage**
```c
// Create a new Image
//
image_t* ArmAPI_v1CreateImage(apiClient_t *apiClient, char * type, arm_api_v1CreateImage_encoding_e encoding, int encapsulated, char * name, char * project, char * instance, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **char \*** | Image type | 
**encoding** | **arm_api_v1CreateImage_encoding_e** | How the file is stored | 
**encapsulated** | **int** | set to false if the uploaded file is not encapsulated inside an outer zipfile | [optional] 
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

# **ArmAPI_v1CreateProject**
```c
// Create a Project
//
project_t* ArmAPI_v1CreateProject(apiClient_t *apiClient, project_t * project);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**project** | **[project_t](project.md) \*** | Project | 

### Return type

[project_t](project.md) *


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

# **ArmAPI_v1CreateSubscriberInvite**
```c
// Create Subscriber Invite
//
// Create Subscriber Invite
//
subscriber_invite_t* ArmAPI_v1CreateSubscriberInvite(apiClient_t *apiClient, subscriber_invite_t * subscriber_invite);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriber_invite** | **[subscriber_invite_t](subscriber_invite.md) \*** | Payload of Subscriber Invite | 

### Return type

[subscriber_invite_t](subscriber_invite.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1DeleteHook**
```c
// Delete an existing hypervisor hook
//
void ArmAPI_v1DeleteHook(apiClient_t *apiClient, char * hookId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**hookId** | **char \*** | Hook ID | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
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

# **ArmAPI_v1DeleteInstanceSnapshot**
```c
// Delete a Snapshot
//
void ArmAPI_v1DeleteInstanceSnapshot(apiClient_t *apiClient, char * instanceId, char * snapshotId);
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

# **ArmAPI_v1DeleteProject**
```c
// Delete a Project
//
void ArmAPI_v1DeleteProject(apiClient_t *apiClient, char * projectId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1DeleteSnapshot**
```c
// Delete a Snapshot
//
void ArmAPI_v1DeleteSnapshot(apiClient_t *apiClient, char * snapshotId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**snapshotId** | **char \*** | Snapshot ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1DisableExposePort**
```c
// Disable an exposed port on an instance for device access.
//
void ArmAPI_v1DisableExposePort(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1EnableExposePort**
```c
// Enable an exposed port on an instance for device access.
//
void ArmAPI_v1EnableExposePort(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1ExecuteHyperTraceHooks**
```c
// Execute Hooks on an instance
//
void ArmAPI_v1ExecuteHyperTraceHooks(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1GetHookById**
```c
// Get hypervisor hook by id
//
hook_t* ArmAPI_v1GetHookById(apiClient_t *apiClient, char * hookId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**hookId** | **char \*** | Hook Id | 

### Return type

[hook_t](hook.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetHooks**
```c
// Get all hypervisor hooks for Instance
//
list_t* ArmAPI_v1GetHooks(apiClient_t *apiClient, char * instanceId, double limit, double offset, arm_api_v1GetHooks_sort_e sort);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**limit** | **double** | limit for pagination results, defaults to 20 | [optional] 
**offset** | **double** | offset for pagination results, defaults to 0 | [optional] 
**sort** | **arm_api_v1GetHooks_sort_e** | sort ASC or DESC, defaults to DESC | [optional] 

### Return type

[list_t](hook.md) *


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

# **ArmAPI_v1GetInstanceConsoleLog**
```c
// Get Console Log
//
char* ArmAPI_v1GetInstanceConsoleLog(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

char*



### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstanceGpios**
```c
// Get Instance GPIOs
//
gpios_state_t* ArmAPI_v1GetInstanceGpios(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[gpios_state_t](gpios_state.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstancePanics**
```c
// Get Panics
//
list_t* ArmAPI_v1GetInstancePanics(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[list_t](object.md) *


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
peripherals_data_t* ArmAPI_v1GetInstancePeripherals(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[peripherals_data_t](peripherals_data.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstanceQuickConnectCommand**
```c
// Recommended SSH Command for Quick Connect
//
char* ArmAPI_v1GetInstanceQuickConnectCommand(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

char*



### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstanceScreenshot**
```c
// Get Instance Screenshot
//
binary_t** ArmAPI_v1GetInstanceScreenshot(apiClient_t *apiClient, char * instanceId, arm_api_v1GetInstanceScreenshot_format_e format, int scale);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**format** | **arm_api_v1GetInstanceScreenshot_format_e** | New peripherals state | 
**scale** | **int** | Screenshot scale 1:N | [optional] 

### Return type

binary_t**



### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: image/png, image/jpeg, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetInstanceSnapshot**
```c
// Get Instance Snapshot
//
snapshot_t* ArmAPI_v1GetInstanceSnapshot(apiClient_t *apiClient, char * instanceId, char * snapshotId);
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

# **ArmAPI_v1GetInstanceSnapshots**
```c
// Get Instance Snapshots
//
list_t* ArmAPI_v1GetInstanceSnapshots(apiClient_t *apiClient, char * instanceId);
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
**name** | **char \*** | Optionally filter by instance name | [optional] 
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
// Get a Project
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

# **ArmAPI_v1GetProjectKeys**
```c
// Get Project Authorized Keys
//
list_t* ArmAPI_v1GetProjectKeys(apiClient_t *apiClient, char * projectId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 

### Return type

[list_t](project_key.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1GetProjectVpnConfig**
```c
// Get Project VPN Configuration
//
char* ArmAPI_v1GetProjectVpnConfig(apiClient_t *apiClient, char * projectId, arm_api_v1GetProjectVpnConfig_format_e format);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**format** | **arm_api_v1GetProjectVpnConfig_format_e** | VPN Config format | 

### Return type

char*



### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/x-openvpn-profile, application/json

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
// Get Snapshot
//
snapshot_t* ArmAPI_v1GetSnapshot(apiClient_t *apiClient, char * snapshotId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**snapshotId** | **char \*** | Snapshot ID - uuid | 

### Return type

[snapshot_t](snapshot.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1Kcrange**
```c
// Get Kernel extension ranges
//
list_t* ArmAPI_v1Kcrange(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[list_t](kcrange.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1ListThreads**
```c
// Get Running Threads (CoreTrace)
//
list_t* ArmAPI_v1ListThreads(apiClient_t *apiClient, char * instanceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 

### Return type

[list_t](kernel_task.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1MediaPlay**
```c
// Start playing media
//
void ArmAPI_v1MediaPlay(apiClient_t *apiClient, char * instanceId, media_play_body_t * media_play_body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**media_play_body** | **[media_play_body_t](media_play_body.md) \*** | Request Body | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1MediaStop**
```c
// Stop playing media
//
void ArmAPI_v1MediaStop(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1PatchInstance**
```c
// Update Instance
//
instance_t* ArmAPI_v1PatchInstance(apiClient_t *apiClient, char * instanceId, patch_instance_options_t * patch_instance_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID | 
**patch_instance_options** | **[patch_instance_options_t](patch_instance_options.md) \*** |  | 

### Return type

[instance_t](instance.md) *


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

# **ArmAPI_v1PostInstanceInput**
```c
// Provide Instance Input
//
// Sends a touch or button event to the VM.  - Buttons (or keys) to be held during the input are specified as an array of strings, each string must be either a single ascii character or one of the following keywords:   - VM Buttons: finger, homeButton, holdButton, volumeUp, volumeDown, ringerSwitch, backButton, overviewButton   - Keyboard Buttons: again, alt, alterase, apostrophe, back, backslash, backspace, bassboost, bookmarks, bsp, calc, camera, cancel, caps, capslock, chat, close, closecd, comma, compose, computer, config, connect, copy, ctrl, cut, cyclewindows, dashboard, del, delete, deletefile, dot, down, edit, eject, ejectclose, email, end, enter, equal, esc, escape, exit, f1, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f2, f20, f21, f22, f23, f24, f3, f4, f5, f6, f7, f8, f9, fastfwd, file, finance, find, forward, front, grave, hangeul, hanja, help, henkan, home, homepage, hp, hrgn, ins, insert, iso, k102, kp0, kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9, kpasterisk, kpcomma, kpdot, kpenter, kpequal, kpjpcomma, kpleftparen, kpminus, kpplus, kpplusminus, kprightparen, kpslash, ktkn, ktknhrgn, left, leftalt, leftbrace, leftctrl, leftmeta, leftshift, linefeed, macro, mail, menu, meta, minus, move, msdos, muhenkan, mute, new, next, numlock, open, pagedown, pageup, paste, pause, pausecd, pgdn, pgup, phone, play, playcd, playpause, power, previous, print, prog1, prog2, prog3, prog4, props, question, record, redo, refresh, return, rewind, right, rightalt, rightbrace, rightctrl, rightmeta, rightshift, ro, rotate, scale, screenlock, scrolldown, scrolllock, scrollup, search, semicolon, sendfile, setup, shift, shop, slash, sleep, sound, space, sport, stop, stopcd, suspend, sysrq, tab, undo, up, voldown, volup, wakeup, www, xfer, yen, zkhk
//
int* ArmAPI_v1PostInstanceInput(apiClient_t *apiClient, char * instanceId, list_t * instance_input);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**instance_input** | **[list_t](instance_input.md) \*** | The input to send to the VM | 

### Return type

int*



### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
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

# **ArmAPI_v1RemoveProjectKey**
```c
// Delete Project Authorized Key
//
void ArmAPI_v1RemoveProjectKey(apiClient_t *apiClient, char * projectId, char * keyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**keyId** | **char \*** | Key ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1RemoveTeamRoleFromProject**
```c
// Remove team role from project
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1RemoveTeamRoleFromProject(apiClient_t *apiClient, char * projectId, char * teamId, char * roleId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**teamId** | **char \*** | Team ID - uuid | 
**roleId** | **char \*** | Role ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1RemoveUserFromTeam**
```c
// Remove user from team
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1RemoveUserFromTeam(apiClient_t *apiClient, char * teamId, char * userId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**teamId** | **char \*** | Team ID - uuid | 
**userId** | **char \*** | User ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1RemoveUserRoleFromProject**
```c
// Remove user role from project
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1RemoveUserRoleFromProject(apiClient_t *apiClient, char * projectId, char * userId, char * roleId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**userId** | **char \*** | User ID - uuid | 
**roleId** | **char \*** | Role ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1RenameInstanceSnapshot**
```c
// Rename a Snapshot
//
snapshot_t* ArmAPI_v1RenameInstanceSnapshot(apiClient_t *apiClient, char * instanceId, char * snapshotId, snapshot_creation_options_t * snapshot_creation_options);
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

# **ArmAPI_v1RestoreInstanceSnapshot**
```c
// Restore a Snapshot
//
void ArmAPI_v1RestoreInstanceSnapshot(apiClient_t *apiClient, char * instanceId, char * snapshotId);
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

# **ArmAPI_v1Roles**
```c
// Get all roles
//
// This endpoint is available for Enterprise accounts only
//
list_t* ArmAPI_v1Roles(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](role.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1SetInstanceGpios**
```c
// Set Instance GPIOs
//
gpios_state_t* ArmAPI_v1SetInstanceGpios(apiClient_t *apiClient, char * instanceId, gpios_state_t * gpios_state);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**gpios_state** | **[gpios_state_t](gpios_state.md) \*** | New GPIO state | 

### Return type

[gpios_state_t](gpios_state.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1SetInstancePeripherals**
```c
// Set Instance Peripherals
//
peripherals_data_t* ArmAPI_v1SetInstancePeripherals(apiClient_t *apiClient, char * instanceId, peripherals_data_t * peripherals_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**peripherals_data** | **[peripherals_data_t](peripherals_data.md) \*** | New peripherals state | 

### Return type

[peripherals_data_t](peripherals_data.md) *


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

# **ArmAPI_v1SnapshotRename**
```c
// Rename a Snapshot
//
snapshot_t* ArmAPI_v1SnapshotRename(apiClient_t *apiClient, char * snapshotId, snapshot_creation_options_t * snapshot_creation_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **ArmAPI_v1StartCoreTrace**
```c
// Start CoreTrace on an instance
//
void ArmAPI_v1StartCoreTrace(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1StartHyperTrace**
```c
// Start HyperTrace on an instance
//
void ArmAPI_v1StartHyperTrace(apiClient_t *apiClient, char * instanceId, btrace_enable_options_t * btrace_enable_options);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**instanceId** | **char \*** | Instance ID - uuid | 
**btrace_enable_options** | **[btrace_enable_options_t](btrace_enable_options.md) \*** |  | 

### Return type

void

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

# **ArmAPI_v1StartNetworkMonitor**
```c
// Start Network Monitor on an instance.
//
void ArmAPI_v1StartNetworkMonitor(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1StopCoreTrace**
```c
// Stop CoreTrace on an instance.
//
void ArmAPI_v1StopCoreTrace(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1StopHyperTrace**
```c
// Stop HyperTrace on an instance.
//
void ArmAPI_v1StopHyperTrace(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1StopNetworkMonitor**
```c
// Stop Network Monitor on an instance.
//
void ArmAPI_v1StopNetworkMonitor(apiClient_t *apiClient, char * instanceId);
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

# **ArmAPI_v1TeamChange**
```c
// Update team
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1TeamChange(apiClient_t *apiClient, char * teamId, create_team_t * create_team);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**teamId** | **char \*** | Team ID - uuid | 
**create_team** | **[create_team_t](create_team.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1TeamCreate**
```c
// Create team
//
// This endpoint is available for Enterprise accounts only
//
team_create_t* ArmAPI_v1TeamCreate(apiClient_t *apiClient, create_team_t * create_team);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**create_team** | **[create_team_t](create_team.md) \*** |  | 

### Return type

[team_create_t](team_create.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1TeamDelete**
```c
// Delete team
//
// This endpoint is available for Enterprise accounts only
//
void ArmAPI_v1TeamDelete(apiClient_t *apiClient, char * teamId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**teamId** | **char \*** | Team ID - uuid | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1Teams**
```c
// Get teams
//
// This endpoint is available for Enterprise accounts only
//
list_t* ArmAPI_v1Teams(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](team.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
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

# **ArmAPI_v1UpdateHook**
```c
// Update an existing hypervisor hook
//
hook_t* ArmAPI_v1UpdateHook(apiClient_t *apiClient, char * hookId, v1_create_hook_parameters_t * v1_create_hook_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**hookId** | **char \*** | Hook ID | 
**v1_create_hook_parameters** | **[v1_create_hook_parameters_t](v1_create_hook_parameters.md) \*** | application/json | 

### Return type

[hook_t](hook.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1UpdateProject**
```c
// Update a Project
//
project_t* ArmAPI_v1UpdateProject(apiClient_t *apiClient, char * projectId, project_t * project);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**project** | **[project_t](project.md) \*** | Updated Project Settings | 

### Return type

[project_t](project.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1UpdateProjectSettings**
```c
// Change Project Settings
//
void ArmAPI_v1UpdateProjectSettings(apiClient_t *apiClient, char * projectId, project_settings_t * project_settings);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**projectId** | **char \*** | Project ID - uuid | 
**project_settings** | **[project_settings_t](project_settings.md) \*** | New settings | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
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

# **ArmAPI_v1WebPlayerAllowedDomains**
```c
// Retrieve the list of allowed domains for all Web Player sessions
//
web_player_session_t* ArmAPI_v1WebPlayerAllowedDomains(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[web_player_session_t](web_player_session.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1WebPlayerCreateSession**
```c
// Create a new Web Player Session
//
web_player_session_t* ArmAPI_v1WebPlayerCreateSession(apiClient_t *apiClient, web_player_create_session_request_t * web_player_create_session_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**web_player_create_session_request** | **[web_player_create_session_request_t](web_player_create_session_request.md) \*** | Request Data | 

### Return type

[web_player_session_t](web_player_session.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1WebPlayerDestroySession**
```c
// Tear down a Web Player Session
//
void ArmAPI_v1WebPlayerDestroySession(apiClient_t *apiClient, char * sessionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sessionId** | **char \*** | Web Player Session identifier | 

### Return type

void

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1WebPlayerListSessions**
```c
// List all Web Player sessions
//
list_t* ArmAPI_v1WebPlayerListSessions(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](web_player_session.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ArmAPI_v1WebPlayerSessionInfo**
```c
// Retrieve Web Player Session Information
//
web_player_session_t* ArmAPI_v1WebPlayerSessionInfo(apiClient_t *apiClient, char * sessionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sessionId** | **char \*** | Web Player Session identifier | 

### Return type

[web_player_session_t](web_player_session.md) *


### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

