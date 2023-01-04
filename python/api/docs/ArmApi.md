# avh_api.ArmApi

All URIs are relative to *https://app.avh.arm.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**trial_status**](ArmApi.md#trial_status) | **GET** /v1/billing/trial-status/{trialEmail} | Get Trial Status
[**v1_add_project_key**](ArmApi.md#v1_add_project_key) | **POST** /v1/projects/{projectId}/keys | Add Project Authorized Key
[**v1_add_team_role_to_project**](ArmApi.md#v1_add_team_role_to_project) | **PUT** /v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId} | Add team role to project
[**v1_add_user_role_to_project**](ArmApi.md#v1_add_user_role_to_project) | **PUT** /v1/roles/projects/{projectId}/users/{userId}/roles/{roleId} | Add user role to project
[**v1_add_user_to_team**](ArmApi.md#v1_add_user_to_team) | **PUT** /v1/teams/{teamId}/users/{userId} | Add user to team
[**v1_auth_login**](ArmApi.md#v1_auth_login) | **POST** /v1/auth/login | Log In
[**v1_btrace_preauthorize**](ArmApi.md#v1_btrace_preauthorize) | **GET** /v1/instances/{instanceId}/btrace-authorize | Pre-authorize an btrace download
[**v1_clear_core_trace**](ArmApi.md#v1_clear_core_trace) | **DELETE** /v1/instances/{instanceId}/strace | Clear CoreTrace logs
[**v1_clear_hyper_trace**](ArmApi.md#v1_clear_hyper_trace) | **DELETE** /v1/instances/{instanceId}/btrace | Clear HyperTrace logs
[**v1_clear_hyper_trace_hooks**](ArmApi.md#v1_clear_hyper_trace_hooks) | **POST** /v1/instances/{instanceId}/hooks/clear | Clear Hooks on an instance
[**v1_clear_instance_panics**](ArmApi.md#v1_clear_instance_panics) | **DELETE** /v1/instances/{instanceId}/panics | Clear Panics
[**v1_create_hook**](ArmApi.md#v1_create_hook) | **POST** /v1/instances/{instanceId}/hooks | Create hypervisor hook for Instance
[**v1_create_image**](ArmApi.md#v1_create_image) | **POST** /v1/images | Create a new Image
[**v1_create_instance**](ArmApi.md#v1_create_instance) | **POST** /v1/instances | Create Instance
[**v1_create_project**](ArmApi.md#v1_create_project) | **POST** /v1/projects | Create a Project
[**v1_create_snapshot**](ArmApi.md#v1_create_snapshot) | **POST** /v1/instances/{instanceId}/snapshots | Create Instance Snapshot
[**v1_create_subscriber_invite**](ArmApi.md#v1_create_subscriber_invite) | **POST** /v1/billing/invites | Create Subscriber Invite
[**v1_delete_hook**](ArmApi.md#v1_delete_hook) | **DELETE** /v1/hooks/{hookId} | Delete an existing hypervisor hook
[**v1_delete_image**](ArmApi.md#v1_delete_image) | **DELETE** /v2/images/{imageId} | Delete Image
[**v1_delete_instance**](ArmApi.md#v1_delete_instance) | **DELETE** /v1/instances/{instanceId} | Remove Instance
[**v1_delete_instance_snapshot**](ArmApi.md#v1_delete_instance_snapshot) | **DELETE** /v1/instances/{instanceId}/snapshots/{snapshotId} | Delete a Snapshot
[**v1_delete_project**](ArmApi.md#v1_delete_project) | **DELETE** /v1/projects/{projectId} | Delete a Project
[**v1_delete_snapshot**](ArmApi.md#v1_delete_snapshot) | **DELETE** /v1/snapshots/{snapshotId} | Delete a Snapshot
[**v1_disable_expose_port**](ArmApi.md#v1_disable_expose_port) | **POST** /v1/instances/{instanceId}/exposeport/disable | Disable an exposed port on an instance for device access.
[**v1_enable_expose_port**](ArmApi.md#v1_enable_expose_port) | **POST** /v1/instances/{instanceId}/exposeport/enable | Enable an exposed port on an instance for device access.
[**v1_execute_hyper_trace_hooks**](ArmApi.md#v1_execute_hyper_trace_hooks) | **POST** /v1/instances/{instanceId}/hooks/execute | Execute Hooks on an instance
[**v1_get_hook_by_id**](ArmApi.md#v1_get_hook_by_id) | **GET** /v1/hooks/{hookId} | Get hypervisor hook by id
[**v1_get_hooks**](ArmApi.md#v1_get_hooks) | **GET** /v1/instances/{instanceId}/hooks | Get all hypervisor hooks for Instance
[**v1_get_image**](ArmApi.md#v1_get_image) | **GET** /v1/images/{imageId} | Get Image Metadata
[**v1_get_images**](ArmApi.md#v1_get_images) | **GET** /v1/images | Get all Images Metadata
[**v1_get_instance**](ArmApi.md#v1_get_instance) | **GET** /v1/instances/{instanceId} | Get Instance
[**v1_get_instance_console**](ArmApi.md#v1_get_instance_console) | **GET** /v1/instances/{instanceId}/console | Get console websocket URL
[**v1_get_instance_console_log**](ArmApi.md#v1_get_instance_console_log) | **GET** /v1/instances/{instanceId}/consoleLog | Get Console Log
[**v1_get_instance_gpios**](ArmApi.md#v1_get_instance_gpios) | **GET** /v1/instances/{instanceId}/gpios | Get Instance GPIOs
[**v1_get_instance_panics**](ArmApi.md#v1_get_instance_panics) | **GET** /v1/instances/{instanceId}/panics | Get Panics
[**v1_get_instance_peripherals**](ArmApi.md#v1_get_instance_peripherals) | **GET** /v1/instances/{instanceId}/peripherals | Get Instance Peripherals
[**v1_get_instance_quick_connect_command**](ArmApi.md#v1_get_instance_quick_connect_command) | **GET** /v1/instances/{instanceId}/quickConnectCommand | Recommended SSH Command for Quick Connect
[**v1_get_instance_screenshot**](ArmApi.md#v1_get_instance_screenshot) | **GET** /v1/instances/{instanceId}/screenshot.{format} | Get Instance Screenshot
[**v1_get_instance_snapshot**](ArmApi.md#v1_get_instance_snapshot) | **GET** /v1/instances/{instanceId}/snapshots/{snapshotId} | Get Instance Snapshot
[**v1_get_instance_snapshots**](ArmApi.md#v1_get_instance_snapshots) | **GET** /v1/instances/{instanceId}/snapshots | Get Instance Snapshots
[**v1_get_instance_state**](ArmApi.md#v1_get_instance_state) | **GET** /v1/instances/{instanceId}/state | Get state of Instance
[**v1_get_instances**](ArmApi.md#v1_get_instances) | **GET** /v1/instances | Get Instances
[**v1_get_model_software**](ArmApi.md#v1_get_model_software) | **GET** /v1/models/{model}/software | Get Software for Model
[**v1_get_models**](ArmApi.md#v1_get_models) | **GET** /v1/models | Get Supported Models
[**v1_get_project**](ArmApi.md#v1_get_project) | **GET** /v1/projects/{projectId} | Get a Project
[**v1_get_project_instances**](ArmApi.md#v1_get_project_instances) | **GET** /v1/projects/{projectId}/instances | Get Instances in Project
[**v1_get_project_keys**](ArmApi.md#v1_get_project_keys) | **GET** /v1/projects/{projectId}/keys | Get Project Authorized Keys
[**v1_get_project_vpn_config**](ArmApi.md#v1_get_project_vpn_config) | **GET** /v1/projects/{projectId}/vpnconfig/{format} | Get Project VPN Configuration
[**v1_get_projects**](ArmApi.md#v1_get_projects) | **GET** /v1/projects | Get Projects
[**v1_get_snapshot**](ArmApi.md#v1_get_snapshot) | **GET** /v1/snapshots/{snapshotId} | Get Snapshot
[**v1_kcrange**](ArmApi.md#v1_kcrange) | **GET** /v1/instances/{instanceId}/btrace-kcrange | Get Kernel extension ranges
[**v1_list_threads**](ArmApi.md#v1_list_threads) | **GET** /v1/instances/{instanceId}/strace/thread-list | Get Running Threads (CoreTrace)
[**v1_media_play**](ArmApi.md#v1_media_play) | **POST** /v1/instances/{instanceId}/media/play | Start playing media
[**v1_media_stop**](ArmApi.md#v1_media_stop) | **POST** /v1/instances/{instanceId}/media/stop | Stop playing media
[**v1_patch_instance**](ArmApi.md#v1_patch_instance) | **PATCH** /v1/instances/{instanceId} | Update Instance
[**v1_pause_instance**](ArmApi.md#v1_pause_instance) | **POST** /v1/instances/{instanceId}/pause | Pause an Instance
[**v1_post_instance_input**](ArmApi.md#v1_post_instance_input) | **POST** /v1/instances/{instanceId}/input | Provide Instance Input
[**v1_ready**](ArmApi.md#v1_ready) | **GET** /v1/ready | API Status
[**v1_reboot_instance**](ArmApi.md#v1_reboot_instance) | **POST** /v1/instances/{instanceId}/reboot | Reboot an Instance
[**v1_remove_project_key**](ArmApi.md#v1_remove_project_key) | **DELETE** /v1/projects/{projectId}/keys/{keyId} | Delete Project Authorized Key
[**v1_remove_team_role_from_project**](ArmApi.md#v1_remove_team_role_from_project) | **DELETE** /v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId} | Remove team role from project
[**v1_remove_user_from_team**](ArmApi.md#v1_remove_user_from_team) | **DELETE** /v1/teams/{teamId}/users/{userId} | Remove user from team
[**v1_remove_user_role_from_project**](ArmApi.md#v1_remove_user_role_from_project) | **DELETE** /v1/roles/projects/{projectId}/users/{userId}/roles/{roleId} | Remove user role from project
[**v1_rename_instance_snapshot**](ArmApi.md#v1_rename_instance_snapshot) | **PATCH** /v1/instances/{instanceId}/snapshots/{snapshotId} | Rename a Snapshot
[**v1_restore_instance_snapshot**](ArmApi.md#v1_restore_instance_snapshot) | **POST** /v1/instances/{instanceId}/snapshots/{snapshotId}/restore | Restore a Snapshot
[**v1_roles**](ArmApi.md#v1_roles) | **GET** /v1/roles | Get all roles
[**v1_set_instance_gpios**](ArmApi.md#v1_set_instance_gpios) | **PUT** /v1/instances/{instanceId}/gpios | Set Instance GPIOs
[**v1_set_instance_peripherals**](ArmApi.md#v1_set_instance_peripherals) | **PUT** /v1/instances/{instanceId}/peripherals | Set Instance Peripherals
[**v1_set_instance_state**](ArmApi.md#v1_set_instance_state) | **PUT** /v1/instances/{instanceId}/state | Set state of Instance
[**v1_snapshot_rename**](ArmApi.md#v1_snapshot_rename) | **PATCH** /v1/snapshots/{snapshotId} | Rename a Snapshot
[**v1_start_core_trace**](ArmApi.md#v1_start_core_trace) | **POST** /v1/instances/{instanceId}/strace/enable | Start CoreTrace on an instance
[**v1_start_hyper_trace**](ArmApi.md#v1_start_hyper_trace) | **POST** /v1/instances/{instanceId}/btrace/enable | Start HyperTrace on an instance
[**v1_start_instance**](ArmApi.md#v1_start_instance) | **POST** /v1/instances/{instanceId}/start | Start an Instance
[**v1_start_network_monitor**](ArmApi.md#v1_start_network_monitor) | **POST** /v1/instances/{instanceId}/sslsplit/enable | Start Network Monitor on an instance.
[**v1_stop_core_trace**](ArmApi.md#v1_stop_core_trace) | **POST** /v1/instances/{instanceId}/strace/disable | Stop CoreTrace on an instance.
[**v1_stop_hyper_trace**](ArmApi.md#v1_stop_hyper_trace) | **POST** /v1/instances/{instanceId}/btrace/disable | Stop HyperTrace on an instance.
[**v1_stop_instance**](ArmApi.md#v1_stop_instance) | **POST** /v1/instances/{instanceId}/stop | Stop an Instance
[**v1_stop_network_monitor**](ArmApi.md#v1_stop_network_monitor) | **POST** /v1/instances/{instanceId}/sslsplit/disable | Stop Network Monitor on an instance.
[**v1_team_change**](ArmApi.md#v1_team_change) | **PATCH** /v1/teams/{teamId} | Update team
[**v1_team_create**](ArmApi.md#v1_team_create) | **POST** /v1/teams | Create team
[**v1_team_delete**](ArmApi.md#v1_team_delete) | **DELETE** /v1/teams/{teamId} | Delete team
[**v1_teams**](ArmApi.md#v1_teams) | **GET** /v1/teams | Get teams
[**v1_unpause_instance**](ArmApi.md#v1_unpause_instance) | **POST** /v1/instances/{instanceId}/unpause | Unpause an Instance
[**v1_update_hook**](ArmApi.md#v1_update_hook) | **PUT** /v1/hooks/{hookId} | Update an existing hypervisor hook
[**v1_update_project**](ArmApi.md#v1_update_project) | **PATCH** /v1/projects/{projectId} | Update a Project
[**v1_update_project_settings**](ArmApi.md#v1_update_project_settings) | **PATCH** /v1/projects/{projectId}/settings | Change Project Settings
[**v1_upload_image_data**](ArmApi.md#v1_upload_image_data) | **POST** /v1/images/{imageId} | Upload Image Data


# **trial_status**
> {str: (bool, date, datetime, dict, float, int, list, str, none_type)} trial_status(trial_email)

Get Trial Status

Allow users to check the trial status of an email.

### Example


```python
import time
import avh_api
from avh_api.api import arm_api
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)


# Enter a context with an instance of the API client
with avh_api.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    trial_email = "trialEmail_example" # str | Trial Email

    # example passing only required values which don't have defaults set
    try:
        # Get Trial Status
        api_response = api_instance.trial_status(trial_email)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->trial_status: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **trial_email** | **str**| Trial Email |

### Return type

**{str: (bool, date, datetime, dict, float, int, list, str, none_type)}**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_add_project_key**
> str v1_add_project_key(project_id, project_key)

Add Project Authorized Key

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.project_key import ProjectKey
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    project_key = ProjectKey(
        identifier="identifier_example",
        kind="ssh",
        project="project_example",
        key="key_example",
        fingerprint="fingerprint_example",
        updated_at=dateutil_parser('1970-01-01T00:00:00.00Z'),
        created_at=dateutil_parser('1970-01-01T00:00:00.00Z'),
    ) # ProjectKey | Key to add

    # example passing only required values which don't have defaults set
    try:
        # Add Project Authorized Key
        api_response = api_instance.v1_add_project_key(project_id, project_key)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_add_project_key: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **project_key** | [**ProjectKey**](ProjectKey.md)| Key to add |

### Return type

**str**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Authorized Keys |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_add_team_role_to_project**
> v1_add_team_role_to_project(project_id, team_id, role_id)

Add team role to project

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    team_id = "teamId_example" # str | Team ID - uuid
    role_id = "roleId_example" # str | Role ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Add team role to project
        api_instance.v1_add_team_role_to_project(project_id, team_id, role_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_add_team_role_to_project: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **team_id** | **str**| Team ID - uuid |
 **role_id** | **str**| Role ID - uuid |

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
**200** | Success |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_add_user_role_to_project**
> v1_add_user_role_to_project(project_id, user_id, role_id)

Add user role to project

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    user_id = "userId_example" # str | User ID - uuid
    role_id = "roleId_example" # str | Role ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Add user role to project
        api_instance.v1_add_user_role_to_project(project_id, user_id, role_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_add_user_role_to_project: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **user_id** | **str**| User ID - uuid |
 **role_id** | **str**| Role ID - uuid |

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
**200** | Success |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_add_user_to_team**
> v1_add_user_to_team(team_id, user_id)

Add user to team

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from avh_api.model.api_internal_consistency_error import ApiInternalConsistencyError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    team_id = "teamId_example" # str | Team ID - uuid
    user_id = "userId_example" # str | User ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Add user to team
        api_instance.v1_add_user_to_team(team_id, user_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_add_user_to_team: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **team_id** | **str**| Team ID - uuid |
 **user_id** | **str**| User ID - uuid |

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
**403** | Forbidden |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_auth_login**
> Token v1_auth_login(api_token)

Log In

### Example


```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.token import Token
from avh_api.model.api_error import ApiError
from avh_api.model.api_token import ApiToken
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)


# Enter a context with an instance of the API client
with avh_api.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    api_token = ApiToken(
        api_token="api_token_example",
    ) # ApiToken | Authorization Data

    # example passing only required values which don't have defaults set
    try:
        # Log In
        api_response = api_instance.v1_auth_login(api_token)
        pprint(api_response)
    except avh_api.ApiException as e:
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

# **v1_btrace_preauthorize**
> {str: (bool, date, datetime, dict, float, int, list, str, none_type)} v1_btrace_preauthorize(instance_id)

Pre-authorize an btrace download

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Pre-authorize an btrace download
        api_response = api_instance.v1_btrace_preauthorize(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_btrace_preauthorize: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

**{str: (bool, date, datetime, dict, float, int, list, str, none_type)}**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Token |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_clear_core_trace**
> v1_clear_core_trace(instance_id)

Clear CoreTrace logs

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Clear CoreTrace logs
        api_instance.v1_clear_core_trace(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_clear_core_trace: %s\n" % e)
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_clear_hyper_trace**
> v1_clear_hyper_trace(instance_id)

Clear HyperTrace logs

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Clear HyperTrace logs
        api_instance.v1_clear_hyper_trace(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_clear_hyper_trace: %s\n" % e)
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_clear_hyper_trace_hooks**
> v1_clear_hyper_trace_hooks(instance_id)

Clear Hooks on an instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Clear Hooks on an instance
        api_instance.v1_clear_hyper_trace_hooks(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_clear_hyper_trace_hooks: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_clear_instance_panics**
> v1_clear_instance_panics(instance_id)

Clear Panics

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Clear Panics
        api_instance.v1_clear_instance_panics(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_clear_instance_panics: %s\n" % e)
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_create_hook**
> Hook v1_create_hook(instance_id, v1_create_hook_parameters)

Create hypervisor hook for Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.hook import Hook
from avh_api.model.user_error import UserError
from avh_api.model.v1_create_hook_parameters import V1CreateHookParameters
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    v1_create_hook_parameters = V1CreateHookParameters(
        label="label_example",
        address="address_example",
        patch="patch_example",
        patch_type="csmfcc",
    ) # V1CreateHookParameters | application/json

    # example passing only required values which don't have defaults set
    try:
        # Create hypervisor hook for Instance
        api_response = api_instance.v1_create_hook(instance_id, v1_create_hook_parameters)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_create_hook: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |
 **v1_create_hook_parameters** | [**V1CreateHookParameters**](V1CreateHookParameters.md)| application/json |

### Return type

[**Hook**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** | Hook |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_create_image**
> Image v1_create_image(type, )

Create a new Image

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.image import Image
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    type = "type_example" # str | Image type
    encapsulated = True # bool, none_type | set to false if the uploaded file is not encapsulated inside an outer zipfile (optional)
    name = "name_example" # str, none_type | Image name (optional)
    project = "project_example" # str, none_type | Project ID (optional)
    instance = "instance_example" # str, none_type | Instance ID (optional)
    file = open('/path/to/file', 'rb') # file_type, none_type | Optionally the actual file (optional)

    # example passing only required values which don't have defaults set
    try:
        # Create a new Image
        api_response = api_instance.v1_create_image(type, )
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_create_image: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Create a new Image
        api_response = api_instance.v1_create_image(type, encapsulated=encapsulated, name=name, project=project, instance=instance, file=file)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_create_image: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **str**| Image type |
 **encoding** | **str**| How the file is stored | defaults to "plain"
 **encapsulated** | **bool, none_type**| set to false if the uploaded file is not encapsulated inside an outer zipfile | [optional]
 **name** | **str, none_type**| Image name | [optional]
 **project** | **str, none_type**| Project ID | [optional]
 **instance** | **str, none_type**| Instance ID | [optional]
 **file** | **file_type, none_type**| Optionally the actual file | [optional]

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

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.instance_return import InstanceReturn
from avh_api.model.user_error import UserError
from avh_api.model.instance_create_options import InstanceCreateOptions
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_create_options = InstanceCreateOptions(
        name="name_example",
        key="key_example",
        flavor="flavor_example",
        project="project_example",
        os="os_example",
        osbuild="osbuild_example",
        patches=[
            "patches_example",
        ],
        fwpackage="fwpackage_example",
        orig_fw_package_url="orig_fw_package_url_example",
        encrypt=True,
        override_wifi_mac="override_wifi_mac_example",
        volume=VolumeOptions(
            allocate=3.14,
            partitions=[
                {},
            ],
            compute_node="compute_node_example",
        ),
        snapshot="snapshot_example",
        boot_options=InstanceBootOptions(
            boot_args="boot_args_example",
            restore_boot_args="restore_boot_args_example",
            udid="udid_example",
            ecid="ecid_example",
            random_seed="random_seed_example",
            pac=True,
            aprr=True,
            additional_tags=[
                InstanceBootOptionsAdditionalTag("kalloc"),
            ],
        ),
        device=Model(
            type="type_example",
            name="name_example",
            flavor="flavor_example",
            description="description_example",
            model="model_example",
            board_config="board_config_example",
            platform="platform_example",
            cpid=3.14,
            bdid=3.14,
            peripherals=True,
        ),
    ) # InstanceCreateOptions | The vm definition to create

    # example passing only required values which don't have defaults set
    try:
        # Create Instance
        api_response = api_instance.v1_create_instance(instance_create_options)
        pprint(api_response)
    except avh_api.ApiException as e:
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

# **v1_create_project**
> Project v1_create_project(project)

Create a Project

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.project import Project
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project = Project(
        id="id_example",
        name="name_example",
        settings=ProjectSettings(
            version=3.14,
            internet_access=True,
            dhcp=True,
        ),
        quotas=ProjectQuota(
            cores=3.14,
            instances=3.14,
            ram=3.14,
        ),
        quotas_used=ProjectUsage(
            cores=3.14,
            instances=3.14,
            ram=3.14,
            gpu=3.14,
        ),
    ) # Project | Project

    # example passing only required values which don't have defaults set
    try:
        # Create a Project
        api_response = api_instance.v1_create_project(project)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_create_project: %s\n" % e)
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


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_create_snapshot**
> Snapshot v1_create_snapshot(instance_id, snapshot_creation_options)

Create Instance Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.snapshot_creation_options import SnapshotCreationOptions
from avh_api.model.api_error import ApiError
from avh_api.model.snapshot import Snapshot
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    snapshot_creation_options = SnapshotCreationOptions(
        name="name_example",
    ) # SnapshotCreationOptions | 

    # example passing only required values which don't have defaults set
    try:
        # Create Instance Snapshot
        api_response = api_instance.v1_create_snapshot(instance_id, snapshot_creation_options)
        pprint(api_response)
    except avh_api.ApiException as e:
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

# **v1_create_subscriber_invite**
> SubscriberInvite v1_create_subscriber_invite(subscriber_invite)

Create Subscriber Invite

Create Subscriber Invite

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.subscriber_invite import SubscriberInvite
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    subscriber_invite = SubscriberInvite(
        coupon_options=CouponOptions(
            type="percent",
            amount=3.14,
            used=True,
        ),
        plan=Plan(
            license_type="premium",
            cores=1,
        ),
        trial=Trial(
            duration=3.14,
        ),
        name="name_example",
        email="email_example",
        coupon_code="coupon_code_example",
        domain="domain_example",
        aggregate="aggregate_example",
        use_by="use_by_example",
        active=True,
        reusable=True,
        created_at="created_at_example",
        updated_at="updated_at_example",
    ) # SubscriberInvite | Payload of Subscriber Invite

    # example passing only required values which don't have defaults set
    try:
        # Create Subscriber Invite
        api_response = api_instance.v1_create_subscriber_invite(subscriber_invite)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_create_subscriber_invite: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subscriber_invite** | [**SubscriberInvite**](SubscriberInvite.md)| Payload of Subscriber Invite |

### Return type

[**SubscriberInvite**](SubscriberInvite.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_delete_hook**
> v1_delete_hook(hook_id)

Delete an existing hypervisor hook

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    hook_id = "hookId_example" # str | Hook ID

    # example passing only required values which don't have defaults set
    try:
        # Delete an existing hypervisor hook
        api_instance.v1_delete_hook(hook_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_delete_hook: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hook_id** | **str**| Hook ID |

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
**200** | Accepted |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_delete_image**
> v1_delete_image(image_id)

Delete Image

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    image_id = "imageId_example" # str | Image ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Delete Image
        api_instance.v1_delete_image(image_id)
    except avh_api.ApiException as e:
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

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID

    # example passing only required values which don't have defaults set
    try:
        # Remove Instance
        api_instance.v1_delete_instance(instance_id)
    except avh_api.ApiException as e:
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

# **v1_delete_instance_snapshot**
> v1_delete_instance_snapshot(instance_id, snapshot_id)

Delete a Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    snapshot_id = "snapshotId_example" # str | Snapshot ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Delete a Snapshot
        api_instance.v1_delete_instance_snapshot(instance_id, snapshot_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_delete_instance_snapshot: %s\n" % e)
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

# **v1_delete_project**
> v1_delete_project(project_id)

Delete a Project

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Delete a Project
        api_instance.v1_delete_project(project_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_delete_project: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |

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
**204** | OK |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_delete_snapshot**
> v1_delete_snapshot(snapshot_id)

Delete a Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    snapshot_id = "snapshotId_example" # str | Snapshot ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Delete a Snapshot
        api_instance.v1_delete_snapshot(snapshot_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_delete_snapshot: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
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

# **v1_disable_expose_port**
> v1_disable_expose_port(instance_id)

Disable an exposed port on an instance for device access.

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Disable an exposed port on an instance for device access.
        api_instance.v1_disable_expose_port(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_disable_expose_port: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_enable_expose_port**
> v1_enable_expose_port(instance_id)

Enable an exposed port on an instance for device access.

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Enable an exposed port on an instance for device access.
        api_instance.v1_enable_expose_port(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_enable_expose_port: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_execute_hyper_trace_hooks**
> v1_execute_hyper_trace_hooks(instance_id)

Execute Hooks on an instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Execute Hooks on an instance
        api_instance.v1_execute_hyper_trace_hooks(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_execute_hyper_trace_hooks: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_hook_by_id**
> Hook v1_get_hook_by_id(hook_id)

Get hypervisor hook by id

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.hook import Hook
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    hook_id = "hookId_example" # str | Hook Id

    # example passing only required values which don't have defaults set
    try:
        # Get hypervisor hook by id
        api_response = api_instance.v1_get_hook_by_id(hook_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_hook_by_id: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hook_id** | **str**| Hook Id |

### Return type

[**Hook**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Hook |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_hooks**
> [Hook] v1_get_hooks(instance_id)

Get all hypervisor hooks for Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.hook import Hook
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    limit = 3.14 # float | limit for pagination results, defaults to 20 (optional)
    offset = 3.14 # float | offset for pagination results, defaults to 0 (optional)
    sort = "ASC" # str | sort ASC or DESC, defaults to DESC (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get all hypervisor hooks for Instance
        api_response = api_instance.v1_get_hooks(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_hooks: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get all hypervisor hooks for Instance
        api_response = api_instance.v1_get_hooks(instance_id, limit=limit, offset=offset, sort=sort)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_hooks: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |
 **limit** | **float**| limit for pagination results, defaults to 20 | [optional]
 **offset** | **float**| offset for pagination results, defaults to 0 | [optional]
 **sort** | **str**| sort ASC or DESC, defaults to DESC | [optional]

### Return type

[**[Hook]**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Hooks |  -  |
**304** | No changes |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_image**
> Image v1_get_image(image_id)

Get Image Metadata

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.image import Image
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    image_id = "imageId_example" # str | Image ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Image Metadata
        api_response = api_instance.v1_get_image(image_id)
        pprint(api_response)
    except avh_api.ApiException as e:
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
> [Image] v1_get_images()

Get all Images Metadata

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.image import Image
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project = "project_example" # str | Optionally filter by project - uuid (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get all Images Metadata
        api_response = api_instance.v1_get_images(project=project)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_images: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project** | **str**| Optionally filter by project - uuid | [optional]

### Return type

[**[Image]**](Image.md)

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
> Instance v1_get_instance(instance_id)

Get Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.instance import Instance
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID
    return_attr = [
        "returnAttr_example",
    ] # [str] | Attributes to include in instance return (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Instance
        api_response = api_instance.v1_get_instance(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Instance
        api_response = api_instance.v1_get_instance(instance_id, return_attr=return_attr)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID |
 **return_attr** | **[str]**| Attributes to include in instance return | [optional]

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

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.instance_console_endpoint import InstanceConsoleEndpoint
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get console websocket URL
        api_response = api_instance.v1_get_instance_console(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
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

# **v1_get_instance_console_log**
> str v1_get_instance_console_log(instance_id)

Get Console Log

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Console Log
        api_response = api_instance.v1_get_instance_console_log(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_console_log: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

**str**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Current console log |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_gpios**
> GpiosState v1_get_instance_gpios(instance_id)

Get Instance GPIOs

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.gpios_state import GpiosState
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Instance GPIOs
        api_response = api_instance.v1_get_instance_gpios(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_gpios: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

[**GpiosState**](GpiosState.md)

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

# **v1_get_instance_panics**
> [{str: (bool, date, datetime, dict, float, int, list, str, none_type)}] v1_get_instance_panics(instance_id)

Get Panics

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Panics
        api_response = api_instance.v1_get_instance_panics(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_panics: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

**[{str: (bool, date, datetime, dict, float, int, list, str, none_type)}]**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Array of panics |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_peripherals**
> PeripheralsData v1_get_instance_peripherals(instance_id)

Get Instance Peripherals

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.peripherals_data import PeripheralsData
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Instance Peripherals
        api_response = api_instance.v1_get_instance_peripherals(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
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

# **v1_get_instance_quick_connect_command**
> str v1_get_instance_quick_connect_command(instance_id)

Recommended SSH Command for Quick Connect

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Recommended SSH Command for Quick Connect
        api_response = api_instance.v1_get_instance_quick_connect_command(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_quick_connect_command: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

**str**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Quick Connect Command |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_screenshot**
> file_type v1_get_instance_screenshot(instance_id, format)

Get Instance Screenshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    format = "png" # str | New peripherals state
    scale = 1 # int | Screenshot scale 1:N (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Instance Screenshot
        api_response = api_instance.v1_get_instance_screenshot(instance_id, format)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_screenshot: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Instance Screenshot
        api_response = api_instance.v1_get_instance_screenshot(instance_id, format, scale=scale)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_screenshot: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |
 **format** | **str**| New peripherals state |
 **scale** | **int**| Screenshot scale 1:N | [optional]

### Return type

**file_type**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: image/png, image/jpeg, application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Screenshot |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_instance_snapshot**
> Snapshot v1_get_instance_snapshot(instance_id, snapshot_id)

Get Instance Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from avh_api.model.snapshot import Snapshot
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    snapshot_id = "snapshotId_example" # str | Snapshot ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Instance Snapshot
        api_response = api_instance.v1_get_instance_snapshot(instance_id, snapshot_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_snapshot: %s\n" % e)
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

# **v1_get_instance_snapshots**
> [Snapshot] v1_get_instance_snapshots(instance_id)

Get Instance Snapshots

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from avh_api.model.snapshot import Snapshot
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Instance Snapshots
        api_response = api_instance.v1_get_instance_snapshots(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instance_snapshots: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

[**[Snapshot]**](Snapshot.md)

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

# **v1_get_instance_state**
> InstanceState v1_get_instance_state(instance_id)

Get state of Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.instance_state import InstanceState
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get state of Instance
        api_response = api_instance.v1_get_instance_state(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
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
> [Instance] v1_get_instances()

Get Instances

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.instance import Instance
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    name = "name_example" # str | Optionally filter by instance name (optional)
    return_attr = [
        "returnAttr_example",
    ] # [str] | Attributes to include in instance return (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Instances
        api_response = api_instance.v1_get_instances(name=name, return_attr=return_attr)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_instances: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**| Optionally filter by instance name | [optional]
 **return_attr** | **[str]**| Attributes to include in instance return | [optional]

### Return type

[**[Instance]**](Instance.md)

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
> [Firmware] v1_get_model_software(model)

Get Software for Model

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.firmware import Firmware
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    model = "model_example" # str | Model to list available software for

    # example passing only required values which don't have defaults set
    try:
        # Get Software for Model
        api_response = api_instance.v1_get_model_software(model)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_model_software: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **model** | **str**| Model to list available software for |

### Return type

[**[Firmware]**](Firmware.md)

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
> [Model] v1_get_models()

Get Supported Models

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.model import Model
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Get Supported Models
        api_response = api_instance.v1_get_models()
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_models: %s\n" % e)
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


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Supported device configurations |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_project**
> Project v1_get_project(project_id)

Get a Project

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.project import Project
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get a Project
        api_response = api_instance.v1_get_project(project_id)
        pprint(api_response)
    except avh_api.ApiException as e:
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
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_project_instances**
> [Instance] v1_get_project_instances(project_id)

Get Instances in Project

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.instance import Instance
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    name = "name_example" # str | Filter by project name (optional)
    return_attr = [
        "returnAttr_example",
    ] # [str] | Attributes to include in instance return (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get Instances in Project
        api_response = api_instance.v1_get_project_instances(project_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_project_instances: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Instances in Project
        api_response = api_instance.v1_get_project_instances(project_id, name=name, return_attr=return_attr)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_project_instances: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **name** | **str**| Filter by project name | [optional]
 **return_attr** | **[str]**| Attributes to include in instance return | [optional]

### Return type

[**[Instance]**](Instance.md)

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

# **v1_get_project_keys**
> [ProjectKey] v1_get_project_keys(project_id)

Get Project Authorized Keys

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.project_key import ProjectKey
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Project Authorized Keys
        api_response = api_instance.v1_get_project_keys(project_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_project_keys: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |

### Return type

[**[ProjectKey]**](ProjectKey.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Authorized Keys |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_project_vpn_config**
> str v1_get_project_vpn_config(project_id, )

Get Project VPN Configuration

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Project VPN Configuration
        api_response = api_instance.v1_get_project_vpn_config(project_id, )
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_project_vpn_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **format** | **str**| VPN Config format | defaults to "ovpn"

### Return type

**str**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/x-openvpn-profile, application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OpenVPN Configuration |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_get_projects**
> [Project] v1_get_projects()

Get Projects

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.project import Project
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    name = "name_example" # str | Filter by project name (optional)
    ids_only = True # bool | Only include id of project in results (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get Projects
        api_response = api_instance.v1_get_projects(name=name, ids_only=ids_only)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_projects: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**| Filter by project name | [optional]
 **ids_only** | **bool**| Only include id of project in results | [optional]

### Return type

[**[Project]**](Project.md)

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
> Snapshot v1_get_snapshot(snapshot_id)

Get Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from avh_api.model.snapshot import Snapshot
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    snapshot_id = "snapshotId_example" # str | Snapshot ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Snapshot
        api_response = api_instance.v1_get_snapshot(snapshot_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_get_snapshot: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
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

# **v1_kcrange**
> [Kcrange] v1_kcrange(instance_id)

Get Kernel extension ranges

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.kcrange import Kcrange
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Kernel extension ranges
        api_response = api_instance.v1_kcrange(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_kcrange: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

[**[Kcrange]**](Kcrange.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Kcranges |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_list_threads**
> [KernelTask] v1_list_threads(instance_id)

Get Running Threads (CoreTrace)

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.kernel_task import KernelTask
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Get Running Threads (CoreTrace)
        api_response = api_instance.v1_list_threads(instance_id)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_list_threads: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |

### Return type

[**[KernelTask]**](KernelTask.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Threads |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_media_play**
> v1_media_play(instance_id, media_play_body)

Start playing media

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.validation_error import ValidationError
from avh_api.model.media_play_body import MediaPlayBody
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    media_play_body = MediaPlayBody(
        image_id="image_id_example",
        url="url_example",
    ) # MediaPlayBody | Request Body

    # example passing only required values which don't have defaults set
    try:
        # Start playing media
        api_instance.v1_media_play(instance_id, media_play_body)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_media_play: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |
 **media_play_body** | [**MediaPlayBody**](MediaPlayBody.md)| Request Body |

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
**204** | Success response |  -  |
**400** | Bad Request |  -  |
**404** | Not Found |  -  |
**409** | Conflict |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_media_stop**
> v1_media_stop(instance_id)

Stop playing media

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.validation_error import ValidationError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Stop playing media
        api_instance.v1_media_stop(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_media_stop: %s\n" % e)
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
**204** | Success response |  -  |
**400** | Bad Request |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_patch_instance**
> Instance v1_patch_instance(instance_id, patch_instance_options)

Update Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.patch_instance_options import PatchInstanceOptions
from avh_api.model.instance import Instance
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID
    patch_instance_options = PatchInstanceOptions(
        name="name_example",
        state="on",
        boot_options=InstanceBootOptions(
            boot_args="boot_args_example",
            restore_boot_args="restore_boot_args_example",
            udid="udid_example",
            ecid="ecid_example",
            random_seed="random_seed_example",
            pac=True,
            aprr=True,
            additional_tags=[
                InstanceBootOptionsAdditionalTag("kalloc"),
            ],
        ),
        proxy="proxy_example",
    ) # PatchInstanceOptions | 

    # example passing only required values which don't have defaults set
    try:
        # Update Instance
        api_response = api_instance.v1_patch_instance(instance_id, patch_instance_options)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_patch_instance: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID |
 **patch_instance_options** | [**PatchInstanceOptions**](PatchInstanceOptions.md)|  |

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

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Pause an Instance
        api_instance.v1_pause_instance(instance_id)
    except avh_api.ApiException as e:
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

# **v1_post_instance_input**
> int v1_post_instance_input(instance_id, instance_input)

Provide Instance Input

Sends a touch or button event to the VM.  - Buttons (or keys) to be held during the input are specified as an array of strings, each string must be either a single ascii character or one of the following keywords:   - VM Buttons: finger, homeButton, holdButton, volumeUp, volumeDown, ringerSwitch, backButton, overviewButton   - Keyboard Buttons: again, alt, alterase, apostrophe, back, backslash, backspace, bassboost, bookmarks, bsp, calc, camera, cancel, caps, capslock, chat, close, closecd, comma, compose, computer, config, connect, copy, ctrl, cut, cyclewindows, dashboard, del, delete, deletefile, dot, down, edit, eject, ejectclose, email, end, enter, equal, esc, escape, exit, f1, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f2, f20, f21, f22, f23, f24, f3, f4, f5, f6, f7, f8, f9, fastfwd, file, finance, find, forward, front, grave, hangeul, hanja, help, henkan, home, homepage, hp, hrgn, ins, insert, iso, k102, kp0, kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9, kpasterisk, kpcomma, kpdot, kpenter, kpequal, kpjpcomma, kpleftparen, kpminus, kpplus, kpplusminus, kprightparen, kpslash, ktkn, ktknhrgn, left, leftalt, leftbrace, leftctrl, leftmeta, leftshift, linefeed, macro, mail, menu, meta, minus, move, msdos, muhenkan, mute, new, next, numlock, open, pagedown, pageup, paste, pause, pausecd, pgdn, pgup, phone, play, playcd, playpause, power, previous, print, prog1, prog2, prog3, prog4, props, question, record, redo, refresh, return, rewind, right, rightalt, rightbrace, rightctrl, rightmeta, rightshift, ro, rotate, scale, screenlock, scrolldown, scrolllock, scrollup, search, semicolon, sendfile, setup, shift, shop, slash, sleep, sound, space, sport, stop, stopcd, suspend, sysrq, tab, undo, up, voldown, volup, wakeup, www, xfer, yen, zkhk

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.instance_input import InstanceInput
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    instance_input = [
        InstanceInput(),
    ] # [InstanceInput] | The input to send to the VM

    # example passing only required values which don't have defaults set
    try:
        # Provide Instance Input
        api_response = api_instance.v1_post_instance_input(instance_id, instance_input)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_post_instance_input: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |
 **instance_input** | [**[InstanceInput]**](InstanceInput.md)| The input to send to the VM |

### Return type

**int**

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | ETA of input completion in milliseconds |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_ready**
> v1_ready()

API Status

Check if  API is ready for queries

### Example


```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)


# Enter a context with an instance of the API client
with avh_api.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # API Status
        api_instance.v1_ready()
    except avh_api.ApiException as e:
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

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Reboot an Instance
        api_instance.v1_reboot_instance(instance_id)
    except avh_api.ApiException as e:
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

# **v1_remove_project_key**
> v1_remove_project_key(project_id, key_id)

Delete Project Authorized Key

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    key_id = "keyId_example" # str | Key ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Delete Project Authorized Key
        api_instance.v1_remove_project_key(project_id, key_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_remove_project_key: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **key_id** | **str**| Key ID - uuid |

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
**204** | Deleted |  -  |
**403** | Forbidden |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_remove_team_role_from_project**
> v1_remove_team_role_from_project(project_id, team_id, role_id)

Remove team role from project

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    team_id = "teamId_example" # str | Team ID - uuid
    role_id = "roleId_example" # str | Role ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Remove team role from project
        api_instance.v1_remove_team_role_from_project(project_id, team_id, role_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_remove_team_role_from_project: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **team_id** | **str**| Team ID - uuid |
 **role_id** | **str**| Role ID - uuid |

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
**200** | Success |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_remove_user_from_team**
> v1_remove_user_from_team(team_id, user_id)

Remove user from team

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from avh_api.model.api_internal_consistency_error import ApiInternalConsistencyError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    team_id = "teamId_example" # str | Team ID - uuid
    user_id = "userId_example" # str | User ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Remove user from team
        api_instance.v1_remove_user_from_team(team_id, user_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_remove_user_from_team: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **team_id** | **str**| Team ID - uuid |
 **user_id** | **str**| User ID - uuid |

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
**403** | Forbidden |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_remove_user_role_from_project**
> v1_remove_user_role_from_project(project_id, user_id, role_id)

Remove user role from project

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    user_id = "userId_example" # str | User ID - uuid
    role_id = "roleId_example" # str | Role ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Remove user role from project
        api_instance.v1_remove_user_role_from_project(project_id, user_id, role_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_remove_user_role_from_project: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **user_id** | **str**| User ID - uuid |
 **role_id** | **str**| Role ID - uuid |

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
**200** | Success |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_rename_instance_snapshot**
> Snapshot v1_rename_instance_snapshot(instance_id, snapshot_id, snapshot_creation_options)

Rename a Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.snapshot_creation_options import SnapshotCreationOptions
from avh_api.model.api_error import ApiError
from avh_api.model.snapshot import Snapshot
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    snapshot_id = "snapshotId_example" # str | Snapshot ID - uuid
    snapshot_creation_options = SnapshotCreationOptions(
        name="name_example",
    ) # SnapshotCreationOptions | 

    # example passing only required values which don't have defaults set
    try:
        # Rename a Snapshot
        api_response = api_instance.v1_rename_instance_snapshot(instance_id, snapshot_id, snapshot_creation_options)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_rename_instance_snapshot: %s\n" % e)
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

# **v1_restore_instance_snapshot**
> v1_restore_instance_snapshot(instance_id, snapshot_id)

Restore a Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    snapshot_id = "snapshotId_example" # str | Snapshot ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Restore a Snapshot
        api_instance.v1_restore_instance_snapshot(instance_id, snapshot_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_restore_instance_snapshot: %s\n" % e)
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

# **v1_roles**
> [Role] v1_roles()

Get all roles

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.role import Role
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Get all roles
        api_response = api_instance.v1_roles()
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_roles: %s\n" % e)
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


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Roles |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_set_instance_gpios**
> GpiosState v1_set_instance_gpios(instance_id, gpios_state)

Set Instance GPIOs

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.gpios_state import GpiosState
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    gpios_state = GpiosState(
        led=GpioStateDefinition(
            bit_count=3.14,
            banks=[
                [
                    Bit(3.14),
                ],
            ],
        ),
        button=GpioStateDefinition(
            bit_count=3.14,
            banks=[
                [
                    Bit(3.14),
                ],
            ],
        ),
        switch=GpioStateDefinition(
            bit_count=3.14,
            banks=[
                [
                    Bit(3.14),
                ],
            ],
        ),
    ) # GpiosState | New GPIO state

    # example passing only required values which don't have defaults set
    try:
        # Set Instance GPIOs
        api_response = api_instance.v1_set_instance_gpios(instance_id, gpios_state)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_set_instance_gpios: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |
 **gpios_state** | [**GpiosState**](GpiosState.md)| New GPIO state |

### Return type

[**GpiosState**](GpiosState.md)

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

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.peripherals_data import PeripheralsData
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    peripherals_data = PeripheralsData(
        acceleration=[
            3.14,
        ],
        gyroscope=[
            3.14,
        ],
        magnetic=[
            3.14,
        ],
        orientation=[
            3.14,
        ],
        temperature=3.14,
        proximity=3.14,
        light=3.14,
        pressure=3.14,
        humidity=3.14,
    ) # PeripheralsData | New peripherals state

    # example passing only required values which don't have defaults set
    try:
        # Set Instance Peripherals
        api_response = api_instance.v1_set_instance_peripherals(instance_id, peripherals_data)
        pprint(api_response)
    except avh_api.ApiException as e:
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

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.v1_set_state_body import V1SetStateBody
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    v1_set_state_body = V1SetStateBody(
        state=InstanceState("on"),
    ) # V1SetStateBody | Desired State

    # example passing only required values which don't have defaults set
    try:
        # Set state of Instance
        api_instance.v1_set_instance_state(instance_id, v1_set_state_body)
    except avh_api.ApiException as e:
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

# **v1_snapshot_rename**
> Snapshot v1_snapshot_rename(snapshot_id, snapshot_creation_options)

Rename a Snapshot

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.snapshot_creation_options import SnapshotCreationOptions
from avh_api.model.api_error import ApiError
from avh_api.model.snapshot import Snapshot
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    snapshot_id = "snapshotId_example" # str | Snapshot ID - uuid
    snapshot_creation_options = SnapshotCreationOptions(
        name="name_example",
    ) # SnapshotCreationOptions | 

    # example passing only required values which don't have defaults set
    try:
        # Rename a Snapshot
        api_response = api_instance.v1_snapshot_rename(snapshot_id, snapshot_creation_options)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_snapshot_rename: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
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

# **v1_start_core_trace**
> v1_start_core_trace(instance_id)

Start CoreTrace on an instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Start CoreTrace on an instance
        api_instance.v1_start_core_trace(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_start_core_trace: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_start_hyper_trace**
> v1_start_hyper_trace(instance_id, btrace_enable_options)

Start HyperTrace on an instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.btrace_enable_options import BtraceEnableOptions
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    btrace_enable_options = BtraceEnableOptions(
        ranges=[
            [
                "string_example",
            ],
        ],
    ) # BtraceEnableOptions | 

    # example passing only required values which don't have defaults set
    try:
        # Start HyperTrace on an instance
        api_instance.v1_start_hyper_trace(instance_id, btrace_enable_options)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_start_hyper_trace: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **instance_id** | **str**| Instance ID - uuid |
 **btrace_enable_options** | [**BtraceEnableOptions**](BtraceEnableOptions.md)|  |

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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_start_instance**
> v1_start_instance(instance_id)

Start an Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.instance_start_options import InstanceStartOptions
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    instance_start_options = InstanceStartOptions(
        paused=True,
    ) # InstanceStartOptions | Start options (optional)

    # example passing only required values which don't have defaults set
    try:
        # Start an Instance
        api_instance.v1_start_instance(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_start_instance: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Start an Instance
        api_instance.v1_start_instance(instance_id, instance_start_options=instance_start_options)
    except avh_api.ApiException as e:
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

# **v1_start_network_monitor**
> v1_start_network_monitor(instance_id)

Start Network Monitor on an instance.

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Start Network Monitor on an instance.
        api_instance.v1_start_network_monitor(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_start_network_monitor: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_stop_core_trace**
> v1_stop_core_trace(instance_id)

Stop CoreTrace on an instance.

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Stop CoreTrace on an instance.
        api_instance.v1_stop_core_trace(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_stop_core_trace: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_stop_hyper_trace**
> v1_stop_hyper_trace(instance_id)

Stop HyperTrace on an instance.

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Stop HyperTrace on an instance.
        api_instance.v1_stop_hyper_trace(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_stop_hyper_trace: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_stop_instance**
> v1_stop_instance(instance_id)

Stop an Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.instance_stop_options import InstanceStopOptions
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid
    instance_stop_options = InstanceStopOptions(
        soft=True,
    ) # InstanceStopOptions | Stop options (optional)

    # example passing only required values which don't have defaults set
    try:
        # Stop an Instance
        api_instance.v1_stop_instance(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_stop_instance: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Stop an Instance
        api_instance.v1_stop_instance(instance_id, instance_stop_options=instance_stop_options)
    except avh_api.ApiException as e:
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

# **v1_stop_network_monitor**
> v1_stop_network_monitor(instance_id)

Stop Network Monitor on an instance.

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Stop Network Monitor on an instance.
        api_instance.v1_stop_network_monitor(instance_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_stop_network_monitor: %s\n" % e)
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
**204** | No Content |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_team_change**
> v1_team_change(team_id, create_team)

Update team

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.create_team import CreateTeam
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    team_id = "teamId_example" # str | Team ID - uuid
    create_team = CreateTeam(
        name="name_example",
    ) # CreateTeam | 

    # example passing only required values which don't have defaults set
    try:
        # Update team
        api_instance.v1_team_change(team_id, create_team)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_team_change: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **team_id** | **str**| Team ID - uuid |
 **create_team** | [**CreateTeam**](CreateTeam.md)|  |

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
**204** | Success |  -  |
**403** | Forbidden |  -  |
**404** | Not Found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_team_create**
> TeamCreate v1_team_create(create_team)

Create team

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.team_create import TeamCreate
from avh_api.model.create_team import CreateTeam
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    create_team = CreateTeam(
        name="name_example",
    ) # CreateTeam | 

    # example passing only required values which don't have defaults set
    try:
        # Create team
        api_response = api_instance.v1_team_create(create_team)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_team_create: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **create_team** | [**CreateTeam**](CreateTeam.md)|  |

### Return type

[**TeamCreate**](TeamCreate.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | User |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_team_delete**
> v1_team_delete(team_id)

Delete team

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from avh_api.model.api_internal_consistency_error import ApiInternalConsistencyError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    team_id = "teamId_example" # str | Team ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Delete team
        api_instance.v1_team_delete(team_id)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_team_delete: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **team_id** | **str**| Team ID - uuid |

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
**403** | Forbidden |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_teams**
> [Team] v1_teams()

Get teams

This endpoint is available for Enterprise accounts only

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.team import Team
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Get teams
        api_response = api_instance.v1_teams()
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_teams: %s\n" % e)
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


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Teams |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_unpause_instance**
> v1_unpause_instance(instance_id)

Unpause an Instance

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.user_error import UserError
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    instance_id = "instanceId_example" # str | Instance ID - uuid

    # example passing only required values which don't have defaults set
    try:
        # Unpause an Instance
        api_instance.v1_unpause_instance(instance_id)
    except avh_api.ApiException as e:
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

# **v1_update_hook**
> Hook v1_update_hook(hook_id, v1_create_hook_parameters)

Update an existing hypervisor hook

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.hook import Hook
from avh_api.model.user_error import UserError
from avh_api.model.v1_create_hook_parameters import V1CreateHookParameters
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    hook_id = "hookId_example" # str | Hook ID
    v1_create_hook_parameters = V1CreateHookParameters(
        label="label_example",
        address="address_example",
        patch="patch_example",
        patch_type="csmfcc",
    ) # V1CreateHookParameters | application/json

    # example passing only required values which don't have defaults set
    try:
        # Update an existing hypervisor hook
        api_response = api_instance.v1_update_hook(hook_id, v1_create_hook_parameters)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_update_hook: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **hook_id** | **str**| Hook ID |
 **v1_create_hook_parameters** | [**V1CreateHookParameters**](V1CreateHookParameters.md)| application/json |

### Return type

[**Hook**](Hook.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Hook |  -  |
**400** | Bad Request |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_update_project**
> Project v1_update_project(project_id, project)

Update a Project

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.project import Project
from avh_api.model.api_error import ApiError
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    project = Project(
        id="id_example",
        name="name_example",
        settings=ProjectSettings(
            version=3.14,
            internet_access=True,
            dhcp=True,
        ),
        quotas=ProjectQuota(
            cores=3.14,
            instances=3.14,
            ram=3.14,
        ),
        quotas_used=ProjectUsage(
            cores=3.14,
            instances=3.14,
            ram=3.14,
            gpu=3.14,
        ),
    ) # Project | Updated Project Settings

    # example passing only required values which don't have defaults set
    try:
        # Update a Project
        api_response = api_instance.v1_update_project(project_id, project)
        pprint(api_response)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_update_project: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **project** | [**Project**](Project.md)| Updated Project Settings |

### Return type

[**Project**](Project.md)

### Authorization

[BearerAuth](../README.md#BearerAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_update_project_settings**
> v1_update_project_settings(project_id, project_settings)

Change Project Settings

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_error import ApiError
from avh_api.model.project_settings import ProjectSettings
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    project_id = "projectId_example" # str | Project ID - uuid
    project_settings = ProjectSettings(
        version=3.14,
        internet_access=True,
        dhcp=True,
    ) # ProjectSettings | New settings

    # example passing only required values which don't have defaults set
    try:
        # Change Project Settings
        api_instance.v1_update_project_settings(project_id, project_settings)
    except avh_api.ApiException as e:
        print("Exception when calling ArmApi->v1_update_project_settings: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **project_id** | **str**| Project ID - uuid |
 **project_settings** | [**ProjectSettings**](ProjectSettings.md)| New settings |

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
**204** | Success |  -  |
**403** | Forbidden |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_upload_image_data**
> Image v1_upload_image_data(image_id, body)

Upload Image Data

If the active project has enough remaining quota, updates an Image with the contents of the request body.

### Example

* Bearer (ApiToken or JWT) Authentication (BearerAuth):

```python
import time
import avh_api
from avh_api.api import arm_api
from avh_api.model.api_not_found_error import ApiNotFoundError
from avh_api.model.api_conflict_error import ApiConflictError
from avh_api.model.image import Image
from pprint import pprint
# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = avh_api.Configuration(
    host = "https://app.avh.arm.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure Bearer authorization (ApiToken or JWT): BearerAuth
configuration = avh_api.Configuration(
    access_token = 'YOUR_BEARER_TOKEN'
)

# Enter a context with an instance of the API client
with avh_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)
    image_id = "imageId_example" # str | Image ID - uuid
    body = "body_example" # str | Uploaded Image

    # example passing only required values which don't have defaults set
    try:
        # Upload Image Data
        api_response = api_instance.v1_upload_image_data(image_id, body)
        pprint(api_response)
    except avh_api.ApiException as e:
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

