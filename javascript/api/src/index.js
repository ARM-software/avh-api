/**
 * Arm API
 *    This documents the Arm Virtual Hosting REST API.  For other examples and API clients such as python or javascript please see [API Clients (python/javascript)](https://github.com/ARM-software/avh-api).   For a guide on using this interface please see [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   ## Links   - [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   - [API Clients (python/javascript)](https://github.com/arm-software/avh-api)   
 *
 * The version of the OpenAPI document: 3.15.0-15704
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from './ApiClient';
import Address from './model/Address';
import AgentApp from './model/AgentApp';
import AgentAppReadyResponse from './model/AgentAppReadyResponse';
import AgentAppStatus from './model/AgentAppStatus';
import AgentAppsList from './model/AgentAppsList';
import AgentAppsStatusList from './model/AgentAppsStatusList';
import AgentError from './model/AgentError';
import AgentIcons from './model/AgentIcons';
import AgentInstallBody from './model/AgentInstallBody';
import AgentProfilesReturn from './model/AgentProfilesReturn';
import AgentSystemAdbAuth from './model/AgentSystemAdbAuth';
import AgentSystemGetPropBody from './model/AgentSystemGetPropBody';
import AgentValueReturn from './model/AgentValueReturn';
import AgreedAck from './model/AgreedAck';
import ApiConflictError from './model/ApiConflictError';
import ApiError from './model/ApiError';
import ApiInternalConsistencyError from './model/ApiInternalConsistencyError';
import ApiNotFoundError from './model/ApiNotFoundError';
import ApiToken from './model/ApiToken';
import Bit from './model/Bit';
import BtraceEnableOptions from './model/BtraceEnableOptions';
import Button from './model/Button';
import CouponOptions from './model/CouponOptions';
import CreateTeam from './model/CreateTeam';
import CreatedBy from './model/CreatedBy';
import Credentials from './model/Credentials';
import DomainOptions from './model/DomainOptions';
import Extension from './model/Extension';
import Features from './model/Features';
import FileChanges from './model/FileChanges';
import Firmware from './model/Firmware';
import GpioStateDefinition from './model/GpioStateDefinition';
import GpiosState from './model/GpiosState';
import GrantTrialRequestResponse from './model/GrantTrialRequestResponse';
import Hook from './model/Hook';
import Image from './model/Image';
import Instance from './model/Instance';
import InstanceBootOptions from './model/InstanceBootOptions';
import InstanceBootOptionsAdditionalTag from './model/InstanceBootOptionsAdditionalTag';
import InstanceConsoleEndpoint from './model/InstanceConsoleEndpoint';
import InstanceCreateOptions from './model/InstanceCreateOptions';
import InstanceInput from './model/InstanceInput';
import InstanceNetmonState from './model/InstanceNetmonState';
import InstanceReturn from './model/InstanceReturn';
import InstanceServices from './model/InstanceServices';
import InstanceStartOptions from './model/InstanceStartOptions';
import InstanceState from './model/InstanceState';
import InstanceStopOptions from './model/InstanceStopOptions';
import Invitation from './model/Invitation';
import InviteRevokeParams from './model/InviteRevokeParams';
import InviteRevokeParamsIds from './model/InviteRevokeParamsIds';
import Kcrange from './model/Kcrange';
import KernelTask from './model/KernelTask';
import KernelThread from './model/KernelThread';
import MediaPlayBody from './model/MediaPlayBody';
import Model from './model/Model';
import ModelSoftware from './model/ModelSoftware';
import PasswordChangeBody from './model/PasswordChangeBody';
import PasswordResetBody from './model/PasswordResetBody';
import PatchInstanceOptions from './model/PatchInstanceOptions';
import PeripheralsData from './model/PeripheralsData';
import Plan from './model/Plan';
import Project from './model/Project';
import ProjectKey from './model/ProjectKey';
import ProjectQuota from './model/ProjectQuota';
import ProjectSettings from './model/ProjectSettings';
import ProjectUsage from './model/ProjectUsage';
import RateInfo from './model/RateInfo';
import ResetLinkBody from './model/ResetLinkBody';
import Role from './model/Role';
import RotateBody from './model/RotateBody';
import Snapshot from './model/Snapshot';
import SnapshotCreationOptions from './model/SnapshotCreationOptions';
import SnapshotStatus from './model/SnapshotStatus';
import SubscriberInvite from './model/SubscriberInvite';
import Team from './model/Team';
import TeamCreate from './model/TeamCreate';
import TextInput from './model/TextInput';
import Token from './model/Token';
import TouchCurveInput from './model/TouchCurveInput';
import TouchInput from './model/TouchInput';
import Trial from './model/Trial';
import TrialExtension from './model/TrialExtension';
import TrialRequestMetadata from './model/TrialRequestMetadata';
import TrialRequestOptions from './model/TrialRequestOptions';
import UpdateExtension from './model/UpdateExtension';
import User from './model/User';
import UserError from './model/UserError';
import V1CreateHookParameters from './model/V1CreateHookParameters';
import V1LoadExtensionParameters from './model/V1LoadExtensionParameters';
import V1SetStateBody from './model/V1SetStateBody';
import ValidationError from './model/ValidationError';
import VolumeOptions from './model/VolumeOptions';
import VpnDefinition from './model/VpnDefinition';
import WebPlayerCreateSessionRequest from './model/WebPlayerCreateSessionRequest';
import WebPlayerSession from './model/WebPlayerSession';
import ArmApi from './api/ArmApi';


/**
* Arm Virtual Hosting API.<br>
* The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
* <p>
* An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
* <pre>
* var AvhApi = require('index'); // See note below*.
* var xxxSvc = new AvhApi.XxxApi(); // Allocate the API class we're going to use.
* var yyyModel = new AvhApi.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
* and put the application logic within the callback function.</em>
* </p>
* <p>
* A non-AMD browser application (discouraged) might do something like this:
* <pre>
* var xxxSvc = new AvhApi.XxxApi(); // Allocate the API class we're going to use.
* var yyy = new AvhApi.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* </p>
* @module index
* @version 1.0.2
*/
export {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient,

    /**
     * The Address model constructor.
     * @property {module:model/Address}
     */
    Address,

    /**
     * The AgentApp model constructor.
     * @property {module:model/AgentApp}
     */
    AgentApp,

    /**
     * The AgentAppReadyResponse model constructor.
     * @property {module:model/AgentAppReadyResponse}
     */
    AgentAppReadyResponse,

    /**
     * The AgentAppStatus model constructor.
     * @property {module:model/AgentAppStatus}
     */
    AgentAppStatus,

    /**
     * The AgentAppsList model constructor.
     * @property {module:model/AgentAppsList}
     */
    AgentAppsList,

    /**
     * The AgentAppsStatusList model constructor.
     * @property {module:model/AgentAppsStatusList}
     */
    AgentAppsStatusList,

    /**
     * The AgentError model constructor.
     * @property {module:model/AgentError}
     */
    AgentError,

    /**
     * The AgentIcons model constructor.
     * @property {module:model/AgentIcons}
     */
    AgentIcons,

    /**
     * The AgentInstallBody model constructor.
     * @property {module:model/AgentInstallBody}
     */
    AgentInstallBody,

    /**
     * The AgentProfilesReturn model constructor.
     * @property {module:model/AgentProfilesReturn}
     */
    AgentProfilesReturn,

    /**
     * The AgentSystemAdbAuth model constructor.
     * @property {module:model/AgentSystemAdbAuth}
     */
    AgentSystemAdbAuth,

    /**
     * The AgentSystemGetPropBody model constructor.
     * @property {module:model/AgentSystemGetPropBody}
     */
    AgentSystemGetPropBody,

    /**
     * The AgentValueReturn model constructor.
     * @property {module:model/AgentValueReturn}
     */
    AgentValueReturn,

    /**
     * The AgreedAck model constructor.
     * @property {module:model/AgreedAck}
     */
    AgreedAck,

    /**
     * The ApiConflictError model constructor.
     * @property {module:model/ApiConflictError}
     */
    ApiConflictError,

    /**
     * The ApiError model constructor.
     * @property {module:model/ApiError}
     */
    ApiError,

    /**
     * The ApiInternalConsistencyError model constructor.
     * @property {module:model/ApiInternalConsistencyError}
     */
    ApiInternalConsistencyError,

    /**
     * The ApiNotFoundError model constructor.
     * @property {module:model/ApiNotFoundError}
     */
    ApiNotFoundError,

    /**
     * The ApiToken model constructor.
     * @property {module:model/ApiToken}
     */
    ApiToken,

    /**
     * The Bit model constructor.
     * @property {module:model/Bit}
     */
    Bit,

    /**
     * The BtraceEnableOptions model constructor.
     * @property {module:model/BtraceEnableOptions}
     */
    BtraceEnableOptions,

    /**
     * The Button model constructor.
     * @property {module:model/Button}
     */
    Button,

    /**
     * The CouponOptions model constructor.
     * @property {module:model/CouponOptions}
     */
    CouponOptions,

    /**
     * The CreateTeam model constructor.
     * @property {module:model/CreateTeam}
     */
    CreateTeam,

    /**
     * The CreatedBy model constructor.
     * @property {module:model/CreatedBy}
     */
    CreatedBy,

    /**
     * The Credentials model constructor.
     * @property {module:model/Credentials}
     */
    Credentials,

    /**
     * The DomainOptions model constructor.
     * @property {module:model/DomainOptions}
     */
    DomainOptions,

    /**
     * The Extension model constructor.
     * @property {module:model/Extension}
     */
    Extension,

    /**
     * The Features model constructor.
     * @property {module:model/Features}
     */
    Features,

    /**
     * The FileChanges model constructor.
     * @property {module:model/FileChanges}
     */
    FileChanges,

    /**
     * The Firmware model constructor.
     * @property {module:model/Firmware}
     */
    Firmware,

    /**
     * The GpioStateDefinition model constructor.
     * @property {module:model/GpioStateDefinition}
     */
    GpioStateDefinition,

    /**
     * The GpiosState model constructor.
     * @property {module:model/GpiosState}
     */
    GpiosState,

    /**
     * The GrantTrialRequestResponse model constructor.
     * @property {module:model/GrantTrialRequestResponse}
     */
    GrantTrialRequestResponse,

    /**
     * The Hook model constructor.
     * @property {module:model/Hook}
     */
    Hook,

    /**
     * The Image model constructor.
     * @property {module:model/Image}
     */
    Image,

    /**
     * The Instance model constructor.
     * @property {module:model/Instance}
     */
    Instance,

    /**
     * The InstanceBootOptions model constructor.
     * @property {module:model/InstanceBootOptions}
     */
    InstanceBootOptions,

    /**
     * The InstanceBootOptionsAdditionalTag model constructor.
     * @property {module:model/InstanceBootOptionsAdditionalTag}
     */
    InstanceBootOptionsAdditionalTag,

    /**
     * The InstanceConsoleEndpoint model constructor.
     * @property {module:model/InstanceConsoleEndpoint}
     */
    InstanceConsoleEndpoint,

    /**
     * The InstanceCreateOptions model constructor.
     * @property {module:model/InstanceCreateOptions}
     */
    InstanceCreateOptions,

    /**
     * The InstanceInput model constructor.
     * @property {module:model/InstanceInput}
     */
    InstanceInput,

    /**
     * The InstanceNetmonState model constructor.
     * @property {module:model/InstanceNetmonState}
     */
    InstanceNetmonState,

    /**
     * The InstanceReturn model constructor.
     * @property {module:model/InstanceReturn}
     */
    InstanceReturn,

    /**
     * The InstanceServices model constructor.
     * @property {module:model/InstanceServices}
     */
    InstanceServices,

    /**
     * The InstanceStartOptions model constructor.
     * @property {module:model/InstanceStartOptions}
     */
    InstanceStartOptions,

    /**
     * The InstanceState model constructor.
     * @property {module:model/InstanceState}
     */
    InstanceState,

    /**
     * The InstanceStopOptions model constructor.
     * @property {module:model/InstanceStopOptions}
     */
    InstanceStopOptions,

    /**
     * The Invitation model constructor.
     * @property {module:model/Invitation}
     */
    Invitation,

    /**
     * The InviteRevokeParams model constructor.
     * @property {module:model/InviteRevokeParams}
     */
    InviteRevokeParams,

    /**
     * The InviteRevokeParamsIds model constructor.
     * @property {module:model/InviteRevokeParamsIds}
     */
    InviteRevokeParamsIds,

    /**
     * The Kcrange model constructor.
     * @property {module:model/Kcrange}
     */
    Kcrange,

    /**
     * The KernelTask model constructor.
     * @property {module:model/KernelTask}
     */
    KernelTask,

    /**
     * The KernelThread model constructor.
     * @property {module:model/KernelThread}
     */
    KernelThread,

    /**
     * The MediaPlayBody model constructor.
     * @property {module:model/MediaPlayBody}
     */
    MediaPlayBody,

    /**
     * The Model model constructor.
     * @property {module:model/Model}
     */
    Model,

    /**
     * The ModelSoftware model constructor.
     * @property {module:model/ModelSoftware}
     */
    ModelSoftware,

    /**
     * The PasswordChangeBody model constructor.
     * @property {module:model/PasswordChangeBody}
     */
    PasswordChangeBody,

    /**
     * The PasswordResetBody model constructor.
     * @property {module:model/PasswordResetBody}
     */
    PasswordResetBody,

    /**
     * The PatchInstanceOptions model constructor.
     * @property {module:model/PatchInstanceOptions}
     */
    PatchInstanceOptions,

    /**
     * The PeripheralsData model constructor.
     * @property {module:model/PeripheralsData}
     */
    PeripheralsData,

    /**
     * The Plan model constructor.
     * @property {module:model/Plan}
     */
    Plan,

    /**
     * The Project model constructor.
     * @property {module:model/Project}
     */
    Project,

    /**
     * The ProjectKey model constructor.
     * @property {module:model/ProjectKey}
     */
    ProjectKey,

    /**
     * The ProjectQuota model constructor.
     * @property {module:model/ProjectQuota}
     */
    ProjectQuota,

    /**
     * The ProjectSettings model constructor.
     * @property {module:model/ProjectSettings}
     */
    ProjectSettings,

    /**
     * The ProjectUsage model constructor.
     * @property {module:model/ProjectUsage}
     */
    ProjectUsage,

    /**
     * The RateInfo model constructor.
     * @property {module:model/RateInfo}
     */
    RateInfo,

    /**
     * The ResetLinkBody model constructor.
     * @property {module:model/ResetLinkBody}
     */
    ResetLinkBody,

    /**
     * The Role model constructor.
     * @property {module:model/Role}
     */
    Role,

    /**
     * The RotateBody model constructor.
     * @property {module:model/RotateBody}
     */
    RotateBody,

    /**
     * The Snapshot model constructor.
     * @property {module:model/Snapshot}
     */
    Snapshot,

    /**
     * The SnapshotCreationOptions model constructor.
     * @property {module:model/SnapshotCreationOptions}
     */
    SnapshotCreationOptions,

    /**
     * The SnapshotStatus model constructor.
     * @property {module:model/SnapshotStatus}
     */
    SnapshotStatus,

    /**
     * The SubscriberInvite model constructor.
     * @property {module:model/SubscriberInvite}
     */
    SubscriberInvite,

    /**
     * The Team model constructor.
     * @property {module:model/Team}
     */
    Team,

    /**
     * The TeamCreate model constructor.
     * @property {module:model/TeamCreate}
     */
    TeamCreate,

    /**
     * The TextInput model constructor.
     * @property {module:model/TextInput}
     */
    TextInput,

    /**
     * The Token model constructor.
     * @property {module:model/Token}
     */
    Token,

    /**
     * The TouchCurveInput model constructor.
     * @property {module:model/TouchCurveInput}
     */
    TouchCurveInput,

    /**
     * The TouchInput model constructor.
     * @property {module:model/TouchInput}
     */
    TouchInput,

    /**
     * The Trial model constructor.
     * @property {module:model/Trial}
     */
    Trial,

    /**
     * The TrialExtension model constructor.
     * @property {module:model/TrialExtension}
     */
    TrialExtension,

    /**
     * The TrialRequestMetadata model constructor.
     * @property {module:model/TrialRequestMetadata}
     */
    TrialRequestMetadata,

    /**
     * The TrialRequestOptions model constructor.
     * @property {module:model/TrialRequestOptions}
     */
    TrialRequestOptions,

    /**
     * The UpdateExtension model constructor.
     * @property {module:model/UpdateExtension}
     */
    UpdateExtension,

    /**
     * The User model constructor.
     * @property {module:model/User}
     */
    User,

    /**
     * The UserError model constructor.
     * @property {module:model/UserError}
     */
    UserError,

    /**
     * The V1CreateHookParameters model constructor.
     * @property {module:model/V1CreateHookParameters}
     */
    V1CreateHookParameters,

    /**
     * The V1LoadExtensionParameters model constructor.
     * @property {module:model/V1LoadExtensionParameters}
     */
    V1LoadExtensionParameters,

    /**
     * The V1SetStateBody model constructor.
     * @property {module:model/V1SetStateBody}
     */
    V1SetStateBody,

    /**
     * The ValidationError model constructor.
     * @property {module:model/ValidationError}
     */
    ValidationError,

    /**
     * The VolumeOptions model constructor.
     * @property {module:model/VolumeOptions}
     */
    VolumeOptions,

    /**
     * The VpnDefinition model constructor.
     * @property {module:model/VpnDefinition}
     */
    VpnDefinition,

    /**
     * The WebPlayerCreateSessionRequest model constructor.
     * @property {module:model/WebPlayerCreateSessionRequest}
     */
    WebPlayerCreateSessionRequest,

    /**
     * The WebPlayerSession model constructor.
     * @property {module:model/WebPlayerSession}
     */
    WebPlayerSession,

    /**
    * The ArmApi service constructor.
    * @property {module:api/ArmApi}
    */
    ArmApi
};
