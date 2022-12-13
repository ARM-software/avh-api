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
#include "../model/api_internal_consistency_error.h"
#include "../model/api_not_found_error.h"
#include "../model/api_token.h"
#include "../model/btrace_enable_options.h"
#include "../model/create_team.h"
#include "../model/firmware.h"
#include "../model/gpios_state.h"
#include "../model/hook.h"
#include "../model/image.h"
#include "../model/instance.h"
#include "../model/instance_console_endpoint.h"
#include "../model/instance_create_options.h"
#include "../model/instance_input.h"
#include "../model/instance_return.h"
#include "../model/instance_start_options.h"
#include "../model/instance_state.h"
#include "../model/instance_stop_options.h"
#include "../model/kcrange.h"
#include "../model/kernel_task.h"
#include "../model/media_play_body.h"
#include "../model/model.h"
#include "../model/object.h"
#include "../model/patch_instance_options.h"
#include "../model/peripherals_data.h"
#include "../model/project.h"
#include "../model/project_key.h"
#include "../model/project_settings.h"
#include "../model/role.h"
#include "../model/snapshot.h"
#include "../model/snapshot_creation_options.h"
#include "../model/subscriber_invite.h"
#include "../model/team.h"
#include "../model/team_create.h"
#include "../model/token.h"
#include "../model/user_error.h"
#include "../model/v1_create_hook_parameters.h"
#include "../model/v1_set_state_body.h"
#include "../model/validation_error.h"
#include "../model/web_player_create_session_request.h"
#include "../model/web_player_session.h"

// Enum ENCODING for ArmAPI_v1CreateImage
typedef enum  { arm_api_v1CreateImage_ENCODING_NULL = 0, arm_api_v1CreateImage_ENCODING_plain } arm_api_v1CreateImage_encoding_e;

// Enum SORT for ArmAPI_v1GetHooks
typedef enum  { arm_api_v1GetHooks_SORT_NULL = 0, arm_api_v1GetHooks_SORT_ASC, arm_api_v1GetHooks_SORT_DESC } arm_api_v1GetHooks_sort_e;

// Enum FORMAT for ArmAPI_v1GetInstanceScreenshot
typedef enum  { arm_api_v1GetInstanceScreenshot_FORMAT_NULL = 0, arm_api_v1GetInstanceScreenshot_FORMAT_png, arm_api_v1GetInstanceScreenshot_FORMAT_jpeg } arm_api_v1GetInstanceScreenshot_format_e;

// Enum FORMAT for ArmAPI_v1GetProjectVpnConfig
typedef enum  { arm_api_v1GetProjectVpnConfig_FORMAT_NULL = 0, arm_api_v1GetProjectVpnConfig_FORMAT_ovpn } arm_api_v1GetProjectVpnConfig_format_e;


// Get Trial Status
//
// Allow users to check the trial status of an email.
//
object_t*
ArmAPI_trialStatus(apiClient_t *apiClient, char * trialEmail );


// Add Project Authorized Key
//
char*
ArmAPI_v1AddProjectKey(apiClient_t *apiClient, char * projectId , project_key_t * project_key );


// Add team role to project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1AddTeamRoleToProject(apiClient_t *apiClient, char * projectId , char * teamId , char * roleId );


// Add user role to project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1AddUserRoleToProject(apiClient_t *apiClient, char * projectId , char * userId , char * roleId );


// Add user to team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1AddUserToTeam(apiClient_t *apiClient, char * teamId , char * userId );


// Log In
//
token_t*
ArmAPI_v1AuthLogin(apiClient_t *apiClient, api_token_t * api_token );


// Pre-authorize an btrace download
//
object_t*
ArmAPI_v1BtracePreauthorize(apiClient_t *apiClient, char * instanceId );


// Clear CoreTrace logs
//
void
ArmAPI_v1ClearCoreTrace(apiClient_t *apiClient, char * instanceId );


// Clear HyperTrace logs
//
void
ArmAPI_v1ClearHyperTrace(apiClient_t *apiClient, char * instanceId );


// Clear Hooks on an instance
//
void
ArmAPI_v1ClearHyperTraceHooks(apiClient_t *apiClient, char * instanceId );


// Clear Panics
//
void
ArmAPI_v1ClearInstancePanics(apiClient_t *apiClient, char * instanceId );


