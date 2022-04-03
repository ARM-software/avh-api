# InstanceCreateOptions


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**flavor** | **str** | the flavor id | 
**project** | **str** | project UUID | 
**os** | **str** | OS Version | 
**name** | **str, none_type** | the name of the device | [optional] 
**key** | **str, none_type** | Key used to encrypt the Instance | [optional] 
**osbuild** | **str, none_type** | OS Build | [optional] 
**patches** | **[str], none_type** | list of patches to apply | [optional] 
**ipsw** | **str, none_type** | URL or image id | [optional] 
**ipsw_sha1** | **str, none_type** |  | [optional] 
**ipsw_md5** | **str, none_type** |  | [optional] 
**orig_ipsw_url** | **str, none_type** | URL that ipsw used to create this instance is available at | [optional] 
**encrypt** | **bool, none_type** |  | [optional] 
**override_wifi_mac** | **str, none_type** |  | [optional] 
**volume** | [**VolumeOptions**](VolumeOptions.md) |  | [optional] 
**snapshot** | **str, none_type** | Snapshot ID | [optional] 
**boot_options** | [**InstanceBootOptions**](InstanceBootOptions.md) |  | [optional] 
**device** | [**Model**](Model.md) |  | [optional] 
**any string name** | **bool, date, datetime, dict, float, int, list, str, none_type** | any string name can be used but the value must be the correct type | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


