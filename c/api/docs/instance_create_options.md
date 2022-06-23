# instance_create_options_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **char \*** | the name of the device | [optional] 
**key** | **char \*** | Key used to encrypt the Instance | [optional] 
**flavor** | **char \*** | the flavor id | 
**project** | **char \*** | project UUID | 
**os** | **char \*** | OS Version | 
**osbuild** | **char \*** | OS Build | [optional] 
**patches** | **list_t \*** | list of patches to apply | [optional] 
**fwpackage** | **char \*** | URL or image id | [optional] 
**orig_fw_package_url** | **char \*** | URL that firmware package used to create this instance is available at | [optional] 
**encrypt** | **int** |  | [optional] 
**override_wifi_mac** | **char \*** |  | [optional] 
**volume** | [**volume_options_t**](volume_options.md) \* |  | [optional] 
**snapshot** | **char \*** | Snapshot ID | [optional] 
**boot_options** | [**instance_boot_options_t**](instance_boot_options.md) \* |  | [optional] 
**device** | [**model_t**](model.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


