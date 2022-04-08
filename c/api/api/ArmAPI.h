#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/any_type.h"
#include "../model/api_conflict_error.h"
#include "../model/api_error.h"
#include "../model/api_not_found_error.h"
#include "../model/credentials.h"
#include "../model/firmware.h"
#include "../model/image.h"
#include "../model/instance.h"
#include "../model/instance_console_endpoint.h"
#include "../model/instance_create_options.h"
#include "../model/instance_return.h"
#include "../model/instance_start_options.h"
#include "../model/instance_state.h"
#include "../model/instance_stop_options.h"
#include "../model/model.h"
#include "../model/object.h"
#include "../model/project.h"
#include "../model/snapshot.h"
#include "../model/snapshot_creation_options.h"
#include "../model/token.h"
#include "../model/user_error.h"
#include "../model/v1_set_state_body.h"

// Enum ENCODING for ArmAPI_v1CreateImage
typedef enum  { arm_api_v1CreateImage_ENCODING_NULL = 0, arm_api_v1CreateImage_ENCODING_plain } arm_api_v1CreateImage_encoding_e;


// Log In
//
token_t*
ArmAPI_v1AuthLogin(apiClient_t *apiClient, object_t * body );


// Create a new Image
//
image_t*
ArmAPI_v1CreateImage(apiClient_t *apiClient, char * type , arm_api_v1CreateImage_encoding_e encoding , char * name , char * project , char * instance , binary_t* file );


// Create Instance
//
instance_return_t*
ArmAPI_v1CreateInstance(apiClient_t *apiClient, instance_create_options_t * instance_create_options );


// Create Instance Snapshot
//
snapshot_t*
ArmAPI_v1CreateSnapshot(apiClient_t *apiClient, char * instanceId , snapshot_creation_options_t * snapshot_creation_options );


// Delete Image
//
void
ArmAPI_v1DeleteImage(apiClient_t *apiClient, char * imageId );


// Remove Instance
//
void
ArmAPI_v1DeleteInstance(apiClient_t *apiClient, char * instanceId );


// Get Image Metadata
//
image_t*
ArmAPI_v1GetImage(apiClient_t *apiClient, char * imageId );


// Get all Images Metadata
//
image_t*
ArmAPI_v1GetImages(apiClient_t *apiClient, char * project );


// Get Instance
//
instance_t*
ArmAPI_v1GetInstance(apiClient_t *apiClient, char * instanceId , list_t * returnAttr );


// Get console websocket URL
//
instance_console_endpoint_t*
ArmAPI_v1GetInstanceConsole(apiClient_t *apiClient, char * instanceId );


// Get Instance Peripherals
//
object_t*
ArmAPI_v1GetInstancePeripherals(apiClient_t *apiClient, char * instanceId );


// Get state of Instance
//
instance_state_t*
ArmAPI_v1GetInstanceState(apiClient_t *apiClient, char * instanceId );


// Get Instances
//
list_t*
ArmAPI_v1GetInstances(apiClient_t *apiClient, char * name , list_t * returnAttr );


// Get Software for Model
//
list_t*
ArmAPI_v1GetModelSoftware(apiClient_t *apiClient, char * model );


// Get Supported Models
//
list_t*
ArmAPI_v1GetModels(apiClient_t *apiClient);


// Get Project
//
project_t*
ArmAPI_v1GetProject(apiClient_t *apiClient, char * projectId );


// Get Instances in Project
//
list_t*
ArmAPI_v1GetProjectInstances(apiClient_t *apiClient, char * projectId , char * name , list_t * returnAttr );


// Get Projects
//
list_t*
ArmAPI_v1GetProjects(apiClient_t *apiClient, char * name , int ids_only );


// Get Instance Snapshots
//
snapshot_t*
ArmAPI_v1GetSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId );


// Get Instance Snapshots
//
list_t*
ArmAPI_v1GetSnapshots(apiClient_t *apiClient, char * instanceId );


// Update Instance
//
object_t*
ArmAPI_v1PatchInstance(apiClient_t *apiClient, char * instanceId , object_t * body );


// Pause an Instance
//
void
ArmAPI_v1PauseInstance(apiClient_t *apiClient, char * instanceId );


// API Status
//
// Check if  API is ready for queries
//
void
ArmAPI_v1Ready(apiClient_t *apiClient);


// Reboot an Instance
//
void
ArmAPI_v1RebootInstance(apiClient_t *apiClient, char * instanceId );


// Restore a Snapshot
//
void
ArmAPI_v1RestoreSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId );


// Set Instance Peripherals
//
object_t*
ArmAPI_v1SetInstancePeripherals(apiClient_t *apiClient, char * instanceId , char * body );


// Set state of Instance
//
void
ArmAPI_v1SetInstanceState(apiClient_t *apiClient, char * instanceId , v1_set_state_body_t * v1_set_state_body );


// Delete a Snapshot
//
void
ArmAPI_v1SnapshotDelete(apiClient_t *apiClient, char * instanceId , char * snapshotId );


// Rename a Snapshot
//
snapshot_t*
ArmAPI_v1SnapshotRename(apiClient_t *apiClient, char * instanceId , char * snapshotId , snapshot_creation_options_t * snapshot_creation_options );


// Start an Instance
//
void
ArmAPI_v1StartInstance(apiClient_t *apiClient, char * instanceId , instance_start_options_t * instance_start_options );


// Stop an Instance
//
void
ArmAPI_v1StopInstance(apiClient_t *apiClient, char * instanceId , instance_stop_options_t * instance_stop_options );


// Unpause an Instance
//
void
ArmAPI_v1UnpauseInstance(apiClient_t *apiClient, char * instanceId );


// Upload Image Data
//
// If the active project has enough remaining quota, updates an Image with the contents of the request body.
//
image_t*
ArmAPI_v1UploadImageData(apiClient_t *apiClient, char * imageId , char * body );


// Log In
//
token_t*
ArmAPI_v1UsersLogin(apiClient_t *apiClient, credentials_t * credentials );