// Create hypervisor hook for Instance
//
hook_t*
ArmAPI_v1CreateHook(apiClient_t *apiClient, char * instanceId , v1_create_hook_parameters_t * v1_create_hook_parameters );


// Create a new Image
//
image_t*
ArmAPI_v1CreateImage(apiClient_t *apiClient, char * type , arm_api_v1CreateImage_encoding_e encoding , int encapsulated , char * name , char * project , char * instance , binary_t* file );


// Create Instance
//
instance_return_t*
ArmAPI_v1CreateInstance(apiClient_t *apiClient, instance_create_options_t * instance_create_options );


// Create a Project
//
project_t*
ArmAPI_v1CreateProject(apiClient_t *apiClient, project_t * project );


// Create Instance Snapshot
//
snapshot_t*
ArmAPI_v1CreateSnapshot(apiClient_t *apiClient, char * instanceId , snapshot_creation_options_t * snapshot_creation_options );


// Create Subscriber Invite
//
// Create Subscriber Invite
//
subscriber_invite_t*
ArmAPI_v1CreateSubscriberInvite(apiClient_t *apiClient, subscriber_invite_t * subscriber_invite );


// Delete an existing hypervisor hook
//
void
ArmAPI_v1DeleteHook(apiClient_t *apiClient, char * hookId );


// Delete Image
//
void
ArmAPI_v1DeleteImage(apiClient_t *apiClient, char * imageId );


// Remove Instance
//
void
ArmAPI_v1DeleteInstance(apiClient_t *apiClient, char * instanceId );


// Delete a Snapshot
//
void
ArmAPI_v1DeleteInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId );


// Delete a Project
//
void
ArmAPI_v1DeleteProject(apiClient_t *apiClient, char * projectId );


// Delete a Snapshot
//
void
ArmAPI_v1DeleteSnapshot(apiClient_t *apiClient, char * snapshotId );


// Disable an exposed port on an instance for device access.
//
void
ArmAPI_v1DisableExposePort(apiClient_t *apiClient, char * instanceId );


// Enable an exposed port on an instance for device access.
//
void
ArmAPI_v1EnableExposePort(apiClient_t *apiClient, char * instanceId );


// Execute Hooks on an instance
//
void
ArmAPI_v1ExecuteHyperTraceHooks(apiClient_t *apiClient, char * instanceId );


// Get hypervisor hook by id
//
hook_t*
ArmAPI_v1GetHookById(apiClient_t *apiClient, char * hookId );


// Get all hypervisor hooks for Instance
//
list_t*
ArmAPI_v1GetHooks(apiClient_t *apiClient, char * instanceId , double limit , double offset , arm_api_v1GetHooks_sort_e sort );


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


// Get Console Log
//
char*
ArmAPI_v1GetInstanceConsoleLog(apiClient_t *apiClient, char * instanceId );


// Get Instance GPIOs
//
gpios_state_t*
ArmAPI_v1GetInstanceGpios(apiClient_t *apiClient, char * instanceId );


// Get Panics
//
list_t*
ArmAPI_v1GetInstancePanics(apiClient_t *apiClient, char * instanceId );


// Get Instance Peripherals
//
peripherals_data_t*
ArmAPI_v1GetInstancePeripherals(apiClient_t *apiClient, char * instanceId );


// Recommended SSH Command for Quick Connect
//
char*
ArmAPI_v1GetInstanceQuickConnectCommand(apiClient_t *apiClient, char * instanceId );


// Get Instance Screenshot
//
binary_t*
ArmAPI_v1GetInstanceScreenshot(apiClient_t *apiClient, char * instanceId , arm_api_v1GetInstanceScreenshot_format_e format , int scale );


// Get Instance Snapshot
//
snapshot_t*
ArmAPI_v1GetInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId );


// Get Instance Snapshots
//
list_t*
ArmAPI_v1GetInstanceSnapshots(apiClient_t *apiClient, char * instanceId );


// Get state of Instance
//
arm_api_instance_state__e
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


// Get a Project
//
project_t*
ArmAPI_v1GetProject(apiClient_t *apiClient, char * projectId );


// Get Instances in Project
//
list_t*
ArmAPI_v1GetProjectInstances(apiClient_t *apiClient, char * projectId , char * name , list_t * returnAttr );


// Get Project Authorized Keys
//
list_t*
ArmAPI_v1GetProjectKeys(apiClient_t *apiClient, char * projectId );


