# InstanceCreateOptions


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **str** | the name of the device | [optional] 
**key** | **str** | Key used to encrypt the Instance | [optional] 
**flavor** | **str** | the flavor id | 
**project** | **str** | project UUID | 
**os** | **str** | OS Version | 
**osbuild** | **str** | OS Build | [optional] 
**patches** | **list[str]** | list of patches to apply | [optional] 
**ipsw** | **str** | URL or image id | [optional] 
**ipsw_sha1** | **str** |  | [optional] 
**ipsw_md5** | **str** |  | [optional] 
**orig_ipsw_url** | **str** | URL that ipsw used to create this instance is available at | [optional] 
**encrypt** | **bool** |  | [optional] 
**override_wifi_mac** | **str** |  | [optional] 
**volume** | [**VolumeOptions**](VolumeOptions.md) |  | [optional] 
**snapshot** | **str** | Snapshot ID | [optional] 
**boot_options** | [**InstanceBootOptions**](InstanceBootOptions.md) |  | [optional] 
**device** | [**Model**](Model.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


