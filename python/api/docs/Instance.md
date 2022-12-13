# Instance



## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str, none_type** | Instance Identifier | [optional] 
**name** | **str, none_type** | Instance Name | [optional] 
**key** | **str, none_type** | Key used to encrypt the Instance | [optional] 
**flavor** | **str, none_type** | The type of virtual machine this is | [optional] 
**type** | **str, none_type** |  | [optional] 
**project** | **str, none_type** | The projectId of the project this instance belongs to | [optional] 
**state** | [**InstanceState**](InstanceState.md) |  | [optional] 
**state_changed** | **datetime, none_type** | Time the state of the instance last changed | [optional] 
**started_at** | **str, none_type** | Time the instance was started | [optional] 
**user_task** | **str, none_type** | Currently executing User Task | [optional] 
**task_state** | **str, none_type** | Current task state if any | [optional] 
**error** | **str, none_type** | Current error state if any | [optional] 
**boot_options** | [**InstanceBootOptions**](InstanceBootOptions.md) |  | [optional] 
**service_ip** | **str, none_type** | Services IP Address | [optional] 
**wifi_ip** | **str, none_type** | LAN IP Address | [optional] 
**secondary_ip** | **str, none_type** | Secondary Inteface LAN IP Address (if supported) | [optional] 
**services** | [**InstanceServices**](InstanceServices.md) |  | [optional] 
**panicked** | **bool, none_type** |  | [optional] 
**created** | **datetime, none_type** | Time instance was created | [optional] 
**model** | **str, none_type** | Model of virtual machine device | [optional] 
**fwpackage** | **str, none_type** | URL that package used to create this instance is available at | [optional] 
**os** | **str, none_type** |  | [optional] 
**agent** | **str, none_type** |  | [optional] 
**netmon** | [**InstanceNetmonState**](InstanceNetmonState.md) |  | [optional] 
**expose_port** | **str, none_type** |  | [optional] 
**fault** | **bool, none_type** |  | [optional] 
**patches** | **[str], none_type** |  | [optional] 
**created_by** | [**CreatedBy**](CreatedBy.md) |  | [optional] 
**any string name** | **bool, date, datetime, dict, float, int, list, str, none_type** | any string name can be used but the value must be the correct type | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


