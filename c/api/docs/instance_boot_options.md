# instance_boot_options_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**boot_args** | **char \*** |  | [optional] 
**restore_boot_args** | **char \*** |  | [optional] 
**udid** | **char \*** | Boot udid | [optional] 
**ecid** | **char \*** | Assigned ECID | [optional] 
**random_seed** | **char \*** | Random seed to provide to boot if any | [optional] 
**no_snapshot_mount** | **int** | Do not mount IOS snapshot (iOS only) | [optional] 
**pac** | **int** | Enable PAC | [optional] 
**aprr** | **int** | Enable APRR | [optional] 
**cdhashes** | **list_t \*** | cdhashes to inject to kernel (iOS only) | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


