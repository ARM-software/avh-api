"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _ApiConflictError = _interopRequireDefault(require("../model/ApiConflictError"));
var _ApiError = _interopRequireDefault(require("../model/ApiError"));
var _ApiInternalConsistencyError = _interopRequireDefault(require("../model/ApiInternalConsistencyError"));
var _ApiNotFoundError = _interopRequireDefault(require("../model/ApiNotFoundError"));
var _ApiToken = _interopRequireDefault(require("../model/ApiToken"));
var _BtraceEnableOptions = _interopRequireDefault(require("../model/BtraceEnableOptions"));
var _CreateTeam = _interopRequireDefault(require("../model/CreateTeam"));
var _Firmware = _interopRequireDefault(require("../model/Firmware"));
var _GpiosState = _interopRequireDefault(require("../model/GpiosState"));
var _Hook = _interopRequireDefault(require("../model/Hook"));
var _Image = _interopRequireDefault(require("../model/Image"));
var _Instance = _interopRequireDefault(require("../model/Instance"));
var _InstanceConsoleEndpoint = _interopRequireDefault(require("../model/InstanceConsoleEndpoint"));
var _InstanceCreateOptions = _interopRequireDefault(require("../model/InstanceCreateOptions"));
var _InstanceInput = _interopRequireDefault(require("../model/InstanceInput"));
var _InstanceReturn = _interopRequireDefault(require("../model/InstanceReturn"));
var _InstanceStartOptions = _interopRequireDefault(require("../model/InstanceStartOptions"));
var _InstanceState = _interopRequireDefault(require("../model/InstanceState"));
var _InstanceStopOptions = _interopRequireDefault(require("../model/InstanceStopOptions"));
var _Kcrange = _interopRequireDefault(require("../model/Kcrange"));
var _KernelTask = _interopRequireDefault(require("../model/KernelTask"));
var _MediaPlayBody = _interopRequireDefault(require("../model/MediaPlayBody"));
var _Model = _interopRequireDefault(require("../model/Model"));
var _PatchInstanceOptions = _interopRequireDefault(require("../model/PatchInstanceOptions"));
var _PeripheralsData = _interopRequireDefault(require("../model/PeripheralsData"));
var _Project = _interopRequireDefault(require("../model/Project"));
var _ProjectKey = _interopRequireDefault(require("../model/ProjectKey"));
var _ProjectSettings = _interopRequireDefault(require("../model/ProjectSettings"));
var _Role = _interopRequireDefault(require("../model/Role"));
var _Snapshot = _interopRequireDefault(require("../model/Snapshot"));
var _SnapshotCreationOptions = _interopRequireDefault(require("../model/SnapshotCreationOptions"));
var _SubscriberInvite = _interopRequireDefault(require("../model/SubscriberInvite"));
var _Team = _interopRequireDefault(require("../model/Team"));
var _TeamCreate = _interopRequireDefault(require("../model/TeamCreate"));
var _Token = _interopRequireDefault(require("../model/Token"));
var _UserError = _interopRequireDefault(require("../model/UserError"));
var _V1CreateHookParameters = _interopRequireDefault(require("../model/V1CreateHookParameters"));
var _V1SetStateBody = _interopRequireDefault(require("../model/V1SetStateBody"));
var _ValidationError = _interopRequireDefault(require("../model/ValidationError"));
var _WebPlayerCreateSessionRequest = _interopRequireDefault(require("../model/WebPlayerCreateSessionRequest"));
var _WebPlayerSession = _interopRequireDefault(require("../model/WebPlayerSession"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
* Arm service.
* @module api/ArmApi
* @version 1.0.2
*/
var ArmApi = /*#__PURE__*/function () {
  /**
  * Constructs a new ArmApi. 
  * @alias module:api/ArmApi
  * @class
  * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
  * default to {@link module:ApiClient#instance} if unspecified.
  */
  function ArmApi(apiClient) {
    _classCallCheck(this, ArmApi);
    this.apiClient = apiClient || _ApiClient["default"].instance;
  }

  /**
   * Get Trial Status
   * Allow users to check the trial status of an email.
   * @param {String} trialEmail Trial Email
   * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Object} and HTTP response
   */
  _createClass(ArmApi, [{
    key: "trialStatusWithHttpInfo",
    value: function trialStatusWithHttpInfo(trialEmail) {
      var postBody = null;
      // verify the required parameter 'trialEmail' is set
      if (trialEmail === undefined || trialEmail === null) {
        throw new Error("Missing the required parameter 'trialEmail' when calling trialStatus");
      }
      var pathParams = {
        'trialEmail': trialEmail
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = Object;
      return this.apiClient.callApi('/v1/billing/trial-status/{trialEmail}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Trial Status
     * Allow users to check the trial status of an email.
     * @param {String} trialEmail Trial Email
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Object}
     */
  }, {
    key: "trialStatus",
    value: function trialStatus(trialEmail) {
      return this.trialStatusWithHttpInfo(trialEmail).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Add Project Authorized Key
     * @param {String} projectId Project ID - uuid
     * @param {module:model/ProjectKey} projectKey Key to add
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link String} and HTTP response
     */
  }, {
    key: "v1AddProjectKeyWithHttpInfo",
    value: function v1AddProjectKeyWithHttpInfo(projectId, projectKey) {
      var postBody = projectKey;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1AddProjectKey");
      }
      // verify the required parameter 'projectKey' is set
      if (projectKey === undefined || projectKey === null) {
        throw new Error("Missing the required parameter 'projectKey' when calling v1AddProjectKey");
      }
      var pathParams = {
        'projectId': projectId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = 'String';
      return this.apiClient.callApi('/v1/projects/{projectId}/keys', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Add Project Authorized Key
     * @param {String} projectId Project ID - uuid
     * @param {module:model/ProjectKey} projectKey Key to add
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link String}
     */
  }, {
    key: "v1AddProjectKey",
    value: function v1AddProjectKey(projectId, projectKey) {
      return this.v1AddProjectKeyWithHttpInfo(projectId, projectKey).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Add team role to project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} teamId Team ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1AddTeamRoleToProjectWithHttpInfo",
    value: function v1AddTeamRoleToProjectWithHttpInfo(projectId, teamId, roleId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1AddTeamRoleToProject");
      }
      // verify the required parameter 'teamId' is set
      if (teamId === undefined || teamId === null) {
        throw new Error("Missing the required parameter 'teamId' when calling v1AddTeamRoleToProject");
      }
      // verify the required parameter 'roleId' is set
      if (roleId === undefined || roleId === null) {
        throw new Error("Missing the required parameter 'roleId' when calling v1AddTeamRoleToProject");
      }
      var pathParams = {
        'projectId': projectId,
        'teamId': teamId,
        'roleId': roleId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId}', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Add team role to project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} teamId Team ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1AddTeamRoleToProject",
    value: function v1AddTeamRoleToProject(projectId, teamId, roleId) {
      return this.v1AddTeamRoleToProjectWithHttpInfo(projectId, teamId, roleId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Add user role to project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} userId User ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1AddUserRoleToProjectWithHttpInfo",
    value: function v1AddUserRoleToProjectWithHttpInfo(projectId, userId, roleId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1AddUserRoleToProject");
      }
      // verify the required parameter 'userId' is set
      if (userId === undefined || userId === null) {
        throw new Error("Missing the required parameter 'userId' when calling v1AddUserRoleToProject");
      }
      // verify the required parameter 'roleId' is set
      if (roleId === undefined || roleId === null) {
        throw new Error("Missing the required parameter 'roleId' when calling v1AddUserRoleToProject");
      }
      var pathParams = {
        'projectId': projectId,
        'userId': userId,
        'roleId': roleId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/roles/projects/{projectId}/users/{userId}/roles/{roleId}', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Add user role to project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} userId User ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1AddUserRoleToProject",
    value: function v1AddUserRoleToProject(projectId, userId, roleId) {
      return this.v1AddUserRoleToProjectWithHttpInfo(projectId, userId, roleId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Add user to team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @param {String} userId User ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1AddUserToTeamWithHttpInfo",
    value: function v1AddUserToTeamWithHttpInfo(teamId, userId) {
      var postBody = null;
      // verify the required parameter 'teamId' is set
      if (teamId === undefined || teamId === null) {
        throw new Error("Missing the required parameter 'teamId' when calling v1AddUserToTeam");
      }
      // verify the required parameter 'userId' is set
      if (userId === undefined || userId === null) {
        throw new Error("Missing the required parameter 'userId' when calling v1AddUserToTeam");
      }
      var pathParams = {
        'teamId': teamId,
        'userId': userId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/teams/{teamId}/users/{userId}', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Add user to team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @param {String} userId User ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1AddUserToTeam",
    value: function v1AddUserToTeam(teamId, userId) {
      return this.v1AddUserToTeamWithHttpInfo(teamId, userId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Log In
     * @param {module:model/ApiToken} apiToken Authorization Data
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Token} and HTTP response
     */
  }, {
    key: "v1AuthLoginWithHttpInfo",
    value: function v1AuthLoginWithHttpInfo(apiToken) {
      var postBody = apiToken;
      // verify the required parameter 'apiToken' is set
      if (apiToken === undefined || apiToken === null) {
        throw new Error("Missing the required parameter 'apiToken' when calling v1AuthLogin");
      }
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = [];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Token["default"];
      return this.apiClient.callApi('/v1/auth/login', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Log In
     * @param {module:model/ApiToken} apiToken Authorization Data
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Token}
     */
  }, {
    key: "v1AuthLogin",
    value: function v1AuthLogin(apiToken) {
      return this.v1AuthLoginWithHttpInfo(apiToken).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Pre-authorize an btrace download
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Object} and HTTP response
     */
  }, {
    key: "v1BtracePreauthorizeWithHttpInfo",
    value: function v1BtracePreauthorizeWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1BtracePreauthorize");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = Object;
      return this.apiClient.callApi('/v1/instances/{instanceId}/btrace-authorize', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Pre-authorize an btrace download
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Object}
     */
  }, {
    key: "v1BtracePreauthorize",
    value: function v1BtracePreauthorize(instanceId) {
      return this.v1BtracePreauthorizeWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Clear CoreTrace logs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1ClearCoreTraceWithHttpInfo",
    value: function v1ClearCoreTraceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1ClearCoreTrace");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/strace', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Clear CoreTrace logs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1ClearCoreTrace",
    value: function v1ClearCoreTrace(instanceId) {
      return this.v1ClearCoreTraceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Clear HyperTrace logs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1ClearHyperTraceWithHttpInfo",
    value: function v1ClearHyperTraceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1ClearHyperTrace");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/btrace', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Clear HyperTrace logs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1ClearHyperTrace",
    value: function v1ClearHyperTrace(instanceId) {
      return this.v1ClearHyperTraceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Clear Hooks on an instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1ClearHyperTraceHooksWithHttpInfo",
    value: function v1ClearHyperTraceHooksWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1ClearHyperTraceHooks");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/hooks/clear', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Clear Hooks on an instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1ClearHyperTraceHooks",
    value: function v1ClearHyperTraceHooks(instanceId) {
      return this.v1ClearHyperTraceHooksWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Clear Panics
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1ClearInstancePanicsWithHttpInfo",
    value: function v1ClearInstancePanicsWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1ClearInstancePanics");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/panics', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Clear Panics
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1ClearInstancePanics",
    value: function v1ClearInstancePanics(instanceId) {
      return this.v1ClearInstancePanicsWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create hypervisor hook for Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/V1CreateHookParameters} v1CreateHookParameters application/json
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Hook} and HTTP response
     */
  }, {
    key: "v1CreateHookWithHttpInfo",
    value: function v1CreateHookWithHttpInfo(instanceId, v1CreateHookParameters) {
      var postBody = v1CreateHookParameters;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1CreateHook");
      }
      // verify the required parameter 'v1CreateHookParameters' is set
      if (v1CreateHookParameters === undefined || v1CreateHookParameters === null) {
        throw new Error("Missing the required parameter 'v1CreateHookParameters' when calling v1CreateHook");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Hook["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/hooks', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create hypervisor hook for Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/V1CreateHookParameters} v1CreateHookParameters application/json
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Hook}
     */
  }, {
    key: "v1CreateHook",
    value: function v1CreateHook(instanceId, v1CreateHookParameters) {
      return this.v1CreateHookWithHttpInfo(instanceId, v1CreateHookParameters).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create a new Image
     * @param {String} type Image type
     * @param {module:model/String} encoding How the file is stored
     * @param {Object} opts Optional parameters
     * @param {Boolean} opts.encapsulated set to false if the uploaded file is not encapsulated inside an outer zipfile
     * @param {String} opts.name Image name
     * @param {String} opts.project Project ID
     * @param {String} opts.instance Instance ID
     * @param {File} opts.file Optionally the actual file
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Image} and HTTP response
     */
  }, {
    key: "v1CreateImageWithHttpInfo",
    value: function v1CreateImageWithHttpInfo(type, encoding, opts) {
      opts = opts || {};
      var postBody = null;
      // verify the required parameter 'type' is set
      if (type === undefined || type === null) {
        throw new Error("Missing the required parameter 'type' when calling v1CreateImage");
      }
      // verify the required parameter 'encoding' is set
      if (encoding === undefined || encoding === null) {
        throw new Error("Missing the required parameter 'encoding' when calling v1CreateImage");
      }
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {
        'type': type,
        'encoding': encoding,
        'encapsulated': opts['encapsulated'],
        'name': opts['name'],
        'project': opts['project'],
        'instance': opts['instance'],
        'file': opts['file']
      };
      var authNames = ['BearerAuth'];
      var contentTypes = ['multipart/form-data'];
      var accepts = ['application/json'];
      var returnType = _Image["default"];
      return this.apiClient.callApi('/v1/images', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create a new Image
     * @param {String} type Image type
     * @param {module:model/String} encoding How the file is stored
     * @param {Object} opts Optional parameters
     * @param {Boolean} opts.encapsulated set to false if the uploaded file is not encapsulated inside an outer zipfile
     * @param {String} opts.name Image name
     * @param {String} opts.project Project ID
     * @param {String} opts.instance Instance ID
     * @param {File} opts.file Optionally the actual file
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Image}
     */
  }, {
    key: "v1CreateImage",
    value: function v1CreateImage(type, encoding, opts) {
      return this.v1CreateImageWithHttpInfo(type, encoding, opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create Instance
     * @param {module:model/InstanceCreateOptions} instanceCreateOptions The vm definition to create
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/InstanceReturn} and HTTP response
     */
  }, {
    key: "v1CreateInstanceWithHttpInfo",
    value: function v1CreateInstanceWithHttpInfo(instanceCreateOptions) {
      var postBody = instanceCreateOptions;
      // verify the required parameter 'instanceCreateOptions' is set
      if (instanceCreateOptions === undefined || instanceCreateOptions === null) {
        throw new Error("Missing the required parameter 'instanceCreateOptions' when calling v1CreateInstance");
      }
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _InstanceReturn["default"];
      return this.apiClient.callApi('/v1/instances', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create Instance
     * @param {module:model/InstanceCreateOptions} instanceCreateOptions The vm definition to create
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/InstanceReturn}
     */
  }, {
    key: "v1CreateInstance",
    value: function v1CreateInstance(instanceCreateOptions) {
      return this.v1CreateInstanceWithHttpInfo(instanceCreateOptions).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create a Project
     * @param {module:model/Project} project Project
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Project} and HTTP response
     */
  }, {
    key: "v1CreateProjectWithHttpInfo",
    value: function v1CreateProjectWithHttpInfo(project) {
      var postBody = project;
      // verify the required parameter 'project' is set
      if (project === undefined || project === null) {
        throw new Error("Missing the required parameter 'project' when calling v1CreateProject");
      }
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Project["default"];
      return this.apiClient.callApi('/v1/projects', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create a Project
     * @param {module:model/Project} project Project
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Project}
     */
  }, {
    key: "v1CreateProject",
    value: function v1CreateProject(project) {
      return this.v1CreateProjectWithHttpInfo(project).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create Instance Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/SnapshotCreationOptions} snapshotCreationOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Snapshot} and HTTP response
     */
  }, {
    key: "v1CreateSnapshotWithHttpInfo",
    value: function v1CreateSnapshotWithHttpInfo(instanceId, snapshotCreationOptions) {
      var postBody = snapshotCreationOptions;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1CreateSnapshot");
      }
      // verify the required parameter 'snapshotCreationOptions' is set
      if (snapshotCreationOptions === undefined || snapshotCreationOptions === null) {
        throw new Error("Missing the required parameter 'snapshotCreationOptions' when calling v1CreateSnapshot");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Snapshot["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/snapshots', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create Instance Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/SnapshotCreationOptions} snapshotCreationOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Snapshot}
     */
  }, {
    key: "v1CreateSnapshot",
    value: function v1CreateSnapshot(instanceId, snapshotCreationOptions) {
      return this.v1CreateSnapshotWithHttpInfo(instanceId, snapshotCreationOptions).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create Subscriber Invite
     * Create Subscriber Invite
     * @param {module:model/SubscriberInvite} subscriberInvite Payload of Subscriber Invite
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/SubscriberInvite} and HTTP response
     */
  }, {
    key: "v1CreateSubscriberInviteWithHttpInfo",
    value: function v1CreateSubscriberInviteWithHttpInfo(subscriberInvite) {
      var postBody = subscriberInvite;
      // verify the required parameter 'subscriberInvite' is set
      if (subscriberInvite === undefined || subscriberInvite === null) {
        throw new Error("Missing the required parameter 'subscriberInvite' when calling v1CreateSubscriberInvite");
      }
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _SubscriberInvite["default"];
      return this.apiClient.callApi('/v1/billing/invites', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create Subscriber Invite
     * Create Subscriber Invite
     * @param {module:model/SubscriberInvite} subscriberInvite Payload of Subscriber Invite
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/SubscriberInvite}
     */
  }, {
    key: "v1CreateSubscriberInvite",
    value: function v1CreateSubscriberInvite(subscriberInvite) {
      return this.v1CreateSubscriberInviteWithHttpInfo(subscriberInvite).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Delete an existing hypervisor hook
     * @param {String} hookId Hook ID
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1DeleteHookWithHttpInfo",
    value: function v1DeleteHookWithHttpInfo(hookId) {
      var postBody = null;
      // verify the required parameter 'hookId' is set
      if (hookId === undefined || hookId === null) {
        throw new Error("Missing the required parameter 'hookId' when calling v1DeleteHook");
      }
      var pathParams = {
        'hookId': hookId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/hooks/{hookId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Delete an existing hypervisor hook
     * @param {String} hookId Hook ID
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1DeleteHook",
    value: function v1DeleteHook(hookId) {
      return this.v1DeleteHookWithHttpInfo(hookId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Delete Image
     * @param {String} imageId Image ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1DeleteImageWithHttpInfo",
    value: function v1DeleteImageWithHttpInfo(imageId) {
      var postBody = null;
      // verify the required parameter 'imageId' is set
      if (imageId === undefined || imageId === null) {
        throw new Error("Missing the required parameter 'imageId' when calling v1DeleteImage");
      }
      var pathParams = {
        'imageId': imageId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v2/images/{imageId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Delete Image
     * @param {String} imageId Image ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1DeleteImage",
    value: function v1DeleteImage(imageId) {
      return this.v1DeleteImageWithHttpInfo(imageId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Remove Instance
     * @param {String} instanceId Instance ID
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1DeleteInstanceWithHttpInfo",
    value: function v1DeleteInstanceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1DeleteInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Remove Instance
     * @param {String} instanceId Instance ID
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1DeleteInstance",
    value: function v1DeleteInstance(instanceId) {
      return this.v1DeleteInstanceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Delete a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1DeleteInstanceSnapshotWithHttpInfo",
    value: function v1DeleteInstanceSnapshotWithHttpInfo(instanceId, snapshotId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1DeleteInstanceSnapshot");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1DeleteInstanceSnapshot");
      }
      var pathParams = {
        'instanceId': instanceId,
        'snapshotId': snapshotId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/snapshots/{snapshotId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Delete a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1DeleteInstanceSnapshot",
    value: function v1DeleteInstanceSnapshot(instanceId, snapshotId) {
      return this.v1DeleteInstanceSnapshotWithHttpInfo(instanceId, snapshotId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Delete a Project
     * @param {String} projectId Project ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1DeleteProjectWithHttpInfo",
    value: function v1DeleteProjectWithHttpInfo(projectId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1DeleteProject");
      }
      var pathParams = {
        'projectId': projectId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/projects/{projectId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Delete a Project
     * @param {String} projectId Project ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1DeleteProject",
    value: function v1DeleteProject(projectId) {
      return this.v1DeleteProjectWithHttpInfo(projectId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Delete a Snapshot
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1DeleteSnapshotWithHttpInfo",
    value: function v1DeleteSnapshotWithHttpInfo(snapshotId) {
      var postBody = null;
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1DeleteSnapshot");
      }
      var pathParams = {
        'snapshotId': snapshotId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/snapshots/{snapshotId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Delete a Snapshot
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1DeleteSnapshot",
    value: function v1DeleteSnapshot(snapshotId) {
      return this.v1DeleteSnapshotWithHttpInfo(snapshotId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Disable an exposed port on an instance for device access.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1DisableExposePortWithHttpInfo",
    value: function v1DisableExposePortWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1DisableExposePort");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/exposeport/disable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Disable an exposed port on an instance for device access.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1DisableExposePort",
    value: function v1DisableExposePort(instanceId) {
      return this.v1DisableExposePortWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Enable an exposed port on an instance for device access.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1EnableExposePortWithHttpInfo",
    value: function v1EnableExposePortWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1EnableExposePort");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/exposeport/enable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Enable an exposed port on an instance for device access.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1EnableExposePort",
    value: function v1EnableExposePort(instanceId) {
      return this.v1EnableExposePortWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Execute Hooks on an instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1ExecuteHyperTraceHooksWithHttpInfo",
    value: function v1ExecuteHyperTraceHooksWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1ExecuteHyperTraceHooks");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/hooks/execute', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Execute Hooks on an instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1ExecuteHyperTraceHooks",
    value: function v1ExecuteHyperTraceHooks(instanceId) {
      return this.v1ExecuteHyperTraceHooksWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get hypervisor hook by id
     * @param {String} hookId Hook Id
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Hook} and HTTP response
     */
  }, {
    key: "v1GetHookByIdWithHttpInfo",
    value: function v1GetHookByIdWithHttpInfo(hookId) {
      var postBody = null;
      // verify the required parameter 'hookId' is set
      if (hookId === undefined || hookId === null) {
        throw new Error("Missing the required parameter 'hookId' when calling v1GetHookById");
      }
      var pathParams = {
        'hookId': hookId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _Hook["default"];
      return this.apiClient.callApi('/v1/hooks/{hookId}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get hypervisor hook by id
     * @param {String} hookId Hook Id
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Hook}
     */
  }, {
    key: "v1GetHookById",
    value: function v1GetHookById(hookId) {
      return this.v1GetHookByIdWithHttpInfo(hookId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get all hypervisor hooks for Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {Object} opts Optional parameters
     * @param {Number} opts.limit limit for pagination results, defaults to 20
     * @param {Number} opts.offset offset for pagination results, defaults to 0
     * @param {module:model/String} opts.sort sort ASC or DESC, defaults to DESC
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Hook>} and HTTP response
     */
  }, {
    key: "v1GetHooksWithHttpInfo",
    value: function v1GetHooksWithHttpInfo(instanceId, opts) {
      opts = opts || {};
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetHooks");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {
        'limit': opts['limit'],
        'offset': opts['offset'],
        'sort': opts['sort']
      };
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Hook["default"]];
      return this.apiClient.callApi('/v1/instances/{instanceId}/hooks', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get all hypervisor hooks for Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {Object} opts Optional parameters
     * @param {Number} opts.limit limit for pagination results, defaults to 20
     * @param {Number} opts.offset offset for pagination results, defaults to 0
     * @param {module:model/String} opts.sort sort ASC or DESC, defaults to DESC
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Hook>}
     */
  }, {
    key: "v1GetHooks",
    value: function v1GetHooks(instanceId, opts) {
      return this.v1GetHooksWithHttpInfo(instanceId, opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Image Metadata
     * @param {String} imageId Image ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Image} and HTTP response
     */
  }, {
    key: "v1GetImageWithHttpInfo",
    value: function v1GetImageWithHttpInfo(imageId) {
      var postBody = null;
      // verify the required parameter 'imageId' is set
      if (imageId === undefined || imageId === null) {
        throw new Error("Missing the required parameter 'imageId' when calling v1GetImage");
      }
      var pathParams = {
        'imageId': imageId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _Image["default"];
      return this.apiClient.callApi('/v1/images/{imageId}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Image Metadata
     * @param {String} imageId Image ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Image}
     */
  }, {
    key: "v1GetImage",
    value: function v1GetImage(imageId) {
      return this.v1GetImageWithHttpInfo(imageId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get all Images Metadata
     * @param {Object} opts Optional parameters
     * @param {String} opts.project Optionally filter by project - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Image} and HTTP response
     */
  }, {
    key: "v1GetImagesWithHttpInfo",
    value: function v1GetImagesWithHttpInfo(opts) {
      opts = opts || {};
      var postBody = null;
      var pathParams = {};
      var queryParams = {
        'project': opts['project']
      };
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _Image["default"];
      return this.apiClient.callApi('/v1/images', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get all Images Metadata
     * @param {Object} opts Optional parameters
     * @param {String} opts.project Optionally filter by project - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Image}
     */
  }, {
    key: "v1GetImages",
    value: function v1GetImages(opts) {
      return this.v1GetImagesWithHttpInfo(opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instance
     * @param {String} instanceId Instance ID
     * @param {Object} opts Optional parameters
     * @param {Array.<String>} opts.returnAttr Attributes to include in instance return
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Instance} and HTTP response
     */
  }, {
    key: "v1GetInstanceWithHttpInfo",
    value: function v1GetInstanceWithHttpInfo(instanceId, opts) {
      opts = opts || {};
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {
        'returnAttr': this.apiClient.buildCollectionParam(opts['returnAttr'], 'csv')
      };
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _Instance["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instance
     * @param {String} instanceId Instance ID
     * @param {Object} opts Optional parameters
     * @param {Array.<String>} opts.returnAttr Attributes to include in instance return
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Instance}
     */
  }, {
    key: "v1GetInstance",
    value: function v1GetInstance(instanceId, opts) {
      return this.v1GetInstanceWithHttpInfo(instanceId, opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get console websocket URL
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/InstanceConsoleEndpoint} and HTTP response
     */
  }, {
    key: "v1GetInstanceConsoleWithHttpInfo",
    value: function v1GetInstanceConsoleWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceConsole");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _InstanceConsoleEndpoint["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/console', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get console websocket URL
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/InstanceConsoleEndpoint}
     */
  }, {
    key: "v1GetInstanceConsole",
    value: function v1GetInstanceConsole(instanceId) {
      return this.v1GetInstanceConsoleWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Console Log
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link String} and HTTP response
     */
  }, {
    key: "v1GetInstanceConsoleLogWithHttpInfo",
    value: function v1GetInstanceConsoleLogWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceConsoleLog");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['text/plain', 'application/json'];
      var returnType = 'String';
      return this.apiClient.callApi('/v1/instances/{instanceId}/consoleLog', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Console Log
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link String}
     */
  }, {
    key: "v1GetInstanceConsoleLog",
    value: function v1GetInstanceConsoleLog(instanceId) {
      return this.v1GetInstanceConsoleLogWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/GpiosState} and HTTP response
     */
  }, {
    key: "v1GetInstanceGpiosWithHttpInfo",
    value: function v1GetInstanceGpiosWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceGpios");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _GpiosState["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/gpios', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/GpiosState}
     */
  }, {
    key: "v1GetInstanceGpios",
    value: function v1GetInstanceGpios(instanceId) {
      return this.v1GetInstanceGpiosWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Panics
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<Object>} and HTTP response
     */
  }, {
    key: "v1GetInstancePanicsWithHttpInfo",
    value: function v1GetInstancePanicsWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstancePanics");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [Object];
      return this.apiClient.callApi('/v1/instances/{instanceId}/panics', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Panics
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<Object>}
     */
  }, {
    key: "v1GetInstancePanics",
    value: function v1GetInstancePanics(instanceId) {
      return this.v1GetInstancePanicsWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instance Peripherals
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/PeripheralsData} and HTTP response
     */
  }, {
    key: "v1GetInstancePeripheralsWithHttpInfo",
    value: function v1GetInstancePeripheralsWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstancePeripherals");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _PeripheralsData["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/peripherals', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instance Peripherals
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/PeripheralsData}
     */
  }, {
    key: "v1GetInstancePeripherals",
    value: function v1GetInstancePeripherals(instanceId) {
      return this.v1GetInstancePeripheralsWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Recommended SSH Command for Quick Connect
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link String} and HTTP response
     */
  }, {
    key: "v1GetInstanceQuickConnectCommandWithHttpInfo",
    value: function v1GetInstanceQuickConnectCommandWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceQuickConnectCommand");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = 'String';
      return this.apiClient.callApi('/v1/instances/{instanceId}/quickConnectCommand', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Recommended SSH Command for Quick Connect
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link String}
     */
  }, {
    key: "v1GetInstanceQuickConnectCommand",
    value: function v1GetInstanceQuickConnectCommand(instanceId) {
      return this.v1GetInstanceQuickConnectCommandWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instance Screenshot
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/String} format New peripherals state
     * @param {Object} opts Optional parameters
     * @param {Number} opts.scale Screenshot scale 1:N
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link File} and HTTP response
     */
  }, {
    key: "v1GetInstanceScreenshotWithHttpInfo",
    value: function v1GetInstanceScreenshotWithHttpInfo(instanceId, format, opts) {
      opts = opts || {};
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceScreenshot");
      }
      // verify the required parameter 'format' is set
      if (format === undefined || format === null) {
        throw new Error("Missing the required parameter 'format' when calling v1GetInstanceScreenshot");
      }
      var pathParams = {
        'instanceId': instanceId,
        'format': format
      };
      var queryParams = {
        'scale': opts['scale']
      };
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['image/png', 'image/jpeg', 'application/json'];
      var returnType = File;
      return this.apiClient.callApi('/v1/instances/{instanceId}/screenshot.{format}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instance Screenshot
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/String} format New peripherals state
     * @param {Object} opts Optional parameters
     * @param {Number} opts.scale Screenshot scale 1:N
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link File}
     */
  }, {
    key: "v1GetInstanceScreenshot",
    value: function v1GetInstanceScreenshot(instanceId, format, opts) {
      return this.v1GetInstanceScreenshotWithHttpInfo(instanceId, format, opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instance Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Snapshot} and HTTP response
     */
  }, {
    key: "v1GetInstanceSnapshotWithHttpInfo",
    value: function v1GetInstanceSnapshotWithHttpInfo(instanceId, snapshotId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceSnapshot");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1GetInstanceSnapshot");
      }
      var pathParams = {
        'instanceId': instanceId,
        'snapshotId': snapshotId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _Snapshot["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/snapshots/{snapshotId}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instance Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Snapshot}
     */
  }, {
    key: "v1GetInstanceSnapshot",
    value: function v1GetInstanceSnapshot(instanceId, snapshotId) {
      return this.v1GetInstanceSnapshotWithHttpInfo(instanceId, snapshotId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instance Snapshots
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Snapshot>} and HTTP response
     */
  }, {
    key: "v1GetInstanceSnapshotsWithHttpInfo",
    value: function v1GetInstanceSnapshotsWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceSnapshots");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Snapshot["default"]];
      return this.apiClient.callApi('/v1/instances/{instanceId}/snapshots', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instance Snapshots
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Snapshot>}
     */
  }, {
    key: "v1GetInstanceSnapshots",
    value: function v1GetInstanceSnapshots(instanceId) {
      return this.v1GetInstanceSnapshotsWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get state of Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/InstanceState} and HTTP response
     */
  }, {
    key: "v1GetInstanceStateWithHttpInfo",
    value: function v1GetInstanceStateWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetInstanceState");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _InstanceState["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/state', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get state of Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/InstanceState}
     */
  }, {
    key: "v1GetInstanceState",
    value: function v1GetInstanceState(instanceId) {
      return this.v1GetInstanceStateWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instances
     * @param {Object} opts Optional parameters
     * @param {String} opts.name Optionally filter by instance name
     * @param {Array.<String>} opts.returnAttr Attributes to include in instance return
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Instance>} and HTTP response
     */
  }, {
    key: "v1GetInstancesWithHttpInfo",
    value: function v1GetInstancesWithHttpInfo(opts) {
      opts = opts || {};
      var postBody = null;
      var pathParams = {};
      var queryParams = {
        'name': opts['name'],
        'returnAttr': this.apiClient.buildCollectionParam(opts['returnAttr'], 'csv')
      };
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Instance["default"]];
      return this.apiClient.callApi('/v1/instances', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instances
     * @param {Object} opts Optional parameters
     * @param {String} opts.name Optionally filter by instance name
     * @param {Array.<String>} opts.returnAttr Attributes to include in instance return
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Instance>}
     */
  }, {
    key: "v1GetInstances",
    value: function v1GetInstances(opts) {
      return this.v1GetInstancesWithHttpInfo(opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Software for Model
     * @param {String} model Model to list available software for
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Firmware>} and HTTP response
     */
  }, {
    key: "v1GetModelSoftwareWithHttpInfo",
    value: function v1GetModelSoftwareWithHttpInfo(model) {
      var postBody = null;
      // verify the required parameter 'model' is set
      if (model === undefined || model === null) {
        throw new Error("Missing the required parameter 'model' when calling v1GetModelSoftware");
      }
      var pathParams = {
        'model': model
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Firmware["default"]];
      return this.apiClient.callApi('/v1/models/{model}/software', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Software for Model
     * @param {String} model Model to list available software for
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Firmware>}
     */
  }, {
    key: "v1GetModelSoftware",
    value: function v1GetModelSoftware(model) {
      return this.v1GetModelSoftwareWithHttpInfo(model).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Supported Models
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Model>} and HTTP response
     */
  }, {
    key: "v1GetModelsWithHttpInfo",
    value: function v1GetModelsWithHttpInfo() {
      var postBody = null;
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Model["default"]];
      return this.apiClient.callApi('/v1/models', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Supported Models
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Model>}
     */
  }, {
    key: "v1GetModels",
    value: function v1GetModels() {
      return this.v1GetModelsWithHttpInfo().then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get a Project
     * @param {String} projectId Project ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Project} and HTTP response
     */
  }, {
    key: "v1GetProjectWithHttpInfo",
    value: function v1GetProjectWithHttpInfo(projectId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1GetProject");
      }
      var pathParams = {
        'projectId': projectId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _Project["default"];
      return this.apiClient.callApi('/v1/projects/{projectId}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get a Project
     * @param {String} projectId Project ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Project}
     */
  }, {
    key: "v1GetProject",
    value: function v1GetProject(projectId) {
      return this.v1GetProjectWithHttpInfo(projectId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instances in Project
     * @param {String} projectId Project ID - uuid
     * @param {Object} opts Optional parameters
     * @param {String} opts.name Filter by project name
     * @param {Array.<String>} opts.returnAttr Attributes to include in instance return
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Instance>} and HTTP response
     */
  }, {
    key: "v1GetProjectInstancesWithHttpInfo",
    value: function v1GetProjectInstancesWithHttpInfo(projectId, opts) {
      opts = opts || {};
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1GetProjectInstances");
      }
      var pathParams = {
        'projectId': projectId
      };
      var queryParams = {
        'name': opts['name'],
        'returnAttr': this.apiClient.buildCollectionParam(opts['returnAttr'], 'csv')
      };
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Instance["default"]];
      return this.apiClient.callApi('/v1/projects/{projectId}/instances', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instances in Project
     * @param {String} projectId Project ID - uuid
     * @param {Object} opts Optional parameters
     * @param {String} opts.name Filter by project name
     * @param {Array.<String>} opts.returnAttr Attributes to include in instance return
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Instance>}
     */
  }, {
    key: "v1GetProjectInstances",
    value: function v1GetProjectInstances(projectId, opts) {
      return this.v1GetProjectInstancesWithHttpInfo(projectId, opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Project Authorized Keys
     * @param {String} projectId Project ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/ProjectKey>} and HTTP response
     */
  }, {
    key: "v1GetProjectKeysWithHttpInfo",
    value: function v1GetProjectKeysWithHttpInfo(projectId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1GetProjectKeys");
      }
      var pathParams = {
        'projectId': projectId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_ProjectKey["default"]];
      return this.apiClient.callApi('/v1/projects/{projectId}/keys', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Project Authorized Keys
     * @param {String} projectId Project ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/ProjectKey>}
     */
  }, {
    key: "v1GetProjectKeys",
    value: function v1GetProjectKeys(projectId) {
      return this.v1GetProjectKeysWithHttpInfo(projectId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Project VPN Configuration
     * @param {String} projectId Project ID - uuid
     * @param {module:model/String} format VPN Config format
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link String} and HTTP response
     */
  }, {
    key: "v1GetProjectVpnConfigWithHttpInfo",
    value: function v1GetProjectVpnConfigWithHttpInfo(projectId, format) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1GetProjectVpnConfig");
      }
      // verify the required parameter 'format' is set
      if (format === undefined || format === null) {
        throw new Error("Missing the required parameter 'format' when calling v1GetProjectVpnConfig");
      }
      var pathParams = {
        'projectId': projectId,
        'format': format
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/x-openvpn-profile', 'application/json'];
      var returnType = 'String';
      return this.apiClient.callApi('/v1/projects/{projectId}/vpnconfig/{format}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Project VPN Configuration
     * @param {String} projectId Project ID - uuid
     * @param {module:model/String} format VPN Config format
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link String}
     */
  }, {
    key: "v1GetProjectVpnConfig",
    value: function v1GetProjectVpnConfig(projectId, format) {
      return this.v1GetProjectVpnConfigWithHttpInfo(projectId, format).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Projects
     * @param {Object} opts Optional parameters
     * @param {String} opts.name Filter by project name
     * @param {Boolean} opts.idsOnly Only include id of project in results
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Project>} and HTTP response
     */
  }, {
    key: "v1GetProjectsWithHttpInfo",
    value: function v1GetProjectsWithHttpInfo(opts) {
      opts = opts || {};
      var postBody = null;
      var pathParams = {};
      var queryParams = {
        'name': opts['name'],
        'ids_only': opts['idsOnly']
      };
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Project["default"]];
      return this.apiClient.callApi('/v1/projects', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Projects
     * @param {Object} opts Optional parameters
     * @param {String} opts.name Filter by project name
     * @param {Boolean} opts.idsOnly Only include id of project in results
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Project>}
     */
  }, {
    key: "v1GetProjects",
    value: function v1GetProjects(opts) {
      return this.v1GetProjectsWithHttpInfo(opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Snapshot
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Snapshot} and HTTP response
     */
  }, {
    key: "v1GetSnapshotWithHttpInfo",
    value: function v1GetSnapshotWithHttpInfo(snapshotId) {
      var postBody = null;
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1GetSnapshot");
      }
      var pathParams = {
        'snapshotId': snapshotId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _Snapshot["default"];
      return this.apiClient.callApi('/v1/snapshots/{snapshotId}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Snapshot
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Snapshot}
     */
  }, {
    key: "v1GetSnapshot",
    value: function v1GetSnapshot(snapshotId) {
      return this.v1GetSnapshotWithHttpInfo(snapshotId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Kernel extension ranges
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Kcrange>} and HTTP response
     */
  }, {
    key: "v1KcrangeWithHttpInfo",
    value: function v1KcrangeWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1Kcrange");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Kcrange["default"]];
      return this.apiClient.callApi('/v1/instances/{instanceId}/btrace-kcrange', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Kernel extension ranges
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Kcrange>}
     */
  }, {
    key: "v1Kcrange",
    value: function v1Kcrange(instanceId) {
      return this.v1KcrangeWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Running Threads (CoreTrace)
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/KernelTask>} and HTTP response
     */
  }, {
    key: "v1ListThreadsWithHttpInfo",
    value: function v1ListThreadsWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1ListThreads");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_KernelTask["default"]];
      return this.apiClient.callApi('/v1/instances/{instanceId}/strace/thread-list', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Running Threads (CoreTrace)
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/KernelTask>}
     */
  }, {
    key: "v1ListThreads",
    value: function v1ListThreads(instanceId) {
      return this.v1ListThreadsWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Start playing media
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/MediaPlayBody} mediaPlayBody Request Body
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1MediaPlayWithHttpInfo",
    value: function v1MediaPlayWithHttpInfo(instanceId, mediaPlayBody) {
      var postBody = mediaPlayBody;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1MediaPlay");
      }
      // verify the required parameter 'mediaPlayBody' is set
      if (mediaPlayBody === undefined || mediaPlayBody === null) {
        throw new Error("Missing the required parameter 'mediaPlayBody' when calling v1MediaPlay");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/media/play', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Start playing media
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/MediaPlayBody} mediaPlayBody Request Body
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1MediaPlay",
    value: function v1MediaPlay(instanceId, mediaPlayBody) {
      return this.v1MediaPlayWithHttpInfo(instanceId, mediaPlayBody).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Stop playing media
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1MediaStopWithHttpInfo",
    value: function v1MediaStopWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1MediaStop");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/media/stop', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Stop playing media
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1MediaStop",
    value: function v1MediaStop(instanceId) {
      return this.v1MediaStopWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Update Instance
     * @param {String} instanceId Instance ID
     * @param {module:model/PatchInstanceOptions} patchInstanceOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Instance} and HTTP response
     */
  }, {
    key: "v1PatchInstanceWithHttpInfo",
    value: function v1PatchInstanceWithHttpInfo(instanceId, patchInstanceOptions) {
      var postBody = patchInstanceOptions;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1PatchInstance");
      }
      // verify the required parameter 'patchInstanceOptions' is set
      if (patchInstanceOptions === undefined || patchInstanceOptions === null) {
        throw new Error("Missing the required parameter 'patchInstanceOptions' when calling v1PatchInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Instance["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}', 'PATCH', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Update Instance
     * @param {String} instanceId Instance ID
     * @param {module:model/PatchInstanceOptions} patchInstanceOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Instance}
     */
  }, {
    key: "v1PatchInstance",
    value: function v1PatchInstance(instanceId, patchInstanceOptions) {
      return this.v1PatchInstanceWithHttpInfo(instanceId, patchInstanceOptions).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Pause an Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1PauseInstanceWithHttpInfo",
    value: function v1PauseInstanceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1PauseInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/pause', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Pause an Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1PauseInstance",
    value: function v1PauseInstance(instanceId) {
      return this.v1PauseInstanceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Provide Instance Input
     * Sends a touch or button event to the VM.  - Buttons (or keys) to be held during the input are specified as an array of strings, each string must be either a single ascii character or one of the following keywords:   - VM Buttons: finger, homeButton, holdButton, volumeUp, volumeDown, ringerSwitch, backButton, overviewButton   - Keyboard Buttons: again, alt, alterase, apostrophe, back, backslash, backspace, bassboost, bookmarks, bsp, calc, camera, cancel, caps, capslock, chat, close, closecd, comma, compose, computer, config, connect, copy, ctrl, cut, cyclewindows, dashboard, del, delete, deletefile, dot, down, edit, eject, ejectclose, email, end, enter, equal, esc, escape, exit, f1, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f2, f20, f21, f22, f23, f24, f3, f4, f5, f6, f7, f8, f9, fastfwd, file, finance, find, forward, front, grave, hangeul, hanja, help, henkan, home, homepage, hp, hrgn, ins, insert, iso, k102, kp0, kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9, kpasterisk, kpcomma, kpdot, kpenter, kpequal, kpjpcomma, kpleftparen, kpminus, kpplus, kpplusminus, kprightparen, kpslash, ktkn, ktknhrgn, left, leftalt, leftbrace, leftctrl, leftmeta, leftshift, linefeed, macro, mail, menu, meta, minus, move, msdos, muhenkan, mute, new, next, numlock, open, pagedown, pageup, paste, pause, pausecd, pgdn, pgup, phone, play, playcd, playpause, power, previous, print, prog1, prog2, prog3, prog4, props, question, record, redo, refresh, return, rewind, right, rightalt, rightbrace, rightctrl, rightmeta, rightshift, ro, rotate, scale, screenlock, scrolldown, scrolllock, scrollup, search, semicolon, sendfile, setup, shift, shop, slash, sleep, sound, space, sport, stop, stopcd, suspend, sysrq, tab, undo, up, voldown, volup, wakeup, www, xfer, yen, zkhk
     * @param {String} instanceId Instance ID - uuid
     * @param {Array.<module:model/InstanceInput>} instanceInput The input to send to the VM
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Number} and HTTP response
     */
  }, {
    key: "v1PostInstanceInputWithHttpInfo",
    value: function v1PostInstanceInputWithHttpInfo(instanceId, instanceInput) {
      var postBody = instanceInput;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1PostInstanceInput");
      }
      // verify the required parameter 'instanceInput' is set
      if (instanceInput === undefined || instanceInput === null) {
        throw new Error("Missing the required parameter 'instanceInput' when calling v1PostInstanceInput");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = 'Number';
      return this.apiClient.callApi('/v1/instances/{instanceId}/input', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Provide Instance Input
     * Sends a touch or button event to the VM.  - Buttons (or keys) to be held during the input are specified as an array of strings, each string must be either a single ascii character or one of the following keywords:   - VM Buttons: finger, homeButton, holdButton, volumeUp, volumeDown, ringerSwitch, backButton, overviewButton   - Keyboard Buttons: again, alt, alterase, apostrophe, back, backslash, backspace, bassboost, bookmarks, bsp, calc, camera, cancel, caps, capslock, chat, close, closecd, comma, compose, computer, config, connect, copy, ctrl, cut, cyclewindows, dashboard, del, delete, deletefile, dot, down, edit, eject, ejectclose, email, end, enter, equal, esc, escape, exit, f1, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f2, f20, f21, f22, f23, f24, f3, f4, f5, f6, f7, f8, f9, fastfwd, file, finance, find, forward, front, grave, hangeul, hanja, help, henkan, home, homepage, hp, hrgn, ins, insert, iso, k102, kp0, kp1, kp2, kp3, kp4, kp5, kp6, kp7, kp8, kp9, kpasterisk, kpcomma, kpdot, kpenter, kpequal, kpjpcomma, kpleftparen, kpminus, kpplus, kpplusminus, kprightparen, kpslash, ktkn, ktknhrgn, left, leftalt, leftbrace, leftctrl, leftmeta, leftshift, linefeed, macro, mail, menu, meta, minus, move, msdos, muhenkan, mute, new, next, numlock, open, pagedown, pageup, paste, pause, pausecd, pgdn, pgup, phone, play, playcd, playpause, power, previous, print, prog1, prog2, prog3, prog4, props, question, record, redo, refresh, return, rewind, right, rightalt, rightbrace, rightctrl, rightmeta, rightshift, ro, rotate, scale, screenlock, scrolldown, scrolllock, scrollup, search, semicolon, sendfile, setup, shift, shop, slash, sleep, sound, space, sport, stop, stopcd, suspend, sysrq, tab, undo, up, voldown, volup, wakeup, www, xfer, yen, zkhk
     * @param {String} instanceId Instance ID - uuid
     * @param {Array.<module:model/InstanceInput>} instanceInput The input to send to the VM
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Number}
     */
  }, {
    key: "v1PostInstanceInput",
    value: function v1PostInstanceInput(instanceId, instanceInput) {
      return this.v1PostInstanceInputWithHttpInfo(instanceId, instanceInput).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * API Status
     * Check if  API is ready for queries
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1ReadyWithHttpInfo",
    value: function v1ReadyWithHttpInfo() {
      var postBody = null;
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/ready', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * API Status
     * Check if  API is ready for queries
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1Ready",
    value: function v1Ready() {
      return this.v1ReadyWithHttpInfo().then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Reboot an Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1RebootInstanceWithHttpInfo",
    value: function v1RebootInstanceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1RebootInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/reboot', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Reboot an Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1RebootInstance",
    value: function v1RebootInstance(instanceId) {
      return this.v1RebootInstanceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Delete Project Authorized Key
     * @param {String} projectId Project ID - uuid
     * @param {String} keyId Key ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1RemoveProjectKeyWithHttpInfo",
    value: function v1RemoveProjectKeyWithHttpInfo(projectId, keyId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1RemoveProjectKey");
      }
      // verify the required parameter 'keyId' is set
      if (keyId === undefined || keyId === null) {
        throw new Error("Missing the required parameter 'keyId' when calling v1RemoveProjectKey");
      }
      var pathParams = {
        'projectId': projectId,
        'keyId': keyId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/projects/{projectId}/keys/{keyId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Delete Project Authorized Key
     * @param {String} projectId Project ID - uuid
     * @param {String} keyId Key ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1RemoveProjectKey",
    value: function v1RemoveProjectKey(projectId, keyId) {
      return this.v1RemoveProjectKeyWithHttpInfo(projectId, keyId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Remove team role from project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} teamId Team ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1RemoveTeamRoleFromProjectWithHttpInfo",
    value: function v1RemoveTeamRoleFromProjectWithHttpInfo(projectId, teamId, roleId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1RemoveTeamRoleFromProject");
      }
      // verify the required parameter 'teamId' is set
      if (teamId === undefined || teamId === null) {
        throw new Error("Missing the required parameter 'teamId' when calling v1RemoveTeamRoleFromProject");
      }
      // verify the required parameter 'roleId' is set
      if (roleId === undefined || roleId === null) {
        throw new Error("Missing the required parameter 'roleId' when calling v1RemoveTeamRoleFromProject");
      }
      var pathParams = {
        'projectId': projectId,
        'teamId': teamId,
        'roleId': roleId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/roles/projects/{projectId}/teams/{teamId}/roles/{roleId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Remove team role from project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} teamId Team ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1RemoveTeamRoleFromProject",
    value: function v1RemoveTeamRoleFromProject(projectId, teamId, roleId) {
      return this.v1RemoveTeamRoleFromProjectWithHttpInfo(projectId, teamId, roleId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Remove user from team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @param {String} userId User ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1RemoveUserFromTeamWithHttpInfo",
    value: function v1RemoveUserFromTeamWithHttpInfo(teamId, userId) {
      var postBody = null;
      // verify the required parameter 'teamId' is set
      if (teamId === undefined || teamId === null) {
        throw new Error("Missing the required parameter 'teamId' when calling v1RemoveUserFromTeam");
      }
      // verify the required parameter 'userId' is set
      if (userId === undefined || userId === null) {
        throw new Error("Missing the required parameter 'userId' when calling v1RemoveUserFromTeam");
      }
      var pathParams = {
        'teamId': teamId,
        'userId': userId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/teams/{teamId}/users/{userId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Remove user from team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @param {String} userId User ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1RemoveUserFromTeam",
    value: function v1RemoveUserFromTeam(teamId, userId) {
      return this.v1RemoveUserFromTeamWithHttpInfo(teamId, userId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Remove user role from project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} userId User ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1RemoveUserRoleFromProjectWithHttpInfo",
    value: function v1RemoveUserRoleFromProjectWithHttpInfo(projectId, userId, roleId) {
      var postBody = null;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1RemoveUserRoleFromProject");
      }
      // verify the required parameter 'userId' is set
      if (userId === undefined || userId === null) {
        throw new Error("Missing the required parameter 'userId' when calling v1RemoveUserRoleFromProject");
      }
      // verify the required parameter 'roleId' is set
      if (roleId === undefined || roleId === null) {
        throw new Error("Missing the required parameter 'roleId' when calling v1RemoveUserRoleFromProject");
      }
      var pathParams = {
        'projectId': projectId,
        'userId': userId,
        'roleId': roleId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/roles/projects/{projectId}/users/{userId}/roles/{roleId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Remove user role from project
     * This endpoint is available for Enterprise accounts only
     * @param {String} projectId Project ID - uuid
     * @param {String} userId User ID - uuid
     * @param {String} roleId Role ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1RemoveUserRoleFromProject",
    value: function v1RemoveUserRoleFromProject(projectId, userId, roleId) {
      return this.v1RemoveUserRoleFromProjectWithHttpInfo(projectId, userId, roleId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Rename a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @param {module:model/SnapshotCreationOptions} snapshotCreationOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Snapshot} and HTTP response
     */
  }, {
    key: "v1RenameInstanceSnapshotWithHttpInfo",
    value: function v1RenameInstanceSnapshotWithHttpInfo(instanceId, snapshotId, snapshotCreationOptions) {
      var postBody = snapshotCreationOptions;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1RenameInstanceSnapshot");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1RenameInstanceSnapshot");
      }
      // verify the required parameter 'snapshotCreationOptions' is set
      if (snapshotCreationOptions === undefined || snapshotCreationOptions === null) {
        throw new Error("Missing the required parameter 'snapshotCreationOptions' when calling v1RenameInstanceSnapshot");
      }
      var pathParams = {
        'instanceId': instanceId,
        'snapshotId': snapshotId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Snapshot["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/snapshots/{snapshotId}', 'PATCH', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Rename a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @param {module:model/SnapshotCreationOptions} snapshotCreationOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Snapshot}
     */
  }, {
    key: "v1RenameInstanceSnapshot",
    value: function v1RenameInstanceSnapshot(instanceId, snapshotId, snapshotCreationOptions) {
      return this.v1RenameInstanceSnapshotWithHttpInfo(instanceId, snapshotId, snapshotCreationOptions).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Restore a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1RestoreInstanceSnapshotWithHttpInfo",
    value: function v1RestoreInstanceSnapshotWithHttpInfo(instanceId, snapshotId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1RestoreInstanceSnapshot");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1RestoreInstanceSnapshot");
      }
      var pathParams = {
        'instanceId': instanceId,
        'snapshotId': snapshotId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/snapshots/{snapshotId}/restore', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Restore a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1RestoreInstanceSnapshot",
    value: function v1RestoreInstanceSnapshot(instanceId, snapshotId) {
      return this.v1RestoreInstanceSnapshotWithHttpInfo(instanceId, snapshotId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get all roles
     * This endpoint is available for Enterprise accounts only
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Role>} and HTTP response
     */
  }, {
    key: "v1RolesWithHttpInfo",
    value: function v1RolesWithHttpInfo() {
      var postBody = null;
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Role["default"]];
      return this.apiClient.callApi('/v1/roles', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get all roles
     * This endpoint is available for Enterprise accounts only
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Role>}
     */
  }, {
    key: "v1Roles",
    value: function v1Roles() {
      return this.v1RolesWithHttpInfo().then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Set Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/GpiosState} gpiosState New GPIO state
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/GpiosState} and HTTP response
     */
  }, {
    key: "v1SetInstanceGpiosWithHttpInfo",
    value: function v1SetInstanceGpiosWithHttpInfo(instanceId, gpiosState) {
      var postBody = gpiosState;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1SetInstanceGpios");
      }
      // verify the required parameter 'gpiosState' is set
      if (gpiosState === undefined || gpiosState === null) {
        throw new Error("Missing the required parameter 'gpiosState' when calling v1SetInstanceGpios");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _GpiosState["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/gpios', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Set Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/GpiosState} gpiosState New GPIO state
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/GpiosState}
     */
  }, {
    key: "v1SetInstanceGpios",
    value: function v1SetInstanceGpios(instanceId, gpiosState) {
      return this.v1SetInstanceGpiosWithHttpInfo(instanceId, gpiosState).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Set Instance Peripherals
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/PeripheralsData} peripheralsData New peripherals state
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/PeripheralsData} and HTTP response
     */
  }, {
    key: "v1SetInstancePeripheralsWithHttpInfo",
    value: function v1SetInstancePeripheralsWithHttpInfo(instanceId, peripheralsData) {
      var postBody = peripheralsData;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1SetInstancePeripherals");
      }
      // verify the required parameter 'peripheralsData' is set
      if (peripheralsData === undefined || peripheralsData === null) {
        throw new Error("Missing the required parameter 'peripheralsData' when calling v1SetInstancePeripherals");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _PeripheralsData["default"];
      return this.apiClient.callApi('/v1/instances/{instanceId}/peripherals', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Set Instance Peripherals
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/PeripheralsData} peripheralsData New peripherals state
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/PeripheralsData}
     */
  }, {
    key: "v1SetInstancePeripherals",
    value: function v1SetInstancePeripherals(instanceId, peripheralsData) {
      return this.v1SetInstancePeripheralsWithHttpInfo(instanceId, peripheralsData).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Set state of Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/V1SetStateBody} v1SetStateBody Desired State
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1SetInstanceStateWithHttpInfo",
    value: function v1SetInstanceStateWithHttpInfo(instanceId, v1SetStateBody) {
      var postBody = v1SetStateBody;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1SetInstanceState");
      }
      // verify the required parameter 'v1SetStateBody' is set
      if (v1SetStateBody === undefined || v1SetStateBody === null) {
        throw new Error("Missing the required parameter 'v1SetStateBody' when calling v1SetInstanceState");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/state', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Set state of Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/V1SetStateBody} v1SetStateBody Desired State
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1SetInstanceState",
    value: function v1SetInstanceState(instanceId, v1SetStateBody) {
      return this.v1SetInstanceStateWithHttpInfo(instanceId, v1SetStateBody).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Rename a Snapshot
     * @param {String} snapshotId Snapshot ID - uuid
     * @param {module:model/SnapshotCreationOptions} snapshotCreationOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Snapshot} and HTTP response
     */
  }, {
    key: "v1SnapshotRenameWithHttpInfo",
    value: function v1SnapshotRenameWithHttpInfo(snapshotId, snapshotCreationOptions) {
      var postBody = snapshotCreationOptions;
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1SnapshotRename");
      }
      // verify the required parameter 'snapshotCreationOptions' is set
      if (snapshotCreationOptions === undefined || snapshotCreationOptions === null) {
        throw new Error("Missing the required parameter 'snapshotCreationOptions' when calling v1SnapshotRename");
      }
      var pathParams = {
        'snapshotId': snapshotId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Snapshot["default"];
      return this.apiClient.callApi('/v1/snapshots/{snapshotId}', 'PATCH', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Rename a Snapshot
     * @param {String} snapshotId Snapshot ID - uuid
     * @param {module:model/SnapshotCreationOptions} snapshotCreationOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Snapshot}
     */
  }, {
    key: "v1SnapshotRename",
    value: function v1SnapshotRename(snapshotId, snapshotCreationOptions) {
      return this.v1SnapshotRenameWithHttpInfo(snapshotId, snapshotCreationOptions).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Start CoreTrace on an instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StartCoreTraceWithHttpInfo",
    value: function v1StartCoreTraceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StartCoreTrace");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/strace/enable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Start CoreTrace on an instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StartCoreTrace",
    value: function v1StartCoreTrace(instanceId) {
      return this.v1StartCoreTraceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Start HyperTrace on an instance
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/BtraceEnableOptions} btraceEnableOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StartHyperTraceWithHttpInfo",
    value: function v1StartHyperTraceWithHttpInfo(instanceId, btraceEnableOptions) {
      var postBody = btraceEnableOptions;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StartHyperTrace");
      }
      // verify the required parameter 'btraceEnableOptions' is set
      if (btraceEnableOptions === undefined || btraceEnableOptions === null) {
        throw new Error("Missing the required parameter 'btraceEnableOptions' when calling v1StartHyperTrace");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/btrace/enable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Start HyperTrace on an instance
     * @param {String} instanceId Instance ID - uuid
     * @param {module:model/BtraceEnableOptions} btraceEnableOptions 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StartHyperTrace",
    value: function v1StartHyperTrace(instanceId, btraceEnableOptions) {
      return this.v1StartHyperTraceWithHttpInfo(instanceId, btraceEnableOptions).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Start an Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {Object} opts Optional parameters
     * @param {module:model/InstanceStartOptions} opts.instanceStartOptions Start options
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StartInstanceWithHttpInfo",
    value: function v1StartInstanceWithHttpInfo(instanceId, opts) {
      opts = opts || {};
      var postBody = opts['instanceStartOptions'];
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StartInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/start', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Start an Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {Object} opts Optional parameters
     * @param {module:model/InstanceStartOptions} opts.instanceStartOptions Start options
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StartInstance",
    value: function v1StartInstance(instanceId, opts) {
      return this.v1StartInstanceWithHttpInfo(instanceId, opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Start Network Monitor on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StartNetworkMonitorWithHttpInfo",
    value: function v1StartNetworkMonitorWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StartNetworkMonitor");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/sslsplit/enable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Start Network Monitor on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StartNetworkMonitor",
    value: function v1StartNetworkMonitor(instanceId) {
      return this.v1StartNetworkMonitorWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Stop CoreTrace on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StopCoreTraceWithHttpInfo",
    value: function v1StopCoreTraceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StopCoreTrace");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/strace/disable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Stop CoreTrace on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StopCoreTrace",
    value: function v1StopCoreTrace(instanceId) {
      return this.v1StopCoreTraceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Stop HyperTrace on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StopHyperTraceWithHttpInfo",
    value: function v1StopHyperTraceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StopHyperTrace");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/btrace/disable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Stop HyperTrace on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StopHyperTrace",
    value: function v1StopHyperTrace(instanceId) {
      return this.v1StopHyperTraceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Stop an Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {Object} opts Optional parameters
     * @param {module:model/InstanceStopOptions} opts.instanceStopOptions Stop options
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StopInstanceWithHttpInfo",
    value: function v1StopInstanceWithHttpInfo(instanceId, opts) {
      opts = opts || {};
      var postBody = opts['instanceStopOptions'];
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StopInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/stop', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Stop an Instance
     * @param {String} instanceId Instance ID - uuid
     * @param {Object} opts Optional parameters
     * @param {module:model/InstanceStopOptions} opts.instanceStopOptions Stop options
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StopInstance",
    value: function v1StopInstance(instanceId, opts) {
      return this.v1StopInstanceWithHttpInfo(instanceId, opts).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Stop Network Monitor on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1StopNetworkMonitorWithHttpInfo",
    value: function v1StopNetworkMonitorWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1StopNetworkMonitor");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/sslsplit/disable', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Stop Network Monitor on an instance.
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1StopNetworkMonitor",
    value: function v1StopNetworkMonitor(instanceId) {
      return this.v1StopNetworkMonitorWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Update team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @param {module:model/CreateTeam} createTeam 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1TeamChangeWithHttpInfo",
    value: function v1TeamChangeWithHttpInfo(teamId, createTeam) {
      var postBody = createTeam;
      // verify the required parameter 'teamId' is set
      if (teamId === undefined || teamId === null) {
        throw new Error("Missing the required parameter 'teamId' when calling v1TeamChange");
      }
      // verify the required parameter 'createTeam' is set
      if (createTeam === undefined || createTeam === null) {
        throw new Error("Missing the required parameter 'createTeam' when calling v1TeamChange");
      }
      var pathParams = {
        'teamId': teamId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/teams/{teamId}', 'PATCH', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Update team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @param {module:model/CreateTeam} createTeam 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1TeamChange",
    value: function v1TeamChange(teamId, createTeam) {
      return this.v1TeamChangeWithHttpInfo(teamId, createTeam).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create team
     * This endpoint is available for Enterprise accounts only
     * @param {module:model/CreateTeam} createTeam 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/TeamCreate} and HTTP response
     */
  }, {
    key: "v1TeamCreateWithHttpInfo",
    value: function v1TeamCreateWithHttpInfo(createTeam) {
      var postBody = createTeam;
      // verify the required parameter 'createTeam' is set
      if (createTeam === undefined || createTeam === null) {
        throw new Error("Missing the required parameter 'createTeam' when calling v1TeamCreate");
      }
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _TeamCreate["default"];
      return this.apiClient.callApi('/v1/teams', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create team
     * This endpoint is available for Enterprise accounts only
     * @param {module:model/CreateTeam} createTeam 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/TeamCreate}
     */
  }, {
    key: "v1TeamCreate",
    value: function v1TeamCreate(createTeam) {
      return this.v1TeamCreateWithHttpInfo(createTeam).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Delete team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1TeamDeleteWithHttpInfo",
    value: function v1TeamDeleteWithHttpInfo(teamId) {
      var postBody = null;
      // verify the required parameter 'teamId' is set
      if (teamId === undefined || teamId === null) {
        throw new Error("Missing the required parameter 'teamId' when calling v1TeamDelete");
      }
      var pathParams = {
        'teamId': teamId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/teams/{teamId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Delete team
     * This endpoint is available for Enterprise accounts only
     * @param {String} teamId Team ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1TeamDelete",
    value: function v1TeamDelete(teamId) {
      return this.v1TeamDeleteWithHttpInfo(teamId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get teams
     * This endpoint is available for Enterprise accounts only
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Team>} and HTTP response
     */
  }, {
    key: "v1TeamsWithHttpInfo",
    value: function v1TeamsWithHttpInfo() {
      var postBody = null;
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_Team["default"]];
      return this.apiClient.callApi('/v1/teams', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get teams
     * This endpoint is available for Enterprise accounts only
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/Team>}
     */
  }, {
    key: "v1Teams",
    value: function v1Teams() {
      return this.v1TeamsWithHttpInfo().then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Unpause an Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1UnpauseInstanceWithHttpInfo",
    value: function v1UnpauseInstanceWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1UnpauseInstance");
      }
      var pathParams = {
        'instanceId': instanceId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/instances/{instanceId}/unpause', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Unpause an Instance
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1UnpauseInstance",
    value: function v1UnpauseInstance(instanceId) {
      return this.v1UnpauseInstanceWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Update an existing hypervisor hook
     * @param {String} hookId Hook ID
     * @param {module:model/V1CreateHookParameters} v1CreateHookParameters application/json
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Hook} and HTTP response
     */
  }, {
    key: "v1UpdateHookWithHttpInfo",
    value: function v1UpdateHookWithHttpInfo(hookId, v1CreateHookParameters) {
      var postBody = v1CreateHookParameters;
      // verify the required parameter 'hookId' is set
      if (hookId === undefined || hookId === null) {
        throw new Error("Missing the required parameter 'hookId' when calling v1UpdateHook");
      }
      // verify the required parameter 'v1CreateHookParameters' is set
      if (v1CreateHookParameters === undefined || v1CreateHookParameters === null) {
        throw new Error("Missing the required parameter 'v1CreateHookParameters' when calling v1UpdateHook");
      }
      var pathParams = {
        'hookId': hookId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Hook["default"];
      return this.apiClient.callApi('/v1/hooks/{hookId}', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Update an existing hypervisor hook
     * @param {String} hookId Hook ID
     * @param {module:model/V1CreateHookParameters} v1CreateHookParameters application/json
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Hook}
     */
  }, {
    key: "v1UpdateHook",
    value: function v1UpdateHook(hookId, v1CreateHookParameters) {
      return this.v1UpdateHookWithHttpInfo(hookId, v1CreateHookParameters).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Update a Project
     * @param {String} projectId Project ID - uuid
     * @param {module:model/Project} project Updated Project Settings
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Project} and HTTP response
     */
  }, {
    key: "v1UpdateProjectWithHttpInfo",
    value: function v1UpdateProjectWithHttpInfo(projectId, project) {
      var postBody = project;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1UpdateProject");
      }
      // verify the required parameter 'project' is set
      if (project === undefined || project === null) {
        throw new Error("Missing the required parameter 'project' when calling v1UpdateProject");
      }
      var pathParams = {
        'projectId': projectId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _Project["default"];
      return this.apiClient.callApi('/v1/projects/{projectId}', 'PATCH', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Update a Project
     * @param {String} projectId Project ID - uuid
     * @param {module:model/Project} project Updated Project Settings
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Project}
     */
  }, {
    key: "v1UpdateProject",
    value: function v1UpdateProject(projectId, project) {
      return this.v1UpdateProjectWithHttpInfo(projectId, project).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Change Project Settings
     * @param {String} projectId Project ID - uuid
     * @param {module:model/ProjectSettings} projectSettings New settings
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1UpdateProjectSettingsWithHttpInfo",
    value: function v1UpdateProjectSettingsWithHttpInfo(projectId, projectSettings) {
      var postBody = projectSettings;
      // verify the required parameter 'projectId' is set
      if (projectId === undefined || projectId === null) {
        throw new Error("Missing the required parameter 'projectId' when calling v1UpdateProjectSettings");
      }
      // verify the required parameter 'projectSettings' is set
      if (projectSettings === undefined || projectSettings === null) {
        throw new Error("Missing the required parameter 'projectSettings' when calling v1UpdateProjectSettings");
      }
      var pathParams = {
        'projectId': projectId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/projects/{projectId}/settings', 'PATCH', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Change Project Settings
     * @param {String} projectId Project ID - uuid
     * @param {module:model/ProjectSettings} projectSettings New settings
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1UpdateProjectSettings",
    value: function v1UpdateProjectSettings(projectId, projectSettings) {
      return this.v1UpdateProjectSettingsWithHttpInfo(projectId, projectSettings).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Upload Image Data
     * If the active project has enough remaining quota, updates an Image with the contents of the request body.
     * @param {String} imageId Image ID - uuid
     * @param {String} body Uploaded Image
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Image} and HTTP response
     */
  }, {
    key: "v1UploadImageDataWithHttpInfo",
    value: function v1UploadImageDataWithHttpInfo(imageId, body) {
      var postBody = body;
      // verify the required parameter 'imageId' is set
      if (imageId === undefined || imageId === null) {
        throw new Error("Missing the required parameter 'imageId' when calling v1UploadImageData");
      }
      // verify the required parameter 'body' is set
      if (body === undefined || body === null) {
        throw new Error("Missing the required parameter 'body' when calling v1UploadImageData");
      }
      var pathParams = {
        'imageId': imageId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['binary'];
      var accepts = ['application/json'];
      var returnType = _Image["default"];
      return this.apiClient.callApi('/v1/images/{imageId}', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Upload Image Data
     * If the active project has enough remaining quota, updates an Image with the contents of the request body.
     * @param {String} imageId Image ID - uuid
     * @param {String} body Uploaded Image
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Image}
     */
  }, {
    key: "v1UploadImageData",
    value: function v1UploadImageData(imageId, body) {
      return this.v1UploadImageDataWithHttpInfo(imageId, body).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Retrieve the list of allowed domains for all Web Player sessions
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/WebPlayerSession} and HTTP response
     */
  }, {
    key: "v1WebPlayerAllowedDomainsWithHttpInfo",
    value: function v1WebPlayerAllowedDomainsWithHttpInfo() {
      var postBody = null;
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _WebPlayerSession["default"];
      return this.apiClient.callApi('/v1/webplayer/allowedDomains', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Retrieve the list of allowed domains for all Web Player sessions
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/WebPlayerSession}
     */
  }, {
    key: "v1WebPlayerAllowedDomains",
    value: function v1WebPlayerAllowedDomains() {
      return this.v1WebPlayerAllowedDomainsWithHttpInfo().then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Create a new Web Player Session
     * @param {module:model/WebPlayerCreateSessionRequest} webPlayerCreateSessionRequest Request Data
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/WebPlayerSession} and HTTP response
     */
  }, {
    key: "v1WebPlayerCreateSessionWithHttpInfo",
    value: function v1WebPlayerCreateSessionWithHttpInfo(webPlayerCreateSessionRequest) {
      var postBody = webPlayerCreateSessionRequest;
      // verify the required parameter 'webPlayerCreateSessionRequest' is set
      if (webPlayerCreateSessionRequest === undefined || webPlayerCreateSessionRequest === null) {
        throw new Error("Missing the required parameter 'webPlayerCreateSessionRequest' when calling v1WebPlayerCreateSession");
      }
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = ['application/json'];
      var accepts = ['application/json'];
      var returnType = _WebPlayerSession["default"];
      return this.apiClient.callApi('/v1/webplayer', 'POST', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Create a new Web Player Session
     * @param {module:model/WebPlayerCreateSessionRequest} webPlayerCreateSessionRequest Request Data
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/WebPlayerSession}
     */
  }, {
    key: "v1WebPlayerCreateSession",
    value: function v1WebPlayerCreateSession(webPlayerCreateSessionRequest) {
      return this.v1WebPlayerCreateSessionWithHttpInfo(webPlayerCreateSessionRequest).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Tear down a Web Player Session
     * @param {String} sessionId Web Player Session identifier
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1WebPlayerDestroySessionWithHttpInfo",
    value: function v1WebPlayerDestroySessionWithHttpInfo(sessionId) {
      var postBody = null;
      // verify the required parameter 'sessionId' is set
      if (sessionId === undefined || sessionId === null) {
        throw new Error("Missing the required parameter 'sessionId' when calling v1WebPlayerDestroySession");
      }
      var pathParams = {
        'sessionId': sessionId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = null;
      return this.apiClient.callApi('/v1/webplayer/{sessionId}', 'DELETE', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Tear down a Web Player Session
     * @param {String} sessionId Web Player Session identifier
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}
     */
  }, {
    key: "v1WebPlayerDestroySession",
    value: function v1WebPlayerDestroySession(sessionId) {
      return this.v1WebPlayerDestroySessionWithHttpInfo(sessionId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * List all Web Player sessions
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/WebPlayerSession>} and HTTP response
     */
  }, {
    key: "v1WebPlayerListSessionsWithHttpInfo",
    value: function v1WebPlayerListSessionsWithHttpInfo() {
      var postBody = null;
      var pathParams = {};
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [_WebPlayerSession["default"]];
      return this.apiClient.callApi('/v1/webplayer', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * List all Web Player sessions
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Array.<module:model/WebPlayerSession>}
     */
  }, {
    key: "v1WebPlayerListSessions",
    value: function v1WebPlayerListSessions() {
      return this.v1WebPlayerListSessionsWithHttpInfo().then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Retrieve Web Player Session Information
     * @param {String} sessionId Web Player Session identifier
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/WebPlayerSession} and HTTP response
     */
  }, {
    key: "v1WebPlayerSessionInfoWithHttpInfo",
    value: function v1WebPlayerSessionInfoWithHttpInfo(sessionId) {
      var postBody = null;
      // verify the required parameter 'sessionId' is set
      if (sessionId === undefined || sessionId === null) {
        throw new Error("Missing the required parameter 'sessionId' when calling v1WebPlayerSessionInfo");
      }
      var pathParams = {
        'sessionId': sessionId
      };
      var queryParams = {};
      var headerParams = {};
      var formParams = {};
      var authNames = ['BearerAuth'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = _WebPlayerSession["default"];
      return this.apiClient.callApi('/v1/webplayer/{sessionId}', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Retrieve Web Player Session Information
     * @param {String} sessionId Web Player Session identifier
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/WebPlayerSession}
     */
  }, {
    key: "v1WebPlayerSessionInfo",
    value: function v1WebPlayerSessionInfo(sessionId) {
      return this.v1WebPlayerSessionInfoWithHttpInfo(sessionId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }
  }]);
  return ArmApi;
}();
exports["default"] = ArmApi;