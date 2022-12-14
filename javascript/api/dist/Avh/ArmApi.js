"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _ApiConflictError = _interopRequireDefault(require("../model/ApiConflictError"));
var _ApiError = _interopRequireDefault(require("../model/ApiError"));
var _ApiNotFoundError = _interopRequireDefault(require("../model/ApiNotFoundError"));
var _ApiToken = _interopRequireDefault(require("../model/ApiToken"));
var _Firmware = _interopRequireDefault(require("../model/Firmware"));
var _GpioStateDefinition = _interopRequireDefault(require("../model/GpioStateDefinition"));
var _Image = _interopRequireDefault(require("../model/Image"));
var _Instance = _interopRequireDefault(require("../model/Instance"));
var _InstanceConsoleEndpoint = _interopRequireDefault(require("../model/InstanceConsoleEndpoint"));
var _InstanceCreateOptions = _interopRequireDefault(require("../model/InstanceCreateOptions"));
var _InstanceReturn = _interopRequireDefault(require("../model/InstanceReturn"));
var _InstanceStartOptions = _interopRequireDefault(require("../model/InstanceStartOptions"));
var _InstanceState = _interopRequireDefault(require("../model/InstanceState"));
var _InstanceStopOptions = _interopRequireDefault(require("../model/InstanceStopOptions"));
var _Model = _interopRequireDefault(require("../model/Model"));
var _PeripheralsData = _interopRequireDefault(require("../model/PeripheralsData"));
var _Project = _interopRequireDefault(require("../model/Project"));
var _Snapshot = _interopRequireDefault(require("../model/Snapshot"));
var _SnapshotCreationOptions = _interopRequireDefault(require("../model/SnapshotCreationOptions"));
var _Token = _interopRequireDefault(require("../model/Token"));
var _UserError = _interopRequireDefault(require("../model/UserError"));
var _V1SetStateBody = _interopRequireDefault(require("../model/V1SetStateBody"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
* Arm service.
* @module Avh/ArmApi
* @version 1.0.1
*/
var ArmApi = /*#__PURE__*/function () {
  /**
  * Constructs a new ArmApi. 
  * @alias module:Avh/ArmApi
  * @class
  * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
  * default to {@link module:ApiClient#instance} if unspecified.
  */
  function ArmApi(apiClient) {
    _classCallCheck(this, ArmApi);
    this.apiClient = apiClient || _ApiClient["default"].instance;
  }

  /**
   * Log In
   * @param {module:model/ApiToken} apiToken Authorization Data
   * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Token} and HTTP response
   */
  _createClass(ArmApi, [{
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
     * Create a new Image
     * @param {String} type Image type
     * @param {module:model/String} encoding How the file is stored
     * @param {Object} opts Optional parameters
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
     * Get Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Object.<String, module:model/{String: GpioStateDefinition}>} and HTTP response
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
      var returnType = {
        'String': _GpioStateDefinition["default"]
      };
      return this.apiClient.callApi('/v1/instances/{instanceId}/gpios', 'GET', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Get Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Object.<String, module:model/{String: GpioStateDefinition}>}
     */
  }, {
    key: "v1GetInstanceGpios",
    value: function v1GetInstanceGpios(instanceId) {
      return this.v1GetInstanceGpiosWithHttpInfo(instanceId).then(function (response_and_data) {
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
     * @param {String} opts.name Optionally filter by project name
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
     * @param {String} opts.name Optionally filter by project name
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
     * Get Project
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
     * Get Project
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
     * Get Instance Snapshots
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Snapshot} and HTTP response
     */
  }, {
    key: "v1GetSnapshotWithHttpInfo",
    value: function v1GetSnapshotWithHttpInfo(instanceId, snapshotId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetSnapshot");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1GetSnapshot");
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
     * Get Instance Snapshots
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Snapshot}
     */
  }, {
    key: "v1GetSnapshot",
    value: function v1GetSnapshot(instanceId, snapshotId) {
      return this.v1GetSnapshotWithHttpInfo(instanceId, snapshotId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Get Instance Snapshots
     * @param {String} instanceId Instance ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Array.<module:model/Snapshot>} and HTTP response
     */
  }, {
    key: "v1GetSnapshotsWithHttpInfo",
    value: function v1GetSnapshotsWithHttpInfo(instanceId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1GetSnapshots");
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
    key: "v1GetSnapshots",
    value: function v1GetSnapshots(instanceId) {
      return this.v1GetSnapshotsWithHttpInfo(instanceId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Update Instance
     * @param {String} instanceId Instance ID
     * @param {Object.<String, Object>} body 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Instance} and HTTP response
     */
  }, {
    key: "v1PatchInstanceWithHttpInfo",
    value: function v1PatchInstanceWithHttpInfo(instanceId, body) {
      var postBody = body;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1PatchInstance");
      }
      // verify the required parameter 'body' is set
      if (body === undefined || body === null) {
        throw new Error("Missing the required parameter 'body' when calling v1PatchInstance");
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
     * @param {Object.<String, Object>} body 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Instance}
     */
  }, {
    key: "v1PatchInstance",
    value: function v1PatchInstance(instanceId, body) {
      return this.v1PatchInstanceWithHttpInfo(instanceId, body).then(function (response_and_data) {
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
     * Restore a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1RestoreSnapshotWithHttpInfo",
    value: function v1RestoreSnapshotWithHttpInfo(instanceId, snapshotId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1RestoreSnapshot");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1RestoreSnapshot");
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
    key: "v1RestoreSnapshot",
    value: function v1RestoreSnapshot(instanceId, snapshotId) {
      return this.v1RestoreSnapshotWithHttpInfo(instanceId, snapshotId).then(function (response_and_data) {
        return response_and_data.data;
      });
    }

    /**
     * Set Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @param {Object.<String, module:model/{String: GpioStateDefinition}>} requestBody New GPIO state
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link Object.<String, module:model/{String: GpioStateDefinition}>} and HTTP response
     */
  }, {
    key: "v1SetInstanceGpiosWithHttpInfo",
    value: function v1SetInstanceGpiosWithHttpInfo(instanceId, requestBody) {
      var postBody = requestBody;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1SetInstanceGpios");
      }
      // verify the required parameter 'requestBody' is set
      if (requestBody === undefined || requestBody === null) {
        throw new Error("Missing the required parameter 'requestBody' when calling v1SetInstanceGpios");
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
      var returnType = {
        'String': _GpioStateDefinition["default"]
      };
      return this.apiClient.callApi('/v1/instances/{instanceId}/gpios', 'PUT', pathParams, queryParams, headerParams, formParams, postBody, authNames, contentTypes, accepts, returnType, null);
    }

    /**
     * Set Instance GPIOs
     * @param {String} instanceId Instance ID - uuid
     * @param {Object.<String, module:model/{String: GpioStateDefinition}>} requestBody New GPIO state
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link Object.<String, module:model/{String: GpioStateDefinition}>}
     */
  }, {
    key: "v1SetInstanceGpios",
    value: function v1SetInstanceGpios(instanceId, requestBody) {
      return this.v1SetInstanceGpiosWithHttpInfo(instanceId, requestBody).then(function (response_and_data) {
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
     * Delete a Snapshot
     * @param {String} instanceId Instance ID - uuid
     * @param {String} snapshotId Snapshot ID - uuid
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing HTTP response
     */
  }, {
    key: "v1SnapshotDeleteWithHttpInfo",
    value: function v1SnapshotDeleteWithHttpInfo(instanceId, snapshotId) {
      var postBody = null;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1SnapshotDelete");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1SnapshotDelete");
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
    key: "v1SnapshotDelete",
    value: function v1SnapshotDelete(instanceId, snapshotId) {
      return this.v1SnapshotDeleteWithHttpInfo(instanceId, snapshotId).then(function (response_and_data) {
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
    key: "v1SnapshotRenameWithHttpInfo",
    value: function v1SnapshotRenameWithHttpInfo(instanceId, snapshotId, snapshotCreationOptions) {
      var postBody = snapshotCreationOptions;
      // verify the required parameter 'instanceId' is set
      if (instanceId === undefined || instanceId === null) {
        throw new Error("Missing the required parameter 'instanceId' when calling v1SnapshotRename");
      }
      // verify the required parameter 'snapshotId' is set
      if (snapshotId === undefined || snapshotId === null) {
        throw new Error("Missing the required parameter 'snapshotId' when calling v1SnapshotRename");
      }
      // verify the required parameter 'snapshotCreationOptions' is set
      if (snapshotCreationOptions === undefined || snapshotCreationOptions === null) {
        throw new Error("Missing the required parameter 'snapshotCreationOptions' when calling v1SnapshotRename");
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
    key: "v1SnapshotRename",
    value: function v1SnapshotRename(instanceId, snapshotId, snapshotCreationOptions) {
      return this.v1SnapshotRenameWithHttpInfo(instanceId, snapshotId, snapshotCreationOptions).then(function (response_and_data) {
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
  }]);
  return ArmApi;
}();
exports["default"] = ArmApi;