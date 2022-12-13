# AvhApi.ArmApi

All URIs are relative to *https://app.avh.arm.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**trialStatus**](ArmApi.md#trialStatus) | **GET** /v1/billing/trial-status/{trialEmail} | Get Trial Status
[**v1AddProjectKey**](ArmApi.md#v1AddProjectKey) | **POST** /v1/projects/{projectId}/keys | Add Project Authorized Key
[**v1AddTeamRoleToProject**](ArmApi.md#v1AddTeamRoleToProject) | **PUT** /v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId} | Add team role to project
[**v1AddUserRoleToProject**](ArmApi.md#v1AddUserRoleToProject) | **PUT** /v1/roles/projects/{projectId}/users/{userId}/roles/{roleId} | Add user role to project
[**v1AddUserToTeam**](ArmApi.md#v1AddUserToTeam) | **PUT** /v1/teams/{teamId}/users/{userId} | Add user to team
[**v1AuthLogin**](ArmApi.md#v1AuthLogin) | **POST** /v1/auth/login | Log In
[**v1BtracePreauthorize**](ArmApi.md#v1BtracePreauthorize) | **GET** /v1/instances/{instanceId}/btrace-authorize | Pre-authorize an btrace download
[**v1ClearCoreTrace**](ArmApi.md#v1ClearCoreTrace) | **DELETE** /v1/instances/{instanceId}/strace | Clear CoreTrace logs
[**v1ClearHyperTrace**](ArmApi.md#v1ClearHyperTrace) | **DELETE** /v1/instances/{instanceId}/btrace | Clear HyperTrace logs
[**v1ClearHyperTraceHooks**](ArmApi.md#v1ClearHyperTraceHooks) | **POST** /v1/instances/{instanceId}/hooks/clear | Clear Hooks on an instance
[**v1ClearInstancePanics**](ArmApi.md#v1ClearInstancePanics) | **DELETE** /v1/instances/{instanceId}/panics | Clear Panics
[**v1CreateHook**](ArmApi.md#v1CreateHook) | **POST** /v1/instances/{instanceId}/hooks | Create hypervisor hook for Instance
[**v1CreateImage**](ArmApi.md#v1CreateImage) | **POST** /v1/images | Create a new Image
[**v1CreateInstance**](ArmApi.md#v1CreateInstance) | **POST** /v1/instances | Create Instance
[**v1CreateProject**](ArmApi.md#v1CreateProject) | **POST** /v1/projects | Create a Project
[**v1CreateSnapshot**](ArmApi.md#v1CreateSnapshot) | **POST** /v1/instances/{instanceId}/snapshots | Create Instance Snapshot
[**v1CreateSubscriberInvite**](ArmApi.md#v1CreateSubscriberInvite) | **POST** /v1/billing/invites | Create Subscriber Invite
[**v1DeleteHook**](ArmApi.md#v1DeleteHook) | **DELETE** /v1/hooks/{hookId} | Delete an existing hypervisor hook
[**v1DeleteImage**](ArmApi.md#v1DeleteImage) | **DELETE** /v2/images/{imageId} | Delete Image
[**v1DeleteInstance**](ArmApi.md#v1DeleteInstance) | **DELETE** /v1/instances/{instanceId} | Remove Instance
[**v1DeleteInstanceSnapshot**](ArmApi.md#v1DeleteInstanceSnapshot) | **DELETE** /v1/instances/{instanceId}/snapshots/{snapshotId} | Delete a Snapshot
[**v1DeleteProject**](ArmApi.md#v1DeleteProject) | **DELETE** /v1/projects/{projectId} | Delete a Project
[**v1DeleteSnapshot**](ArmApi.md#v1DeleteSnapshot) | **DELETE** /v1/snapshots/{snapshotId} | Delete a Snapshot
[**v1DisableExposePort**](ArmApi.md#v1DisableExposePort) | **POST** /v1/instances/{instanceId}/exposeport/disable | Disable an exposed port on an instance for device access.
[**v1EnableExposePort**](ArmApi.md#v1EnableExposePort) | **POST** /v1/instances/{instanceId}/exposeport/enable | Enable an exposed port on an instance for device access.
[**v1ExecuteHyperTraceHooks**](ArmApi.md#v1ExecuteHyperTraceHooks) | **POST** /v1/instances/{instanceId}/hooks/execute | Execute Hooks on an instance
[**v1GetHookById**](ArmApi.md#v1GetHookById) | **GET** /v1/hooks/{hookId} | Get hypervisor hook by id
[**v1GetHooks**](ArmApi.md#v1GetHooks) | **GET** /v1/instances/{instanceId}/hooks | Get all hypervisor hooks for Instance
[**v1GetImage**](ArmApi.md#v1GetImage) | **GET** /v1/images/{imageId} | Get Image Metadata
[**v1GetImages**](ArmApi.md#v1GetImages) | **GET** /v1/images | Get all Images Metadata
[**v1GetInstance**](ArmApi.md#v1GetInstance) | **GET** /v1/instances/{instanceId} | Get Instance
[**v1GetInstanceConsole**](ArmApi.md#v1GetInstanceConsole) | **GET** /v1/instances/{instanceId}/console | Get console websocket URL
[**v1GetInstanceConsoleLog**](ArmApi.md#v1GetInstanceConsoleLog) | **GET** /v1/instances/{instanceId}/consoleLog | Get Console Log
[**v1GetInstanceGpios**](ArmApi.md#v1GetInstanceGpios) | **GET** /v1/instances/{instanceId}/gpios | Get Instance GPIOs
[**v1GetInstancePanics**](ArmApi.md#v1GetInstancePanics) | **GET** /v1/instances/{instanceId}/panics | Get Panics
[**v1GetInstancePeripherals**](ArmApi.md#v1GetInstancePeripherals) | **GET** /v1/instances/{instanceId}/peripherals | Get Instance Peripherals
[**v1GetInstanceQuickConnectCommand**](ArmApi.md#v1GetInstanceQuickConnectCommand) | **GET** /v1/instances/{instanceId}/quickConnectCommand | Recommended SSH Command for Quick Connect
[**v1GetInstanceScreenshot**](ArmApi.md#v1GetInstanceScreenshot) | **GET** /v1/instances/{instanceId}/screenshot.{format} | Get Instance Screenshot
[**v1GetInstanceSnapshot**](ArmApi.md#v1GetInstanceSnapshot) | **GET** /v1/instances/{instanceId}/snapshots/{snapshotId} | Get Instance Snapshot
[**v1GetInstanceSnapshots**](ArmApi.md#v1GetInstanceSnapshots) | **GET** /v1/instances/{instanceId}/snapshots | Get Instance Snapshots
[**v1GetInstanceState**](ArmApi.md#v1GetInstanceState) | **GET** /v1/instances/{instanceId}/state | Get state of Instance
[**v1GetInstances**](ArmApi.md#v1GetInstances) | **GET** /v1/instances | Get Instances
[**v1GetModelSoftware**](ArmApi.md#v1GetModelSoftware) | **GET** /v1/models/{model}/software | Get Software for Model
[**v1GetModels**](ArmApi.md#v1GetModels) | **GET** /v1/models | Get Supported Models
[**v1GetProject**](ArmApi.md#v1GetProject) | **GET** /v1/projects/{projectId} | Get a Project
[**v1GetProjectInstances**](ArmApi.md#v1GetProjectInstances) | **GET** /v1/projects/{projectId}/instances | Get Instances in Project
[**v1GetProjectKeys**](ArmApi.md#v1GetProjectKeys) | **GET** /v1/projects/{projectId}/keys | Get Project Authorized Keys
[**v1GetProjectVpnConfig**](ArmApi.md#v1GetProjectVpnConfig) | **GET** /v1/projects/{projectId}/vpnconfig/{format} | Get Project VPN Configuration
[**v1GetProjects**](ArmApi.md#v1GetProjects) | **GET** /v1/projects | Get Projects
[**v1GetSnapshot**](ArmApi.md#v1GetSnapshot) | **GET** /v1/snapshots/{snapshotId} | Get Snapshot
[**v1Kcrange**](ArmApi.md#v1Kcrange) | **GET** /v1/instances/{instanceId}/btrace-kcrange | Get Kernel extension ranges
[**v1ListThreads**](ArmApi.md#v1ListThreads) | **GET** /v1/instances/{instanceId}/strace/thread-list | Get Running Threads (CoreTrace)
[**v1MediaPlay**](ArmApi.md#v1MediaPlay) | **POST** /v1/instances/{instanceId}/media/play | Start playing media
[**v1MediaStop**](ArmApi.md#v1MediaStop) | **POST** /v1/instances/{instanceId}/media/stop | Stop playing media
[**v1PatchInstance**](ArmApi.md#v1PatchInstance) | **PATCH** /v1/instances/{instanceId} | Update Instance
[**v1PauseInstance**](ArmApi.md#v1PauseInstance) | **POST** /v1/instances/{instanceId}/pause | Pause an Instance
[**v1PostInstanceInput**](ArmApi.md#v1PostInstanceInput) | **POST** /v1/instances/{instanceId}/input | Provide Instance Input
[**v1Ready**](ArmApi.md#v1Ready) | **GET** /v1/ready | API Status
[**v1RebootInstance**](ArmApi.md#v1RebootInstance) | **POST** /v1/instances/{instanceId}/reboot | Reboot an Instance
[**v1RemoveProjectKey**](ArmApi.md#v1RemoveProjectKey) | **DELETE** /v1/projects/{projectId}/keys/{keyId} | Delete Project Authorized Key
[**v1RemoveTeamRoleFromProject**](ArmApi.md#v1RemoveTeamRoleFromProject) | **DELETE** /v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId} | Remove team role from project
[**v1RemoveUserFromTeam**](ArmApi.md#v1RemoveUserFromTeam) | **DELETE** /v1/teams/{teamId}/users/{userId} | Remove user from team
[**v1RemoveUserRoleFromProject**](ArmApi.md#v1RemoveUserRoleFromProject) | **DELETE** /v1/roles/projects/{projectId}/users/{userId}/roles/{roleId} | Remove user role from project
[**v1RenameInstanceSnapshot**](ArmApi.md#v1RenameInstanceSnapshot) | **PATCH** /v1/instances/{instanceId}/snapshots/{snapshotId} | Rename a Snapshot
[**v1RestoreInstanceSnapshot**](ArmApi.md#v1RestoreInstanceSnapshot) | **POST** /v1/instances/{instanceId}/snapshots/{snapshotId}/restore | Restore a Snapshot
[**v1Roles**](ArmApi.md#v1Roles) | **GET** /v1/roles | Get all roles
[**v1SetInstanceGpios**](ArmApi.md#v1SetInstanceGpios) | **PUT** /v1/instances/{instanceId}/gpios | Set Instance GPIOs
[**v1SetInstancePeripherals**](ArmApi.md#v1SetInstancePeripherals) | **PUT** /v1/instances/{instanceId}/peripherals | Set Instance Peripherals
[**v1SetInstanceState**](ArmApi.md#v1SetInstanceState) | **PUT** /v1/instances/{instanceId}/state | Set state of Instance
[**v1SnapshotRename**](ArmApi.md#v1SnapshotRename) | **PATCH** /v1/snapshots/{snapshotId} | Rename a Snapshot
[**v1StartCoreTrace**](ArmApi.md#v1StartCoreTrace) | **POST** /v1/instances/{instanceId}/strace/enable | Start CoreTrace on an instance
[**v1StartHyperTrace**](ArmApi.md#v1StartHyperTrace) | **POST** /v1/instances/{instanceId}/btrace/enable | Start HyperTrace on an instance
[**v1StartInstance**](ArmApi.md#v1StartInstance) | **POST** /v1/instances/{instanceId}/start | Start an Instance
[**v1StartNetworkMonitor**](ArmApi.md#v1StartNetworkMonitor) | **POST** /v1/instances/{instanceId}/sslsplit/enable | Start Network Monitor on an instance.
[**v1StopCoreTrace**](ArmApi.md#v1StopCoreTrace) | **POST** /v1/instances/{instanceId}/strace/disable | Stop CoreTrace on an instance.
[**v1StopHyperTrace**](ArmApi.md#v1StopHyperTrace) | **POST** /v1/instances/{instanceId}/btrace/disable | Stop HyperTrace on an instance.
[**v1StopInstance**](ArmApi.md#v1StopInstance) | **POST** /v1/instances/{instanceId}/stop | Stop an Instance
[**v1StopNetworkMonitor**](ArmApi.md#v1StopNetworkMonitor) | **POST** /v1/instances/{instanceId}/sslsplit/disable | Stop Network Monitor on an instance.
[**v1TeamChange**](ArmApi.md#v1TeamChange) | **PATCH** /v1/teams/{teamId} | Update team
[**v1TeamCreate**](ArmApi.md#v1TeamCreate) | **POST** /v1/teams | Create team
[**v1TeamDelete**](ArmApi.md#v1TeamDelete) | **DELETE** /v1/teams/{teamId} | Delete team
[**v1Teams**](ArmApi.md#v1Teams) | **GET** /v1/teams | Get teams
[**v1UnpauseInstance**](ArmApi.md#v1UnpauseInstance) | **POST** /v1/instances/{instanceId}/unpause | Unpause an Instance
[**v1UpdateHook**](ArmApi.md#v1UpdateHook) | **PUT** /v1/hooks/{hookId} | Update an existing hypervisor hook
[**v1UpdateProject**](ArmApi.md#v1UpdateProject) | **PATCH** /v1/projects/{projectId} | Update a Project
[**v1UpdateProjectSettings**](ArmApi.md#v1UpdateProjectSettings) | **PATCH** /v1/projects/{projectId}/settings | Change Project Settings
[**v1UploadImageData**](ArmApi.md#v1UploadImageData) | **POST** /v1/images/{imageId} | Upload Image Data
[**v1WebPlayerAllowedDomains**](ArmApi.md#v1WebPlayerAllowedDomains) | **GET** /v1/webplayer/allowedDomains | Retrieve the list of allowed domains for all Web Player sessions
[**v1WebPlayerCreateSession**](ArmApi.md#v1WebPlayerCreateSession) | **POST** /v1/webplayer | Create a new Web Player Session
[**v1WebPlayerDestroySession**](ArmApi.md#v1WebPlayerDestroySession) | **DELETE** /v1/webplayer/{sessionId} | Tear down a Web Player Session
[**v1WebPlayerListSessions**](ArmApi.md#v1WebPlayerListSessions) | **GET** /v1/webplayer | List all Web Player sessions
[**v1WebPlayerSessionInfo**](ArmApi.md#v1WebPlayerSessionInfo) | **GET** /v1/webplayer/{sessionId} | Retrieve Web Player Session Information



## trialStatus

> Object trialStatus(trialEmail)

Get Trial Status

Allow users to check the trial status of an email.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';

let apiInstance = new AvhApi.ArmApi();
let trialEmail = "trialEmail_example"; // String | Trial Email
apiInstance.trialStatus(trialEmail).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **trialEmail** | **String**| Trial Email | 

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1AddProjectKey

> String v1AddProjectKey(projectId, projectKey)

Add Project Authorized Key

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let projectKey = {
  "type": "ssh",
  "label": "My New Key",
  "key": "ssh-ed25519 <key>"
}; // ProjectKey | Key to add
apiInstance.v1AddProjectKey(projectId, projectKey).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **projectKey** | [**ProjectKey**](ProjectKey.md)| Key to add | 

### Return type

**String**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1AddTeamRoleToProject

> v1AddTeamRoleToProject(projectId, teamId, roleId)

Add team role to project

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let teamId = "teamId_example"; // String | Team ID - uuid
let roleId = "roleId_example"; // String | Role ID - uuid
apiInstance.v1AddTeamRoleToProject(projectId, teamId, roleId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **teamId** | **String**| Team ID - uuid | 
 **roleId** | **String**| Role ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1AddUserRoleToProject

> v1AddUserRoleToProject(projectId, userId, roleId)

Add user role to project

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let userId = "userId_example"; // String | User ID - uuid
let roleId = "roleId_example"; // String | Role ID - uuid
apiInstance.v1AddUserRoleToProject(projectId, userId, roleId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **userId** | **String**| User ID - uuid | 
 **roleId** | **String**| Role ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1AddUserToTeam

> v1AddUserToTeam(teamId, userId)

Add user to team

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let teamId = "teamId_example"; // String | Team ID - uuid
let userId = "userId_example"; // String | User ID - uuid
apiInstance.v1AddUserToTeam(teamId, userId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **teamId** | **String**| Team ID - uuid | 
 **userId** | **String**| User ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1AuthLogin

> Token v1AuthLogin(apiToken)

Log In

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';

let apiInstance = new AvhApi.ArmApi();
let apiToken = {
  "apiToken": "<token>"
}; // ApiToken | Authorization Data
apiInstance.v1AuthLogin(apiToken).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **apiToken** | [**ApiToken**](ApiToken.md)| Authorization Data | 

### Return type

[**Token**](Token.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1BtracePreauthorize

> Object v1BtracePreauthorize(instanceId)

Pre-authorize an btrace download

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1BtracePreauthorize(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

**Object**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1ClearCoreTrace

> v1ClearCoreTrace(instanceId)

Clear CoreTrace logs

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1ClearCoreTrace(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1ClearHyperTrace

> v1ClearHyperTrace(instanceId)

Clear HyperTrace logs

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1ClearHyperTrace(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1ClearHyperTraceHooks

> v1ClearHyperTraceHooks(instanceId)

Clear Hooks on an instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1ClearHyperTraceHooks(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1ClearInstancePanics

> v1ClearInstancePanics(instanceId)

Clear Panics

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1ClearInstancePanics(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1CreateHook

> Hook v1CreateHook(instanceId, v1CreateHookParameters)

Create hypervisor hook for Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let v1CreateHookParameters = new AvhApi.V1CreateHookParameters(); // V1CreateHookParameters | application/json
apiInstance.v1CreateHook(instanceId, v1CreateHookParameters).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **v1CreateHookParameters** | [**V1CreateHookParameters**](V1CreateHookParameters.md)| application/json | 

### Return type

[**Hook**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1CreateImage

> Image v1CreateImage(type, encoding, opts)

Create a new Image

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let type = "type_example"; // String | Image type
let encoding = "encoding_example"; // String | How the file is stored
let opts = {
  'encapsulated': true, // Boolean | set to false if the uploaded file is not encapsulated inside an outer zipfile
  'name': "name_example", // String | Image name
  'project': "project_example", // String | Project ID
  'instance': "instance_example", // String | Instance ID
  'file': "/path/to/file" // File | Optionally the actual file
};
apiInstance.v1CreateImage(type, encoding, opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **String**| Image type | 
 **encoding** | **String**| How the file is stored | 
 **encapsulated** | **Boolean**| set to false if the uploaded file is not encapsulated inside an outer zipfile | [optional] 
 **name** | **String**| Image name | [optional] 
 **project** | **String**| Project ID | [optional] 
 **instance** | **String**| Instance ID | [optional] 
 **file** | **File**| Optionally the actual file | [optional] 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data
- **Accept**: application/json


## v1CreateInstance

> InstanceReturn v1CreateInstance(instanceCreateOptions)

Create Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceCreateOptions = {
  "project": "<your_project_id>",
  "name": "rpi4b Created via API",
  "flavor": "rpi4b",
  "os": "11.2.0"
}; // InstanceCreateOptions | The vm definition to create
apiInstance.v1CreateInstance(instanceCreateOptions).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceCreateOptions** | [**InstanceCreateOptions**](InstanceCreateOptions.md)| The vm definition to create | 

### Return type

[**InstanceReturn**](InstanceReturn.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1CreateProject

> Project v1CreateProject(project)

Create a Project

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let project = {
  "name": "New Project",
  "settings": {
    "version": 1,
    "internet-access": true
  },
  "quotas": {
    "cores": 8,
    "instances": 2,
    "ram": 16384
  }
}; // Project | Project
apiInstance.v1CreateProject(project).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project** | [**Project**](Project.md)| Project | 

### Return type

[**Project**](Project.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1CreateSnapshot

> Snapshot v1CreateSnapshot(instanceId, snapshotCreationOptions)

Create Instance Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotCreationOptions = new AvhApi.SnapshotCreationOptions(); // SnapshotCreationOptions | 
apiInstance.v1CreateSnapshot(instanceId, snapshotCreationOptions).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **snapshotCreationOptions** | [**SnapshotCreationOptions**](SnapshotCreationOptions.md)|  | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1CreateSubscriberInvite

> SubscriberInvite v1CreateSubscriberInvite(subscriberInvite)

Create Subscriber Invite

Create Subscriber Invite

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let subscriberInvite =  {
  "coupon_options": {
    "type": "percent",
    "amount": 100,
    "used": false
  },
  "plan": {
    "licenseType": "individual-usage",
    "cores": 6
  },
  "trial": {
    "duration": 100
  },
  "name": "John",
  "email": "john.doe@example.com",
  "coupon_code": "1I454WY14V4QV9",
  "domain": null,
  "aggregate": "app.example.com",
  "use_by": null,
  "active": true,
  "reusable": false,
  "createdAt": "2022-05-06T02:39:23.000Z",
  "updatedAt": "2022-05-06T02:39:23.000Z"
}; // SubscriberInvite | Payload of Subscriber Invite
apiInstance.v1CreateSubscriberInvite(subscriberInvite).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subscriberInvite** | [**SubscriberInvite**](SubscriberInvite.md)| Payload of Subscriber Invite | 

### Return type

[**SubscriberInvite**](SubscriberInvite.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1DeleteHook

> v1DeleteHook(hookId)

Delete an existing hypervisor hook

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let hookId = "hookId_example"; // String | Hook ID
apiInstance.v1DeleteHook(hookId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hookId** | **String**| Hook ID | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1DeleteImage

> v1DeleteImage(imageId)

Delete Image

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let imageId = "imageId_example"; // String | Image ID - uuid
apiInstance.v1DeleteImage(imageId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageId** | **String**| Image ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1DeleteInstance

> v1DeleteInstance(instanceId)

Remove Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID
apiInstance.v1DeleteInstance(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1DeleteInstanceSnapshot

> v1DeleteInstanceSnapshot(instanceId, snapshotId)

Delete a Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1DeleteInstanceSnapshot(instanceId, snapshotId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **snapshotId** | **String**| Snapshot ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1DeleteProject

> v1DeleteProject(projectId)

Delete a Project

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
apiInstance.v1DeleteProject(projectId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1DeleteSnapshot

> v1DeleteSnapshot(snapshotId)

Delete a Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1DeleteSnapshot(snapshotId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **snapshotId** | **String**| Snapshot ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1DisableExposePort

> v1DisableExposePort(instanceId)

Disable an exposed port on an instance for device access.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1DisableExposePort(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1EnableExposePort

> v1EnableExposePort(instanceId)

Enable an exposed port on an instance for device access.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1EnableExposePort(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1ExecuteHyperTraceHooks

> v1ExecuteHyperTraceHooks(instanceId)

Execute Hooks on an instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1ExecuteHyperTraceHooks(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetHookById

> Hook v1GetHookById(hookId)

Get hypervisor hook by id

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let hookId = "hookId_example"; // String | Hook Id
apiInstance.v1GetHookById(hookId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hookId** | **String**| Hook Id | 

### Return type

[**Hook**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetHooks

> [Hook] v1GetHooks(instanceId, opts)

Get all hypervisor hooks for Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let opts = {
  'limit': 3.4, // Number | limit for pagination results, defaults to 20
  'offset': 3.4, // Number | offset for pagination results, defaults to 0
  'sort': "sort_example" // String | sort ASC or DESC, defaults to DESC
};
apiInstance.v1GetHooks(instanceId, opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **limit** | **Number**| limit for pagination results, defaults to 20 | [optional] 
 **offset** | **Number**| offset for pagination results, defaults to 0 | [optional] 
 **sort** | **String**| sort ASC or DESC, defaults to DESC | [optional] 

### Return type

[**[Hook]**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetImage

> Image v1GetImage(imageId)

Get Image Metadata

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let imageId = "imageId_example"; // String | Image ID - uuid
apiInstance.v1GetImage(imageId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageId** | **String**| Image ID - uuid | 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetImages

> Image v1GetImages(opts)

Get all Images Metadata

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let opts = {
  'project': "project_example" // String | Optionally filter by project - uuid
};
apiInstance.v1GetImages(opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project** | **String**| Optionally filter by project - uuid | [optional] 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstance

> Instance v1GetInstance(instanceId, opts)

Get Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID
let opts = {
  'returnAttr': ["null"] // [String] | Attributes to include in instance return
};
apiInstance.v1GetInstance(instanceId, opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID | 
 **returnAttr** | [**[String]**](String.md)| Attributes to include in instance return | [optional] 

### Return type

[**Instance**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstanceConsole

> InstanceConsoleEndpoint v1GetInstanceConsole(instanceId)

Get console websocket URL

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstanceConsole(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

[**InstanceConsoleEndpoint**](InstanceConsoleEndpoint.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstanceConsoleLog

> String v1GetInstanceConsoleLog(instanceId)

Get Console Log

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstanceConsoleLog(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

**String**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json


## v1GetInstanceGpios

> GpiosState v1GetInstanceGpios(instanceId)

Get Instance GPIOs

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstanceGpios(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

[**GpiosState**](GpiosState.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstancePanics

> [Object] v1GetInstancePanics(instanceId)

Get Panics

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstancePanics(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

**[Object]**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstancePeripherals

> PeripheralsData v1GetInstancePeripherals(instanceId)

Get Instance Peripherals

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstancePeripherals(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

[**PeripheralsData**](PeripheralsData.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstanceQuickConnectCommand

> String v1GetInstanceQuickConnectCommand(instanceId)

Recommended SSH Command for Quick Connect

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstanceQuickConnectCommand(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

**String**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstanceScreenshot

> File v1GetInstanceScreenshot(instanceId, format, opts)

Get Instance Screenshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let format = "format_example"; // String | New peripherals state
let opts = {
  'scale': 56 // Number | Screenshot scale 1:N
};
apiInstance.v1GetInstanceScreenshot(instanceId, format, opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **format** | **String**| New peripherals state | 
 **scale** | **Number**| Screenshot scale 1:N | [optional] 

### Return type

**File**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: image/png, image/jpeg, application/json


## v1GetInstanceSnapshot

> Snapshot v1GetInstanceSnapshot(instanceId, snapshotId)

Get Instance Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1GetInstanceSnapshot(instanceId, snapshotId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **snapshotId** | **String**| Snapshot ID - uuid | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstanceSnapshots

> [Snapshot] v1GetInstanceSnapshots(instanceId)

Get Instance Snapshots

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstanceSnapshots(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

[**[Snapshot]**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstanceState

> InstanceState v1GetInstanceState(instanceId)

Get state of Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetInstanceState(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

[**InstanceState**](InstanceState.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstances

> [Instance] v1GetInstances(opts)

Get Instances

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let opts = {
  'name': "name_example", // String | Optionally filter by instance name
  'returnAttr': ["null"] // [String] | Attributes to include in instance return
};
apiInstance.v1GetInstances(opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| Optionally filter by instance name | [optional] 
 **returnAttr** | [**[String]**](String.md)| Attributes to include in instance return | [optional] 

### Return type

[**[Instance]**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetModelSoftware

> [Firmware] v1GetModelSoftware(model)

Get Software for Model

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let model = "model_example"; // String | Model to list available software for
apiInstance.v1GetModelSoftware(model).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **model** | **String**| Model to list available software for | 

### Return type

[**[Firmware]**](Firmware.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetModels

> [Model] v1GetModels()

Get Supported Models

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
apiInstance.v1GetModels().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[Model]**](Model.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetProject

> Project v1GetProject(projectId)

Get a Project

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
apiInstance.v1GetProject(projectId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 

### Return type

[**Project**](Project.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetProjectInstances

> [Instance] v1GetProjectInstances(projectId, opts)

Get Instances in Project

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let opts = {
  'name': "name_example", // String | Filter by project name
  'returnAttr': ["null"] // [String] | Attributes to include in instance return
};
apiInstance.v1GetProjectInstances(projectId, opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **name** | **String**| Filter by project name | [optional] 
 **returnAttr** | [**[String]**](String.md)| Attributes to include in instance return | [optional] 

### Return type

[**[Instance]**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetProjectKeys

> [ProjectKey] v1GetProjectKeys(projectId)

Get Project Authorized Keys

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
apiInstance.v1GetProjectKeys(projectId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 

### Return type

[**[ProjectKey]**](ProjectKey.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetProjectVpnConfig

> String v1GetProjectVpnConfig(projectId, format)

Get Project VPN Configuration

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let format = "format_example"; // String | VPN Config format
apiInstance.v1GetProjectVpnConfig(projectId, format).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **format** | **String**| VPN Config format | 

### Return type

**String**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/x-openvpn-profile, application/json


## v1GetProjects

> [Project] v1GetProjects(opts)

Get Projects

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let opts = {
  'name': "name_example", // String | Filter by project name
  'idsOnly': true // Boolean | Only include id of project in results
};
apiInstance.v1GetProjects(opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| Filter by project name | [optional] 
 **idsOnly** | **Boolean**| Only include id of project in results | [optional] 

### Return type

[**[Project]**](Project.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetSnapshot

> Snapshot v1GetSnapshot(snapshotId)

Get Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1GetSnapshot(snapshotId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **snapshotId** | **String**| Snapshot ID - uuid | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1Kcrange

> [Kcrange] v1Kcrange(instanceId)

Get Kernel extension ranges

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1Kcrange(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

[**[Kcrange]**](Kcrange.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1ListThreads

> [KernelTask] v1ListThreads(instanceId)

Get Running Threads (CoreTrace)

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1ListThreads(instanceId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

[**[KernelTask]**](KernelTask.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1MediaPlay

> v1MediaPlay(instanceId, mediaPlayBody)

Start playing media

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let mediaPlayBody = {
  "url": "http://null.to/test.mp4"
}; // MediaPlayBody | Request Body
apiInstance.v1MediaPlay(instanceId, mediaPlayBody).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **mediaPlayBody** | [**MediaPlayBody**](MediaPlayBody.md)| Request Body | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1MediaStop

> v1MediaStop(instanceId)

Stop playing media

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1MediaStop(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1PatchInstance

> Instance v1PatchInstance(instanceId, patchInstanceOptions)

Update Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID
let patchInstanceOptions = {
 "name": "New Name"
}; // PatchInstanceOptions | 
apiInstance.v1PatchInstance(instanceId, patchInstanceOptions).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID | 
 **patchInstanceOptions** | [**PatchInstanceOptions**](PatchInstanceOptions.md)|  | 

### Return type

[**Instance**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1PauseInstance

> v1PauseInstance(instanceId)

Pause an Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1PauseInstance(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1PostInstanceInput

> Number v1PostInstanceInput(instanceId, instanceInput)

Provide Instance Input

Sends a touch or button event to the VM.  - Buttons (or keys) to be held during the input are specified as an array of strings, each string must be either a single ascii character or one of the following keywords:   - VM Buttons: finger, homeButton, holdButton, volumeUp, volumeDown, ringerSwitch, backButton, overviewButton   - Keyboard Buttons: again, alt, alterase, apostrophe, back, backslash, backspace, bassboost, bookmarks, bsp, calc, camera, cancel, caps, capslock, chat, close, closecd, comma, compose, computer, config, connect, copy, ctrl, cut, cyclewindows, dashboard, del, delete, deletefile, dot, down, edit, eject, ejectclose, email, end, enter, equal, esc, escape, exit, f1, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f2, f20, f21, f22, f23, f24, f3, f4, f5, f6, f7, f8, f9, fastfwd, file, finance, find, forward, front, grave, hangeul, hanja, help, henkan, home, homepage, hp, hrgn, ins, insert, iso, k102, kp0, kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9, kpasterisk, kpcomma, kpdot, kpenter, kpequal, kpjpcomma, kpleftparen, kpminus, kpplus, kpplusminus, kprightparen, kpslash, ktkn, ktknhrgn, left, leftalt, leftbrace, leftctrl, leftmeta, leftshift, linefeed, macro, mail, menu, meta, minus, move, msdos, muhenkan, mute, new, next, numlock, open, pagedown, pageup, paste, pause, pausecd, pgdn, pgup, phone, play, playcd, playpause, power, previous, print, prog1, prog2, prog3, prog4, props, question, record, redo, refresh, return, rewind, right, rightalt, rightbrace, rightctrl, rightmeta, rightshift, ro, rotate, scale, screenlock, scrolldown, scrolllock, scrollup, search, semicolon, sendfile, setup, shift, shop, slash, sleep, sound, space, sport, stop, stopcd, suspend, sysrq, tab, undo, up, voldown, volup, wakeup, www, xfer, yen, zkhk

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let instanceInput = [
  {
    "buttons": ["finger"],
    "position": [
      [300, 600]
    ],
    "wait": 0
  },
  {
    "buttons": [],
    "wait": 100
  }
]; // [InstanceInput] | The input to send to the VM
apiInstance.v1PostInstanceInput(instanceId, instanceInput).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **instanceInput** | [**[InstanceInput]**](InstanceInput.md)| The input to send to the VM | 

### Return type

**Number**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1Ready

> v1Ready()

API Status

Check if  API is ready for queries

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';

let apiInstance = new AvhApi.ArmApi();
apiInstance.v1Ready().then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1RebootInstance

> v1RebootInstance(instanceId)

Reboot an Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1RebootInstance(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1RemoveProjectKey

> v1RemoveProjectKey(projectId, keyId)

Delete Project Authorized Key

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let keyId = "keyId_example"; // String | Key ID - uuid
apiInstance.v1RemoveProjectKey(projectId, keyId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **keyId** | **String**| Key ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1RemoveTeamRoleFromProject

> v1RemoveTeamRoleFromProject(projectId, teamId, roleId)

Remove team role from project

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let teamId = "teamId_example"; // String | Team ID - uuid
let roleId = "roleId_example"; // String | Role ID - uuid
apiInstance.v1RemoveTeamRoleFromProject(projectId, teamId, roleId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **teamId** | **String**| Team ID - uuid | 
 **roleId** | **String**| Role ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1RemoveUserFromTeam

> v1RemoveUserFromTeam(teamId, userId)

Remove user from team

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let teamId = "teamId_example"; // String | Team ID - uuid
let userId = "userId_example"; // String | User ID - uuid
apiInstance.v1RemoveUserFromTeam(teamId, userId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **teamId** | **String**| Team ID - uuid | 
 **userId** | **String**| User ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1RemoveUserRoleFromProject

> v1RemoveUserRoleFromProject(projectId, userId, roleId)

Remove user role from project

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let userId = "userId_example"; // String | User ID - uuid
let roleId = "roleId_example"; // String | Role ID - uuid
apiInstance.v1RemoveUserRoleFromProject(projectId, userId, roleId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **userId** | **String**| User ID - uuid | 
 **roleId** | **String**| Role ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1RenameInstanceSnapshot

> Snapshot v1RenameInstanceSnapshot(instanceId, snapshotId, snapshotCreationOptions)

Rename a Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
let snapshotCreationOptions = new AvhApi.SnapshotCreationOptions(); // SnapshotCreationOptions | 
apiInstance.v1RenameInstanceSnapshot(instanceId, snapshotId, snapshotCreationOptions).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **snapshotId** | **String**| Snapshot ID - uuid | 
 **snapshotCreationOptions** | [**SnapshotCreationOptions**](SnapshotCreationOptions.md)|  | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1RestoreInstanceSnapshot

> v1RestoreInstanceSnapshot(instanceId, snapshotId)

Restore a Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1RestoreInstanceSnapshot(instanceId, snapshotId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **snapshotId** | **String**| Snapshot ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1Roles

> [Role] v1Roles()

Get all roles

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
apiInstance.v1Roles().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[Role]**](Role.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1SetInstanceGpios

> GpiosState v1SetInstanceGpios(instanceId, gpiosState)

Set Instance GPIOs

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let gpiosState = {
  "button": {
    "bitCount": 2,
    "banks": [
      [0,1],
      [1,0]
    ]
  },
  "switch": {
    "bitCount": 8,
    "banks": [
      [0,1,0,1,0,1,0,1]
    ]
  }
}; // GpiosState | New GPIO state
apiInstance.v1SetInstanceGpios(instanceId, gpiosState).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **gpiosState** | [**GpiosState**](GpiosState.md)| New GPIO state | 

### Return type

[**GpiosState**](GpiosState.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1SetInstancePeripherals

> PeripheralsData v1SetInstancePeripherals(instanceId, peripheralsData)

Set Instance Peripherals

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let peripheralsData = {
  "acceleration": [0, 9.81, 0],
  "gyroscope": [0, 0, 0],
  "magnetic": [0, 45, 0 ],
  "orientation": [0, 0, 0 ],
  "temperature": 25,
  "proximity": 50,
  "light": 20,
  "pressure": 1013.25,
  "humidity": 55
}; // PeripheralsData | New peripherals state
apiInstance.v1SetInstancePeripherals(instanceId, peripheralsData).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **peripheralsData** | [**PeripheralsData**](PeripheralsData.md)| New peripherals state | 

### Return type

[**PeripheralsData**](PeripheralsData.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1SetInstanceState

> v1SetInstanceState(instanceId, v1SetStateBody)

Set state of Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let v1SetStateBody = new AvhApi.V1SetStateBody(); // V1SetStateBody | Desired State
apiInstance.v1SetInstanceState(instanceId, v1SetStateBody).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **v1SetStateBody** | [**V1SetStateBody**](V1SetStateBody.md)| Desired State | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1SnapshotRename

> Snapshot v1SnapshotRename(snapshotId, snapshotCreationOptions)

Rename a Snapshot

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
let snapshotCreationOptions = new AvhApi.SnapshotCreationOptions(); // SnapshotCreationOptions | 
apiInstance.v1SnapshotRename(snapshotId, snapshotCreationOptions).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **snapshotId** | **String**| Snapshot ID - uuid | 
 **snapshotCreationOptions** | [**SnapshotCreationOptions**](SnapshotCreationOptions.md)|  | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1StartCoreTrace

> v1StartCoreTrace(instanceId)

Start CoreTrace on an instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1StartCoreTrace(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1StartHyperTrace

> v1StartHyperTrace(instanceId, btraceEnableOptions)

Start HyperTrace on an instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let btraceEnableOptions = new AvhApi.BtraceEnableOptions(); // BtraceEnableOptions | 
apiInstance.v1StartHyperTrace(instanceId, btraceEnableOptions).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **btraceEnableOptions** | [**BtraceEnableOptions**](BtraceEnableOptions.md)|  | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1StartInstance

> v1StartInstance(instanceId, opts)

Start an Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let opts = {
  'instanceStartOptions': new AvhApi.InstanceStartOptions() // InstanceStartOptions | Start options
};
apiInstance.v1StartInstance(instanceId, opts).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **instanceStartOptions** | [**InstanceStartOptions**](InstanceStartOptions.md)| Start options | [optional] 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1StartNetworkMonitor

> v1StartNetworkMonitor(instanceId)

Start Network Monitor on an instance.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1StartNetworkMonitor(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1StopCoreTrace

> v1StopCoreTrace(instanceId)

Stop CoreTrace on an instance.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1StopCoreTrace(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1StopHyperTrace

> v1StopHyperTrace(instanceId)

Stop HyperTrace on an instance.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1StopHyperTrace(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1StopInstance

> v1StopInstance(instanceId, opts)

Stop an Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let opts = {
  'instanceStopOptions': new AvhApi.InstanceStopOptions() // InstanceStopOptions | Stop options
};
apiInstance.v1StopInstance(instanceId, opts).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **instanceStopOptions** | [**InstanceStopOptions**](InstanceStopOptions.md)| Stop options | [optional] 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1StopNetworkMonitor

> v1StopNetworkMonitor(instanceId)

Stop Network Monitor on an instance.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1StopNetworkMonitor(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1TeamChange

> v1TeamChange(teamId, createTeam)

Update team

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let teamId = "teamId_example"; // String | Team ID - uuid
let createTeam = { "name": "Test Team"}; // CreateTeam | 
apiInstance.v1TeamChange(teamId, createTeam).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **teamId** | **String**| Team ID - uuid | 
 **createTeam** | [**CreateTeam**](CreateTeam.md)|  | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1TeamCreate

> TeamCreate v1TeamCreate(createTeam)

Create team

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let createTeam = { "name": "Test Team"}; // CreateTeam | 
apiInstance.v1TeamCreate(createTeam).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createTeam** | [**CreateTeam**](CreateTeam.md)|  | 

### Return type

[**TeamCreate**](TeamCreate.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1TeamDelete

> v1TeamDelete(teamId)

Delete team

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let teamId = "teamId_example"; // String | Team ID - uuid
apiInstance.v1TeamDelete(teamId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **teamId** | **String**| Team ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1Teams

> [Team] v1Teams()

Get teams

This endpoint is available for Enterprise accounts only

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
apiInstance.v1Teams().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[Team]**](Team.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1UnpauseInstance

> v1UnpauseInstance(instanceId)

Unpause an Instance

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1UnpauseInstance(instanceId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1UpdateHook

> Hook v1UpdateHook(hookId, v1CreateHookParameters)

Update an existing hypervisor hook

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let hookId = "hookId_example"; // String | Hook ID
let v1CreateHookParameters = { "enabled": false}; // V1CreateHookParameters | application/json
apiInstance.v1UpdateHook(hookId, v1CreateHookParameters).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hookId** | **String**| Hook ID | 
 **v1CreateHookParameters** | [**V1CreateHookParameters**](V1CreateHookParameters.md)| application/json | 

### Return type

[**Hook**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1UpdateProject

> Project v1UpdateProject(projectId, project)

Update a Project

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let project = new AvhApi.Project(); // Project | Updated Project Settings
apiInstance.v1UpdateProject(projectId, project).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **project** | [**Project**](Project.md)| Updated Project Settings | 

### Return type

[**Project**](Project.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1UpdateProjectSettings

> v1UpdateProjectSettings(projectId, projectSettings)

Change Project Settings

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let projectId = "projectId_example"; // String | Project ID - uuid
let projectSettings = new AvhApi.ProjectSettings(); // ProjectSettings | New settings
apiInstance.v1UpdateProjectSettings(projectId, projectSettings).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectId** | **String**| Project ID - uuid | 
 **projectSettings** | [**ProjectSettings**](ProjectSettings.md)| New settings | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1UploadImageData

> Image v1UploadImageData(imageId, body)

Upload Image Data

If the active project has enough remaining quota, updates an Image with the contents of the request body.

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let imageId = "imageId_example"; // String | Image ID - uuid
let body = "body_example"; // String | Uploaded Image
apiInstance.v1UploadImageData(imageId, body).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageId** | **String**| Image ID - uuid | 
 **body** | **String**| Uploaded Image | 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: binary
- **Accept**: application/json


## v1WebPlayerAllowedDomains

> WebPlayerSession v1WebPlayerAllowedDomains()

Retrieve the list of allowed domains for all Web Player sessions

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
apiInstance.v1WebPlayerAllowedDomains().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**WebPlayerSession**](WebPlayerSession.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1WebPlayerCreateSession

> WebPlayerSession v1WebPlayerCreateSession(webPlayerCreateSessionRequest)

Create a new Web Player Session

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let webPlayerCreateSessionRequest = {
  "projectId": "0fc719fc-335d-458c-a424-51a550a73d12",
  "instanceId": "fbd94550-3f74-4d46-a6ed-c26cbfb23340",
  "expiresIn": 18000,
  "features": {
    "apps": true,
    "files": true
  },
}; // WebPlayerCreateSessionRequest | Request Data
apiInstance.v1WebPlayerCreateSession(webPlayerCreateSessionRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webPlayerCreateSessionRequest** | [**WebPlayerCreateSessionRequest**](WebPlayerCreateSessionRequest.md)| Request Data | 

### Return type

[**WebPlayerSession**](WebPlayerSession.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1WebPlayerDestroySession

> v1WebPlayerDestroySession(sessionId)

Tear down a Web Player Session

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let sessionId = "sessionId_example"; // String | Web Player Session identifier
apiInstance.v1WebPlayerDestroySession(sessionId).then(() => {
  console.log('API called successfully.');
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sessionId** | **String**| Web Player Session identifier | 

### Return type

null (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1WebPlayerListSessions

> [WebPlayerSession] v1WebPlayerListSessions()

List all Web Player sessions

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
apiInstance.v1WebPlayerListSessions().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[WebPlayerSession]**](WebPlayerSession.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1WebPlayerSessionInfo

> WebPlayerSession v1WebPlayerSessionInfo(sessionId)

Retrieve Web Player Session Information

### Example

```javascript
import AvhApi from '@arm-avh/avh-api';
let defaultClient = AvhApi.ApiClient.instance;
// Configure Bearer (ApiToken or JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new AvhApi.ArmApi();
let sessionId = "sessionId_example"; // String | Web Player Session identifier
apiInstance.v1WebPlayerSessionInfo(sessionId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sessionId** | **String**| Web Player Session identifier | 

### Return type

[**WebPlayerSession**](WebPlayerSession.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