// Get Project VPN Configuration
//
char*
ArmAPI_v1GetProjectVpnConfig(apiClient_t *apiClient, char * projectId , arm_api_v1GetProjectVpnConfig_format_e format );


// Get Projects
//
list_t*
ArmAPI_v1GetProjects(apiClient_t *apiClient, char * name , int ids_only );


// Get Snapshot
//
snapshot_t*
ArmAPI_v1GetSnapshot(apiClient_t *apiClient, char * snapshotId );


// Get Kernel extension ranges
//
list_t*
ArmAPI_v1Kcrange(apiClient_t *apiClient, char * instanceId );


// Get Running Threads (CoreTrace)
//
list_t*
ArmAPI_v1ListThreads(apiClient_t *apiClient, char * instanceId );


// Start playing media
//
void
ArmAPI_v1MediaPlay(apiClient_t *apiClient, char * instanceId , media_play_body_t * media_play_body );


// Stop playing media
//
void
ArmAPI_v1MediaStop(apiClient_t *apiClient, char * instanceId );


// Update Instance
//
instance_t*
ArmAPI_v1PatchInstance(apiClient_t *apiClient, char * instanceId , patch_instance_options_t * patch_instance_options );


// Pause an Instance
//
void
ArmAPI_v1PauseInstance(apiClient_t *apiClient, char * instanceId );


// Provide Instance Input
//
// Sends a touch or button event to the VM.  - Buttons (or keys) to be held during the input are specified as an array of strings, each string must be either a single ascii character or one of the following keywords:   - VM Buttons: finger, homeButton, holdButton, volumeUp, volumeDown, ringerSwitch, backButton, overviewButton   - Keyboard Buttons: again, alt, alterase, apostrophe, back, backslash, backspace, bassboost, bookmarks, bsp, calc, camera, cancel, caps, capslock, chat, close, closecd, comma, compose, computer, config, connect, copy, ctrl, cut, cyclewindows, dashboard, del, delete, deletefile, dot, down, edit, eject, ejectclose, email, end, enter, equal, esc, escape, exit, f1, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f2, f20, f21, f22, f23, f24, f3, f4, f5, f6, f7, f8, f9, fastfwd, file, finance, find, forward, front, grave, hangeul, hanja, help, henkan, home, homepage, hp, hrgn, ins, insert, iso, k102, kp0, kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9, kpasterisk, kpcomma, kpdot, kpenter, kpequal, kpjpcomma, kpleftparen, kpminus, kpplus, kpplusminus, kprightparen, kpslash, ktkn, ktknhrgn, left, leftalt, leftbrace, leftctrl, leftmeta, leftshift, linefeed, macro, mail, menu, meta, minus, move, msdos, muhenkan, mute, new, next, numlock, open, pagedown, pageup, paste, pause, pausecd, pgdn, pgup, phone, play, playcd, playpause, power, previous, print, prog1, prog2, prog3, prog4, props, question, record, redo, refresh, return, rewind, right, rightalt, rightbrace, rightctrl, rightmeta, rightshift, ro, rotate, scale, screenlock, scrolldown, scrolllock, scrollup, search, semicolon, sendfile, setup, shift, shop, slash, sleep, sound, space, sport, stop, stopcd, suspend, sysrq, tab, undo, up, voldown, volup, wakeup, www, xfer, yen, zkhk
//
int
ArmAPI_v1PostInstanceInput(apiClient_t *apiClient, char * instanceId , list_t * instance_input );


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


// Delete Project Authorized Key
//
void
ArmAPI_v1RemoveProjectKey(apiClient_t *apiClient, char * projectId , char * keyId );


// Remove team role from project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1RemoveTeamRoleFromProject(apiClient_t *apiClient, char * projectId , char * teamId , char * roleId );


// Remove user from team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1RemoveUserFromTeam(apiClient_t *apiClient, char * teamId , char * userId );


// Remove user role from project
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1RemoveUserRoleFromProject(apiClient_t *apiClient, char * projectId , char * userId , char * roleId );


// Rename a Snapshot
//
snapshot_t*
ArmAPI_v1RenameInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId , snapshot_creation_options_t * snapshot_creation_options );


// Restore a Snapshot
//
void
ArmAPI_v1RestoreInstanceSnapshot(apiClient_t *apiClient, char * instanceId , char * snapshotId );


// Get all roles
//
// This endpoint is available for Enterprise accounts only
//
list_t*
ArmAPI_v1Roles(apiClient_t *apiClient);


