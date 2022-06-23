# instance_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | Instance Identifier | [optional] 
**name** | **char \*** | Instance Name | [optional] 
**key** | **char \*** | Key used to encrypt the Instance | [optional] 
**flavor** | **char \*** | The type of virtual machine this is | [optional] 
**type** | **char \*** |  | [optional] 
**project** | **char \*** | The projectId of the project this instance belongs to | [optional] 
**state** | **instance_state_t \*** |  | [optional] 
**state_changed** | **char \*** | Time the state of the instance last changed | [optional] 
**user_task** | **char \*** | Currently executing User Task | [optional] 
**task_state** | **char \*** | Current task state if any | [optional] 
**error** | **char \*** | Current error state if any | [optional] 
**boot_options** | [**instance_boot_options_t**](instance_boot_options.md) \* |  | [optional] 
**service_ip** | **char \*** | Services IP Address | [optional] 
**wifi_ip** | **char \*** | LAN IP Address | [optional] 
**services** | [**instance_services_t**](instance_services.md) \* |  | [optional] 
**panicked** | **int** |  | [optional] 
**created** | **char \*** | Time instance was created | [optional] 
**model** | **char \*** | Model of virtual machine device | [optional] 
**fwpackage** | **char \*** | URL that package used to create this instance is available at | [optional] 
**os** | **char \*** |  | [optional] 
**agent** | **char \*** |  | [optional] 
**netmon** | [**instance_netmon_state_t**](instance_netmon_state.md) \* |  | [optional] 
**expose_port** | **char \*** |  | [optional] 
**fault** | **int** |  | [optional] 
**patches** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


