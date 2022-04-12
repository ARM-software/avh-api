# AvhClientAsync.ArmApi

All URIs are relative to *https://app.avh.arm.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_auth_login**](ArmApi.md#v1_auth_login) | **POST** /v1/auth/login | Log In
[**v1_create_image**](ArmApi.md#v1_create_image) | **POST** /v1/images | Create a new Image
[**v1_create_instance**](ArmApi.md#v1_create_instance) | **POST** /v1/instances | Create Instance
[**v1_create_snapshot**](ArmApi.md#v1_create_snapshot) | **POST** /v1/instances/{instanceId}/snapshots | Create Instance Snapshot
[**v1_delete_image**](ArmApi.md#v1_delete_image) | **DELETE** /v2/images/{imageId} | Delete Image
[**v1_delete_instance**](ArmApi.md#v1_delete_instance) | **DELETE** /v1/instances/{instanceId} | Remove Instance
[**v1_get_image**](ArmApi.md#v1_get_image) | **GET** /v1/images/{imageId} | Get Image Metadata
[**v1_get_images**](ArmApi.md#v1_get_images) | **GET** /v1/images | Get all Images Metadata
[**v1_get_instance**](ArmApi.md#v1_get_instance) | **GET** /v1/instances/{instanceId} | Get Instance
[**v1_get_instance_console**](ArmApi.md#v1_get_instance_console) | **GET** /v1/instances/{instanceId}/console | Get console websocket URL
[**v1_get_instance_gpios**](ArmApi.md#v1_get_instance_gpios) | **GET** /v1/instances/{instanceId}/gpios | Get Instance GPIOs
[**v1_get_instance_peripherals**](ArmApi.md#v1_get_instance_peripherals) | **GET** /v1/instances/{instanceId}/peripherals | Get Instance Peripherals
[**v1_get_instance_state**](ArmApi.md#v1_get_instance_state) | **GET** /v1/instances/{instanceId}/state | Get state of Instance
[**v1_get_instances**](ArmApi.md#v1_get_instances) | **GET** /v1/instances | Get Instances
[**v1_get_model_software**](ArmApi.md#v1_get_model_software) | **GET** /v1/models/{model}/software | Get Software for Model
[**v1_get_models**](ArmApi.md#v1_get_models) | **GET** /v1/models | Get Supported Models
[**v1_get_project**](ArmApi.md#v1_get_project) | **GET** /v1/projects/{projectId} | Get Project
[**v1_get_project_instances**](ArmApi.md#v1_get_project_instances) | **GET** /v1/projects/{projectId}/instances | Get Instances in Project
[**v1_get_projects**](ArmApi.md#v1_get_projects) | **GET** /v1/projects | Get Projects
[**v1_get_snapshot**](ArmApi.md#v1_get_snapshot) | **GET** /v1/instances/{instanceId}/snapshots/{snapshotId} | Get Instance Snapshots
[**v1_get_snapshots**](ArmApi.md#v1_get_snapshots) | **GET** /v1/instances/{instanceId}/snapshots | Get Instance Snapshots
[**v1_patch_instance**](ArmApi.md#v1_patch_instance) | **PATCH** /v1/instances/{instanceId} | Update Instance
[**v1_pause_instance**](ArmApi.md#v1_pause_instance) | **POST** /v1/instances/{instanceId}/pause | Pause an Instance
[**v1_ready**](ArmApi.md#v1_ready) | **GET** /v1/ready | API Status
[**v1_reboot_instance**](ArmApi.md#v1_reboot_instance) | **POST** /v1/instances/{instanceId}/reboot | Reboot an Instance
[**v1_restore_snapshot**](ArmApi.md#v1_restore_snapshot) | **POST** /v1/instances/{instanceId}/snapshots/{snapshotId}/restore | Restore a Snapshot
[**v1_set_instance_gpios**](ArmApi.md#v1_set_instance_gpios) | **PUT** /v1/instances/{instanceId}/gpios | Set Instance GPIOs
[**v1_set_instance_peripherals**](ArmApi.md#v1_set_instance_peripherals) | **PUT** /v1/instances/{instanceId}/peripherals | Set Instance Peripherals
[**v1_set_instance_state**](ArmApi.md#v1_set_instance_state) | **PUT** /v1/instances/{instanceId}/state | Set state of Instance
[**v1_snapshot_delete**](ArmApi.md#v1_snapshot_delete) | **DELETE** /v1/instances/{instanceId}/snapshots/{snapshotId} | Delete a Snapshot
[**v1_snapshot_rename**](ArmApi.md#v1_snapshot_rename) | **PATCH** /v1/instances/{instanceId}/snapshots/{snapshotId} | Rename a Snapshot
[**v1_start_instance**](ArmApi.md#v1_start_instance) | **POST** /v1/instances/{instanceId}/start | Start an Instance
[**v1_stop_instance**](ArmApi.md#v1_stop_instance) | **POST** /v1/instances/{instanceId}/stop | Stop an Instance
[**v1_unpause_instance**](ArmApi.md#v1_unpause_instance) | **POST** /v1/instances/{instanceId}/unpause | Unpause an Instance
[**v1_upload_image_data**](ArmApi.md#v1_upload_image_data) | **POST** /v1/images/{imageId} | Upload Image Data


# **v1_auth_login**
> Token v1_auth_login(api_token)

Log In

### Example

```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)


# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    api_token = {
  "apiToken": "<token>"
} # ApiToken | Authorization Data

    try:
        # Log In
        api_response = api_instance.v1_auth_login(api_token)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_auth_login: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **api_token** | [**ApiToken**](ApiToken.md)| Authorization Data | 

### Return type

[**Token**](Token.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | User Authorization |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_create_image**
> Image v1_create_image(type, encoding, name=name, project=project, instance=instance, file=file)

Create a new Image

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    type = 'type_example' # str | Image type
encoding = 'encoding_example' # str | How the file is stored
name = 'name_example' # str | Image name (optional)
project = 'project_example' # str | Project ID (optional)
instance = 'instance_example' # str | Instance ID (optional)
file = '/path/to/file' # file | Optionally the actual file (optional)

    try:
        # Create a new Image
        api_response = api_instance.v1_create_image(type, encoding, name=name, project=project, instance=instance, file=file)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_create_image: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **str**| Image type | 
 **encoding** | **str**| How the file is stored | 
 **name** | **str**| Image name | [optional] 
 **project** | **str**| Project ID | [optional] 
 **instance** | **str**| Instance ID | [optional] 
 **file** | **file**| Optionally the actual file | [optional] 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**404** | application/json |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_create_instance**
> InstanceReturn v1_create_instance(instance_create_options)

Create Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_create_options = {
 "project": "d59db33d-27bd-4b22-878d-49e4758a648e",
 "flavor": "iphone6s",
 "os": "12.0"
} # InstanceCreateOptions | The vm definition to create

    try:
        # Create Instance
        api_response = api_instance.v1_create_instance(instance_create_options)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_create_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_create_options** | [**InstanceCreateOptions**](InstanceCreateOptions.md)| The vm definition to create | 

### Return type

[**InstanceReturn**](InstanceReturn.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Accepted |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_create_snapshot**
> Snapshot v1_create_snapshot(instance_id, snapshot_creation_options)

Create Instance Snapshot

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
snapshot_creation_options = AvhClientAsync.SnapshotCreationOptions() # SnapshotCreationOptions | 

    try:
        # Create Instance Snapshot
        api_response = api_instance.v1_create_snapshot(instance_id, snapshot_creation_options)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_create_snapshot: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **snapshot_creation_options** | [**SnapshotCreationOptions**](SnapshotCreationOptions.md)|  | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_delete_image**
> v1_delete_image(image_id)

Delete Image

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    image_id = 'image_id_example' # str | Image ID - uuid

    try:
        # Delete Image
        api_instance.v1_delete_image(image_id)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_delete_image: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **image_id** | **str**| Image ID - uuid | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Success |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_delete_instance**
> v1_delete_instance(instance_id)

Remove Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID

    try:
        # Remove Instance
        api_instance.v1_delete_instance(instance_id)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_delete_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_image**
> Image v1_get_image(image_id)

Get Image Metadata

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    image_id = 'image_id_example' # str | Image ID - uuid

    try:
        # Get Image Metadata
        api_response = api_instance.v1_get_image(image_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_image: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **image_id** | **str**| Image ID - uuid | 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**404** | application/json |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_images**
> Image v1_get_images(project=project)

Get all Images Metadata

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    project = 'project_example' # str | Optionally filter by project - uuid (optional)

    try:
        # Get all Images Metadata
        api_response = api_instance.v1_get_images(project=project)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_images: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project** | **str**| Optionally filter by project - uuid | [optional] 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance**
> Instance v1_get_instance(instance_id, return_attr=return_attr)

Get Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID
return_attr = ['return_attr_example'] # list[str] | Attributes to include in instance return (optional)

    try:
        # Get Instance
        api_response = api_instance.v1_get_instance(instance_id, return_attr=return_attr)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID | 
 **return_attr** | [**list[str]**](str.md)| Attributes to include in instance return | [optional] 

### Return type

[**Instance**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_console**
> InstanceConsoleEndpoint v1_get_instance_console(instance_id)

Get console websocket URL

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Get console websocket URL
        api_response = api_instance.v1_get_instance_console(instance_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_console: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

[**InstanceConsoleEndpoint**](InstanceConsoleEndpoint.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_gpios**
> dict(str, GpioStateDefinition) v1_get_instance_gpios(instance_id)

Get Instance GPIOs

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Get Instance GPIOs
        api_response = api_instance.v1_get_instance_gpios(instance_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_gpios: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

[**dict(str, GpioStateDefinition)**](GpioStateDefinition.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Current GPIO State |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_peripherals**
> PeripheralsData v1_get_instance_peripherals(instance_id)

Get Instance Peripherals

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Get Instance Peripherals
        api_response = api_instance.v1_get_instance_peripherals(instance_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_peripherals: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

[**PeripheralsData**](PeripheralsData.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Current Peripherals State |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_state**
> InstanceState v1_get_instance_state(instance_id)

Get state of Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Get state of Instance
        api_response = api_instance.v1_get_instance_state(instance_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_state: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

[**InstanceState**](InstanceState.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Current Instance State |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instances**
> list[Instance] v1_get_instances(name=name, return_attr=return_attr)

Get Instances

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    name = 'name_example' # str | Optionally filter by project name (optional)
return_attr = ['return_attr_example'] # list[str] | Attributes to include in instance return (optional)

    try:
        # Get Instances
        api_response = api_instance.v1_get_instances(name=name, return_attr=return_attr)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_instances: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**| Optionally filter by project name | [optional] 
 **return_attr** | [**list[str]**](str.md)| Attributes to include in instance return | [optional] 

### Return type

[**list[Instance]**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_model_software**
> list[Firmware] v1_get_model_software(model)

Get Software for Model

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    model = 'model_example' # str | Model to list available software for

    try:
        # Get Software for Model
        api_response = api_instance.v1_get_model_software(model)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_model_software: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **model** | **str**| Model to list available software for | 

### Return type

[**list[Firmware]**](Firmware.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Supported software loads for this model |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_models**
> list[Model] v1_get_models()

Get Supported Models

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    
    try:
        # Get Supported Models
        api_response = api_instance.v1_get_models()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_models: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[Model]**](Model.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Supported device configurations |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_project**
> Project v1_get_project(project_id)

Get Project

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    project_id = 'project_id_example' # str | Project ID - uuid

    try:
        # Get Project
        api_response = api_instance.v1_get_project(project_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_project: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid | 

### Return type

[**Project**](Project.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_project_instances**
> list[Instance] v1_get_project_instances(project_id, name=name, return_attr=return_attr)

Get Instances in Project

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    project_id = 'project_id_example' # str | Project ID - uuid
name = 'name_example' # str | Filter by project name (optional)
return_attr = ['return_attr_example'] # list[str] | Attributes to include in instance return (optional)

    try:
        # Get Instances in Project
        api_response = api_instance.v1_get_project_instances(project_id, name=name, return_attr=return_attr)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_project_instances: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid | 
 **name** | **str**| Filter by project name | [optional] 
 **return_attr** | [**list[str]**](str.md)| Attributes to include in instance return | [optional] 

### Return type

[**list[Instance]**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_projects**
> list[Project] v1_get_projects(name=name, ids_only=ids_only)

Get Projects

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    name = 'name_example' # str | Filter by project name (optional)
ids_only = True # bool | Only include id of project in results (optional)

    try:
        # Get Projects
        api_response = api_instance.v1_get_projects(name=name, ids_only=ids_only)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_projects: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**| Filter by project name | [optional] 
 **ids_only** | **bool**| Only include id of project in results | [optional] 

### Return type

[**list[Project]**](Project.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Projects |  -  |
**403** | Forbidden |  -  |
**404** | No Projects Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_snapshot**
> Snapshot v1_get_snapshot(instance_id, snapshot_id)

Get Instance Snapshots

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
snapshot_id = 'snapshot_id_example' # str | Snapshot ID - uuid

    try:
        # Get Instance Snapshots
        api_response = api_instance.v1_get_snapshot(instance_id, snapshot_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_snapshot: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **snapshot_id** | **str**| Snapshot ID - uuid | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_snapshots**
> list[Snapshot] v1_get_snapshots(instance_id)

Get Instance Snapshots

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Get Instance Snapshots
        api_response = api_instance.v1_get_snapshots(instance_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_get_snapshots: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

[**list[Snapshot]**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_patch_instance**
> Instance v1_patch_instance(instance_id, body)

Update Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID
body = {
 "name": "New Name"
} # object | 

    try:
        # Update Instance
        api_response = api_instance.v1_patch_instance(instance_id, body)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_patch_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID | 
 **body** | **object**|  | 

### Return type

[**Instance**](Instance.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_pause_instance**
> v1_pause_instance(instance_id)

Pause an Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Pause an Instance
        api_instance.v1_pause_instance(instance_id)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_pause_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_ready**
> v1_ready()

API Status

Check if  API is ready for queries

### Example

```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)


# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    
    try:
        # API Status
        api_instance.v1_ready()
    except ApiException as e:
        print("Exception when calling ArmApi->v1_ready: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | API is ready for queries |  -  |
**503** | API is not ready |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_reboot_instance**
> v1_reboot_instance(instance_id)

Reboot an Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Reboot an Instance
        api_instance.v1_reboot_instance(instance_id)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_reboot_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_restore_snapshot**
> v1_restore_snapshot(instance_id, snapshot_id)

Restore a Snapshot

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
snapshot_id = 'snapshot_id_example' # str | Snapshot ID - uuid

    try:
        # Restore a Snapshot
        api_instance.v1_restore_snapshot(instance_id, snapshot_id)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_restore_snapshot: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **snapshot_id** | **str**| Snapshot ID - uuid | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_set_instance_gpios**
> dict(str, GpioStateDefinition) v1_set_instance_gpios(instance_id, request_body)

Set Instance GPIOs

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
request_body = {
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
} # dict(str, GpioStateDefinition) | New GPIO state

    try:
        # Set Instance GPIOs
        api_response = api_instance.v1_set_instance_gpios(instance_id, request_body)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_set_instance_gpios: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **request_body** | [**dict(str, GpioStateDefinition)**](GpioStateDefinition.md)| New GPIO state | 

### Return type

[**dict(str, GpioStateDefinition)**](GpioStateDefinition.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Current GPIOs State |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_set_instance_peripherals**
> PeripheralsData v1_set_instance_peripherals(instance_id, peripherals_data)

Set Instance Peripherals

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
peripherals_data = {
  "acceleration": [0, 9.81, 0],
  "gyroscope": [0, 0, 0],
  "magnetic": [0, 45, 0 ],
  "orientation": [0, 0, 0 ],
  "temperature": 25,
  "proximity": 50,
  "light": 20,
  "pressure": 1013.25,
  "humidity": 55
} # PeripheralsData | New peripherals state

    try:
        # Set Instance Peripherals
        api_response = api_instance.v1_set_instance_peripherals(instance_id, peripherals_data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_set_instance_peripherals: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **peripherals_data** | [**PeripheralsData**](PeripheralsData.md)| New peripherals state | 

### Return type

[**PeripheralsData**](PeripheralsData.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Current Peripherals State |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_set_instance_state**
> v1_set_instance_state(instance_id, v1_set_state_body)

Set state of Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
v1_set_state_body = AvhClientAsync.V1SetStateBody() # V1SetStateBody | Desired State

    try:
        # Set state of Instance
        api_instance.v1_set_instance_state(instance_id, v1_set_state_body)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_set_instance_state: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **v1_set_state_body** | [**V1SetStateBody**](V1SetStateBody.md)| Desired State | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |
**409** | Conflict |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_snapshot_delete**
> v1_snapshot_delete(instance_id, snapshot_id)

Delete a Snapshot

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
snapshot_id = 'snapshot_id_example' # str | Snapshot ID - uuid

    try:
        # Delete a Snapshot
        api_instance.v1_snapshot_delete(instance_id, snapshot_id)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_snapshot_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **snapshot_id** | **str**| Snapshot ID - uuid | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_snapshot_rename**
> Snapshot v1_snapshot_rename(instance_id, snapshot_id, snapshot_creation_options)

Rename a Snapshot

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
snapshot_id = 'snapshot_id_example' # str | Snapshot ID - uuid
snapshot_creation_options = AvhClientAsync.SnapshotCreationOptions() # SnapshotCreationOptions | 

    try:
        # Rename a Snapshot
        api_response = api_instance.v1_snapshot_rename(instance_id, snapshot_id, snapshot_creation_options)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_snapshot_rename: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **snapshot_id** | **str**| Snapshot ID - uuid | 
 **snapshot_creation_options** | [**SnapshotCreationOptions**](SnapshotCreationOptions.md)|  | 

### Return type

[**Snapshot**](Snapshot.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_start_instance**
> v1_start_instance(instance_id, instance_start_options=instance_start_options)

Start an Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
instance_start_options = AvhClientAsync.InstanceStartOptions() # InstanceStartOptions | Start options (optional)

    try:
        # Start an Instance
        api_instance.v1_start_instance(instance_id, instance_start_options=instance_start_options)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_start_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **instance_start_options** | [**InstanceStartOptions**](InstanceStartOptions.md)| Start options | [optional] 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |
**409** | Conflict |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_stop_instance**
> v1_stop_instance(instance_id, instance_stop_options=instance_stop_options)

Stop an Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid
instance_stop_options = AvhClientAsync.InstanceStopOptions() # InstanceStopOptions | Stop options (optional)

    try:
        # Stop an Instance
        api_instance.v1_stop_instance(instance_id, instance_stop_options=instance_stop_options)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_stop_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 
 **instance_stop_options** | [**InstanceStopOptions**](InstanceStopOptions.md)| Stop options | [optional] 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |
**409** | Conflict |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_unpause_instance**
> v1_unpause_instance(instance_id)

Unpause an Instance

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    instance_id = 'instance_id_example' # str | Instance ID - uuid

    try:
        # Unpause an Instance
        api_instance.v1_unpause_instance(instance_id)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_unpause_instance: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid | 

### Return type

void (empty response body)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**204** | Accepted |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_upload_image_data**
> Image v1_upload_image_data(image_id, body)

Upload Image Data

If the active project has enough remaining quota, updates an Image with the contents of the request body.

### Example

* Bearer (JWT) Authentication (BearerAuth):
```python
from __future__ import print_function
import time
import AvhClientAsync
from AvhClientAsync.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhClientAsync.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (JWT): BearerAuth
configuration = AvhClientAsync.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with AvhClientAsync.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhClientAsync.ArmApi(api_client)
    image_id = 'image_id_example' # str | Image ID - uuid
body = 'body_example' # str | Uploaded Image

    try:
        # Upload Image Data
        api_response = api_instance.v1_upload_image_data(image_id, body)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ArmApi->v1_upload_image_data: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **image_id** | **str**| Image ID - uuid | 
 **body** | **str**| Uploaded Image | 

### Return type

[**Image**](Image.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: binary
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | application/json |  -  |
**404** | application/json |  -  |
**409** | Conflict |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