// Set Instance GPIOs
//
gpios_state_t*
ArmAPI_v1SetInstanceGpios(apiClient_t *apiClient, char * instanceId , gpios_state_t * gpios_state );


// Set Instance Peripherals
//
peripherals_data_t*
ArmAPI_v1SetInstancePeripherals(apiClient_t *apiClient, char * instanceId , peripherals_data_t * peripherals_data );


// Set state of Instance
//
void
ArmAPI_v1SetInstanceState(apiClient_t *apiClient, char * instanceId , v1_set_state_body_t * v1_set_state_body );


// Rename a Snapshot
//
snapshot_t*
ArmAPI_v1SnapshotRename(apiClient_t *apiClient, char * snapshotId , snapshot_creation_options_t * snapshot_creation_options );


// Start CoreTrace on an instance
//
void
ArmAPI_v1StartCoreTrace(apiClient_t *apiClient, char * instanceId );


// Start HyperTrace on an instance
//
void
ArmAPI_v1StartHyperTrace(apiClient_t *apiClient, char * instanceId , btrace_enable_options_t * btrace_enable_options );


// Start an Instance
//
void
ArmAPI_v1StartInstance(apiClient_t *apiClient, char * instanceId , instance_start_options_t * instance_start_options );


// Start Network Monitor on an instance.
//
void
ArmAPI_v1StartNetworkMonitor(apiClient_t *apiClient, char * instanceId );


// Stop CoreTrace on an instance.
//
void
ArmAPI_v1StopCoreTrace(apiClient_t *apiClient, char * instanceId );


// Stop HyperTrace on an instance.
//
void
ArmAPI_v1StopHyperTrace(apiClient_t *apiClient, char * instanceId );


// Stop an Instance
//
void
ArmAPI_v1StopInstance(apiClient_t *apiClient, char * instanceId , instance_stop_options_t * instance_stop_options );


// Stop Network Monitor on an instance.
//
void
ArmAPI_v1StopNetworkMonitor(apiClient_t *apiClient, char * instanceId );


// Update team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1TeamChange(apiClient_t *apiClient, char * teamId , create_team_t * create_team );


// Create team
//
// This endpoint is available for Enterprise accounts only
//
team_create_t*
ArmAPI_v1TeamCreate(apiClient_t *apiClient, create_team_t * create_team );


// Delete team
//
// This endpoint is available for Enterprise accounts only
//
void
ArmAPI_v1TeamDelete(apiClient_t *apiClient, char * teamId );


// Get teams
//
// This endpoint is available for Enterprise accounts only
//
list_t*
ArmAPI_v1Teams(apiClient_t *apiClient);


// Unpause an Instance
//
void
ArmAPI_v1UnpauseInstance(apiClient_t *apiClient, char * instanceId );


// Update an existing hypervisor hook
//
hook_t*
ArmAPI_v1UpdateHook(apiClient_t *apiClient, char * hookId , v1_create_hook_parameters_t * v1_create_hook_parameters );


// Update a Project
//
project_t*
ArmAPI_v1UpdateProject(apiClient_t *apiClient, char * projectId , project_t * project );


// Change Project Settings
//
void
ArmAPI_v1UpdateProjectSettings(apiClient_t *apiClient, char * projectId , project_settings_t * project_settings );


// Upload Image Data
//
// If the active project has enough remaining quota, updates an Image with the contents of the request body.
//
image_t*
ArmAPI_v1UploadImageData(apiClient_t *apiClient, char * imageId , char * body );


// Retrieve the list of allowed domains for all Web Player sessions
//
web_player_session_t*
ArmAPI_v1WebPlayerAllowedDomains(apiClient_t *apiClient);


// Create a new Web Player Session
//
web_player_session_t*
ArmAPI_v1WebPlayerCreateSession(apiClient_t *apiClient, web_player_create_session_request_t * web_player_create_session_request );


// Tear down a Web Player Session
//
void
ArmAPI_v1WebPlayerDestroySession(apiClient_t *apiClient, char * sessionId );


// List all Web Player sessions
//
list_t*
ArmAPI_v1WebPlayerListSessions(apiClient_t *apiClient);


// Retrieve Web Player Session Information
//
web_player_session_t*
ArmAPI_v1WebPlayerSessionInfo(apiClient_t *apiClient, char * sessionId );


