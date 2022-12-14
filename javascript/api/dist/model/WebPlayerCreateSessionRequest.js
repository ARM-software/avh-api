"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _Features = _interopRequireDefault(require("./Features"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The WebPlayerCreateSessionRequest model module.
 * @module model/WebPlayerCreateSessionRequest
 * @version 1.0.2
 */
var WebPlayerCreateSessionRequest = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>WebPlayerCreateSessionRequest</code>.
   * 
   * @alias module:model/WebPlayerCreateSessionRequest
   * @param projectId {String} Project Identifier
   * @param instanceId {String} VM Instance Identifier
   * @param expiresIn {Number} Number of seconds token remains valid
   * @param features {module:model/Features} 
   */
  function WebPlayerCreateSessionRequest(projectId, instanceId, expiresIn, features) {
    _classCallCheck(this, WebPlayerCreateSessionRequest);
    WebPlayerCreateSessionRequest.initialize(this, projectId, instanceId, expiresIn, features);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(WebPlayerCreateSessionRequest, null, [{
    key: "initialize",
    value: function initialize(obj, projectId, instanceId, expiresIn, features) {
      obj['projectId'] = projectId;
      obj['instanceId'] = instanceId;
      obj['expiresIn'] = expiresIn;
      obj['features'] = features;
    }

    /**
     * Constructs a <code>WebPlayerCreateSessionRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/WebPlayerCreateSessionRequest} obj Optional instance to populate.
     * @return {module:model/WebPlayerCreateSessionRequest} The populated <code>WebPlayerCreateSessionRequest</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new WebPlayerCreateSessionRequest();
        if (data.hasOwnProperty('projectId')) {
          obj['projectId'] = _ApiClient["default"].convertToType(data['projectId'], 'String');
        }
        if (data.hasOwnProperty('instanceId')) {
          obj['instanceId'] = _ApiClient["default"].convertToType(data['instanceId'], 'String');
        }
        if (data.hasOwnProperty('expiresIn')) {
          obj['expiresIn'] = _ApiClient["default"].convertToType(data['expiresIn'], 'Number');
        }
        if (data.hasOwnProperty('features')) {
          obj['features'] = _Features["default"].constructFromObject(data['features']);
        }
        if (data.hasOwnProperty('clientId')) {
          obj['clientId'] = _ApiClient["default"].convertToType(data['clientId'], 'String');
        }
      }
      return obj;
    }
  }]);
  return WebPlayerCreateSessionRequest;
}();
/**
 * Project Identifier
 * @member {String} projectId
 */
WebPlayerCreateSessionRequest.prototype['projectId'] = undefined;

/**
 * VM Instance Identifier
 * @member {String} instanceId
 */
WebPlayerCreateSessionRequest.prototype['instanceId'] = undefined;

/**
 * Number of seconds token remains valid
 * @member {Number} expiresIn
 */
WebPlayerCreateSessionRequest.prototype['expiresIn'] = undefined;

/**
 * @member {module:model/Features} features
 */
WebPlayerCreateSessionRequest.prototype['features'] = undefined;

/**
 * Optional string value supplied by client for tracking purposes
 * @member {String} clientId
 */
WebPlayerCreateSessionRequest.prototype['clientId'] = undefined;
var _default = WebPlayerCreateSessionRequest;
exports["default"] = _default;