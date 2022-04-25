# AvhApi.Instance

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Instance Identifier | [optional] 
**name** | **String** | Instance Name | [optional] 
**key** | **String** | Key used to encrypt the Instance | [optional] 
**flavor** | **String** | The type of virtual machine this is | [optional] 
**type** | **String** |  | [optional] 
**project** | **String** | The projectId of the project this instance belongs to | [optional] 
**state** | [**InstanceState**](InstanceState.md) |  | [optional] 
**stateChanged** | **Date** | Time the state of the instance last changed | [optional] 
**userTask** | **String** | Currently executing User Task | [optional] 
**taskState** | **String** | Current task state if any | [optional] 
**error** | **String** | Current error state if any | [optional] 
**bootOptions** | [**InstanceBootOptions**](InstanceBootOptions.md) |  | [optional] 
**serviceIp** | **String** | Services IP Address | [optional] 
**wifiIp** | **String** | LAN IP Address | [optional] 
**services** | [**InstanceServices**](InstanceServices.md) |  | [optional] 
**panicked** | **Boolean** |  | [optional] 
**created** | **Date** | Time instance was created | [optional] 
**model** | **String** | Model of virtual machine device | [optional] 
**fwpackage** | **String** | URL that package used to create this instance is available at | [optional] 
**os** | **String** |  | [optional] 
**agent** | **String** |  | [optional] 
**netmon** | [**InstanceNetmonState**](InstanceNetmonState.md) |  | [optional] 
**exposePort** | **String** |  | [optional] 
**fault** | **Boolean** |  | [optional] 
**patches** | **[String]** |  | [optional] 


