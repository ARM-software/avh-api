# AvhApi.InstanceCreateOptions

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **String** | the name of the device | [optional] 
**key** | **String** | Key used to encrypt the Instance | [optional] 
**flavor** | **String** | the flavor id | 
**project** | **String** | project UUID | 
**os** | **String** | OS Version | 
**osbuild** | **String** | OS Build | [optional] 
**patches** | **[String]** | list of patches to apply | [optional] 
**fwpackage** | **String** | URL or image id | [optional] 
**origFwPackageUrl** | **String** | URL that firmware package used to create this instance is available at | [optional] 
**encrypt** | **Boolean** |  | [optional] 
**overrideWifiMAC** | **String** |  | [optional] 
**volume** | [**VolumeOptions**](VolumeOptions.md) |  | [optional] 
**snapshot** | **String** | Snapshot ID | [optional] 
**bootOptions** | [**InstanceBootOptions**](InstanceBootOptions.md) |  | [optional] 
**device** | [**Model**](Model.md) |  | [optional] 


