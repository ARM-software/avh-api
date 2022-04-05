# ArmApi.ArmApi

All URIs are relative to *https://app.avh.arm.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1AuthLogin**](ArmApi.md#v1AuthLogin) | **POST** /v1/auth/login | Log In
[**v1CreateImage**](ArmApi.md#v1CreateImage) | **POST** /v1/images | Create a new Image
[**v1CreateInstance**](ArmApi.md#v1CreateInstance) | **POST** /v1/instances | Create Instance
[**v1CreateSnapshot**](ArmApi.md#v1CreateSnapshot) | **POST** /v1/instances/{instanceId}/snapshots | Create Instance Snapshot
[**v1DeleteImage**](ArmApi.md#v1DeleteImage) | **DELETE** /v2/images/{imageId} | Delete Image
[**v1DeleteInstance**](ArmApi.md#v1DeleteInstance) | **DELETE** /v1/instances/{instanceId} | Remove Instance
[**v1GetImage**](ArmApi.md#v1GetImage) | **GET** /v1/images/{imageId} | Get Image Metadata
[**v1GetImages**](ArmApi.md#v1GetImages) | **GET** /v1/images | Get all Images Metadata
[**v1GetInstance**](ArmApi.md#v1GetInstance) | **GET** /v1/instances/{instanceId} | Get Instance
[**v1GetInstanceConsole**](ArmApi.md#v1GetInstanceConsole) | **GET** /v1/instances/{instanceId}/console | Get console websocket URL
[**v1GetInstanceGpios**](ArmApi.md#v1GetInstanceGpios) | **GET** /v1/instances/{instanceId}/gpios | Get Instance GPIOs
[**v1GetInstancePeripherals**](ArmApi.md#v1GetInstancePeripherals) | **GET** /v1/instances/{instanceId}/peripherals | Get Instance Peripherals
[**v1GetInstanceState**](ArmApi.md#v1GetInstanceState) | **GET** /v1/instances/{instanceId}/state | Get state of Instance
[**v1GetInstances**](ArmApi.md#v1GetInstances) | **GET** /v1/instances | Get Instances
[**v1GetModelSoftware**](ArmApi.md#v1GetModelSoftware) | **GET** /v1/models/{model}/software | Get Software for Model
[**v1GetModels**](ArmApi.md#v1GetModels) | **GET** /v1/models | Get Supported Models
[**v1GetProject**](ArmApi.md#v1GetProject) | **GET** /v1/projects/{projectId} | Get Project
[**v1GetProjectInstances**](ArmApi.md#v1GetProjectInstances) | **GET** /v1/projects/{projectId}/instances | Get Instances in Project
[**v1GetProjects**](ArmApi.md#v1GetProjects) | **GET** /v1/projects | Get Projects
[**v1GetSnapshot**](ArmApi.md#v1GetSnapshot) | **GET** /v1/instances/{instanceId}/snapshots/{snapshotId} | Get Instance Snapshots
[**v1GetSnapshots**](ArmApi.md#v1GetSnapshots) | **GET** /v1/instances/{instanceId}/snapshots | Get Instance Snapshots
[**v1PatchInstance**](ArmApi.md#v1PatchInstance) | **PATCH** /v1/instances/{instanceId} | Update Instance
[**v1PauseInstance**](ArmApi.md#v1PauseInstance) | **POST** /v1/instances/{instanceId}/pause | Pause an Instance
[**v1Ready**](ArmApi.md#v1Ready) | **GET** /v1/ready | API Status
[**v1RebootInstance**](ArmApi.md#v1RebootInstance) | **POST** /v1/instances/{instanceId}/reboot | Reboot an Instance
[**v1RestoreSnapshot**](ArmApi.md#v1RestoreSnapshot) | **POST** /v1/instances/{instanceId}/snapshots/{snapshotId}/restore | Restore a Snapshot
[**v1SetInstanceGpios**](ArmApi.md#v1SetInstanceGpios) | **PUT** /v1/instances/{instanceId}/gpios | Set Instance GPIOs
[**v1SetInstancePeripherals**](ArmApi.md#v1SetInstancePeripherals) | **PUT** /v1/instances/{instanceId}/peripherals | Set Instance Peripherals
[**v1SetInstanceState**](ArmApi.md#v1SetInstanceState) | **PUT** /v1/instances/{instanceId}/state | Set state of Instance
[**v1SnapshotDelete**](ArmApi.md#v1SnapshotDelete) | **DELETE** /v1/instances/{instanceId}/snapshots/{snapshotId} | Delete a Snapshot
[**v1SnapshotRename**](ArmApi.md#v1SnapshotRename) | **PATCH** /v1/instances/{instanceId}/snapshots/{snapshotId} | Rename a Snapshot
[**v1StartInstance**](ArmApi.md#v1StartInstance) | **POST** /v1/instances/{instanceId}/start | Start an Instance
[**v1StopInstance**](ArmApi.md#v1StopInstance) | **POST** /v1/instances/{instanceId}/stop | Stop an Instance
[**v1UnpauseInstance**](ArmApi.md#v1UnpauseInstance) | **POST** /v1/instances/{instanceId}/unpause | Unpause an Instance
[**v1UploadImageData**](ArmApi.md#v1UploadImageData) | **POST** /v1/images/{imageId} | Upload Image Data



## v1AuthLogin

> Token v1AuthLogin(apiToken)

Log In

### Example

```javascript
import ArmApi from 'arm_api';

let apiInstance = new ArmApi.ArmApi();
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


## v1CreateImage

> Image v1CreateImage(type, encoding, opts)

Create a new Image

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let type = "type_example"; // String | Image type
let encoding = "encoding_example"; // String | How the file is stored
let opts = {
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceCreateOptions = {
 "project": "d59db33d-27bd-4b22-878d-49e4758a648e",
 "flavor": "iphone6s",
 "os": "12.0"
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


## v1CreateSnapshot

> Snapshot v1CreateSnapshot(instanceId, snapshotCreationOptions)

Create Instance Snapshot

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotCreationOptions = new ArmApi.SnapshotCreationOptions(); // SnapshotCreationOptions | 
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


## v1DeleteImage

> v1DeleteImage(imageId)

Delete Image

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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


## v1GetImage

> Image v1GetImage(imageId)

Get Image Metadata

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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


## v1GetInstanceGpios

> {String: GpioStateDefinition} v1GetInstanceGpios(instanceId)

Get Instance GPIOs

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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

[**{String: GpioStateDefinition}**](GpioStateDefinition.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1GetInstancePeripherals

> Object v1GetInstancePeripherals(instanceId)

Get Instance Peripherals

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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

**Object**

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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let opts = {
  'name': "name_example", // String | Optionally filter by project name
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
 **name** | **String**| Optionally filter by project name | [optional] 
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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

Get Project

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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


## v1GetProjects

> [Project] v1GetProjects(opts)

Get Projects

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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

> Snapshot v1GetSnapshot(instanceId, snapshotId)

Get Instance Snapshots

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1GetSnapshot(instanceId, snapshotId).then((data) => {
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


## v1GetSnapshots

> [Snapshot] v1GetSnapshots(instanceId)

Get Instance Snapshots

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
apiInstance.v1GetSnapshots(instanceId).then((data) => {
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


## v1PatchInstance

> Object v1PatchInstance(instanceId, body)

Update Instance

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID
let body = {key: null}; // Object | 
apiInstance.v1PatchInstance(instanceId, body).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID | 
 **body** | **Object**|  | 

### Return type

**Object**

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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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


## v1Ready

> v1Ready()

API Status

Check if  API is ready for queries

### Example

```javascript
import ArmApi from 'arm_api';

let apiInstance = new ArmApi.ArmApi();
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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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


## v1RestoreSnapshot

> v1RestoreSnapshot(instanceId, snapshotId)

Restore a Snapshot

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1RestoreSnapshot(instanceId, snapshotId).then(() => {
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


## v1SetInstanceGpios

> {String: GpioStateDefinition} v1SetInstanceGpios(instanceId, requestBody)

Set Instance GPIOs

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let requestBody = {
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
}; // {String: GpioStateDefinition} | New GPIO state
apiInstance.v1SetInstanceGpios(instanceId, requestBody).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **requestBody** | [**{String: GpioStateDefinition}**](GpioStateDefinition.md)| New GPIO state | 

### Return type

[**{String: GpioStateDefinition}**](GpioStateDefinition.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## v1SetInstancePeripherals

> Object v1SetInstancePeripherals(instanceId, body)

Set Instance Peripherals

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let body = {
  "acceleration": "0.000000,9.810000,0.000000",
  "gyroscope": "0.000000,0.000000,0.000000",
  "magnetic": "0.000000,45.000000,0.000000",
  "orientation": "0.000000,0.000000,0.000000",
  "temperature": "25.000000",
  "proximity": "50.000000",
  "light": "20.000000",
  "pressure": "1013.250000",
  "humidity": "55.000000"
}; // String | New peripherals state
apiInstance.v1SetInstancePeripherals(instanceId, body).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instanceId** | **String**| Instance ID - uuid | 
 **body** | **String**| New peripherals state | 

### Return type

**Object**

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
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let v1SetStateBody = new ArmApi.V1SetStateBody(); // V1SetStateBody | Desired State
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


## v1SnapshotDelete

> v1SnapshotDelete(instanceId, snapshotId)

Delete a Snapshot

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
apiInstance.v1SnapshotDelete(instanceId, snapshotId).then(() => {
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


## v1SnapshotRename

> Snapshot v1SnapshotRename(instanceId, snapshotId, snapshotCreationOptions)

Rename a Snapshot

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let snapshotId = "snapshotId_example"; // String | Snapshot ID - uuid
let snapshotCreationOptions = new ArmApi.SnapshotCreationOptions(); // SnapshotCreationOptions | 
apiInstance.v1SnapshotRename(instanceId, snapshotId, snapshotCreationOptions).then((data) => {
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


## v1StartInstance

> v1StartInstance(instanceId, opts)

Start an Instance

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let opts = {
  'instanceStartOptions': new ArmApi.InstanceStartOptions() // InstanceStartOptions | Start options
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


## v1StopInstance

> v1StopInstance(instanceId, opts)

Stop an Instance

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
let instanceId = "instanceId_example"; // String | Instance ID - uuid
let opts = {
  'instanceStopOptions': new ArmApi.InstanceStopOptions() // InstanceStopOptions | Stop options
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


## v1UnpauseInstance

> v1UnpauseInstance(instanceId)

Unpause an Instance

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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


## v1UploadImageData

> Image v1UploadImageData(imageId, body)

Upload Image Data

If the active project has enough remaining quota, updates an Image with the contents of the request body.

### Example

```javascript
import ArmApi from 'arm_api';
let defaultClient = ArmApi.ApiClient.instance;
// Configure Bearer (JWT) access token for authorization: BearerAuth
let BearerAuth = defaultClient.authentications['BearerAuth'];
BearerAuth.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ArmApi.ArmApi();
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

