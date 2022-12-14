"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The Features model module.
 * @module model/Features
 * @version 1.0.2
 */
var Features = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Features</code>.
   * 
   * @alias module:model/Features
   */
  function Features() {
    _classCallCheck(this, Features);
    Features.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Features, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>Features</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Features} obj Optional instance to populate.
     * @return {module:model/Features} The populated <code>Features</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Features();
        if (data.hasOwnProperty('apps')) {
          obj['apps'] = _ApiClient["default"].convertToType(data['apps'], 'Boolean');
        }
        if (data.hasOwnProperty('connect')) {
          obj['connect'] = _ApiClient["default"].convertToType(data['connect'], 'Boolean');
        }
        if (data.hasOwnProperty('console')) {
          obj['console'] = _ApiClient["default"].convertToType(data['console'], 'Boolean');
        }
        if (data.hasOwnProperty('coretrace')) {
          obj['coretrace'] = _ApiClient["default"].convertToType(data['coretrace'], 'Boolean');
        }
        if (data.hasOwnProperty('deviceControl')) {
          obj['deviceControl'] = _ApiClient["default"].convertToType(data['deviceControl'], 'Boolean');
        }
        if (data.hasOwnProperty('deviceDelete')) {
          obj['deviceDelete'] = _ApiClient["default"].convertToType(data['deviceDelete'], 'Boolean');
        }
        if (data.hasOwnProperty('files')) {
          obj['files'] = _ApiClient["default"].convertToType(data['files'], 'Boolean');
        }
        if (data.hasOwnProperty('frida')) {
          obj['frida'] = _ApiClient["default"].convertToType(data['frida'], 'Boolean');
        }
        if (data.hasOwnProperty('images')) {
          obj['images'] = _ApiClient["default"].convertToType(data['images'], 'Boolean');
        }
        if (data.hasOwnProperty('messaging')) {
          obj['messaging'] = _ApiClient["default"].convertToType(data['messaging'], 'Boolean');
        }
        if (data.hasOwnProperty('netmon')) {
          obj['netmon'] = _ApiClient["default"].convertToType(data['netmon'], 'Boolean');
        }
        if (data.hasOwnProperty('network')) {
          obj['network'] = _ApiClient["default"].convertToType(data['network'], 'Boolean');
        }
        if (data.hasOwnProperty('portForwarding')) {
          obj['portForwarding'] = _ApiClient["default"].convertToType(data['portForwarding'], 'Boolean');
        }
        if (data.hasOwnProperty('powerManagement')) {
          obj['powerManagement'] = _ApiClient["default"].convertToType(data['powerManagement'], 'Boolean');
        }
        if (data.hasOwnProperty('profile')) {
          obj['profile'] = _ApiClient["default"].convertToType(data['profile'], 'Boolean');
        }
        if (data.hasOwnProperty('sensors')) {
          obj['sensors'] = _ApiClient["default"].convertToType(data['sensors'], 'Boolean');
        }
        if (data.hasOwnProperty('settings')) {
          obj['settings'] = _ApiClient["default"].convertToType(data['settings'], 'Boolean');
        }
        if (data.hasOwnProperty('snapshots')) {
          obj['snapshots'] = _ApiClient["default"].convertToType(data['snapshots'], 'Boolean');
        }
        if (data.hasOwnProperty('strace')) {
          obj['strace'] = _ApiClient["default"].convertToType(data['strace'], 'Boolean');
        }
        if (data.hasOwnProperty('system')) {
          obj['system'] = _ApiClient["default"].convertToType(data['system'], 'Boolean');
        }
      }
      return obj;
    }
  }]);
  return Features;
}();
/**
 * 
 * @member {Boolean} apps
 */
Features.prototype['apps'] = undefined;

/**
 * 
 * @member {Boolean} connect
 */
Features.prototype['connect'] = undefined;

/**
 * 
 * @member {Boolean} console
 */
Features.prototype['console'] = undefined;

/**
 * 
 * @member {Boolean} coretrace
 */
Features.prototype['coretrace'] = undefined;

/**
 * 
 * @member {Boolean} deviceControl
 */
Features.prototype['deviceControl'] = undefined;

/**
 * 
 * @member {Boolean} deviceDelete
 */
Features.prototype['deviceDelete'] = undefined;

/**
 * 
 * @member {Boolean} files
 */
Features.prototype['files'] = undefined;

/**
 * 
 * @member {Boolean} frida
 */
Features.prototype['frida'] = undefined;

/**
 * 
 * @member {Boolean} images
 */
Features.prototype['images'] = undefined;

/**
 * 
 * @member {Boolean} messaging
 */
Features.prototype['messaging'] = undefined;

/**
 * 
 * @member {Boolean} netmon
 */
Features.prototype['netmon'] = undefined;

/**
 * 
 * @member {Boolean} network
 */
Features.prototype['network'] = undefined;

/**
 * 
 * @member {Boolean} portForwarding
 */
Features.prototype['portForwarding'] = undefined;

/**
 * 
 * @member {Boolean} powerManagement
 */
Features.prototype['powerManagement'] = undefined;

/**
 * 
 * @member {Boolean} profile
 */
Features.prototype['profile'] = undefined;

/**
 * 
 * @member {Boolean} sensors
 */
Features.prototype['sensors'] = undefined;

/**
 * 
 * @member {Boolean} settings
 */
Features.prototype['settings'] = undefined;

/**
 * 
 * @member {Boolean} snapshots
 */
Features.prototype['snapshots'] = undefined;

/**
 * 
 * @member {Boolean} strace
 */
Features.prototype['strace'] = undefined;

/**
 * 
 * @member {Boolean} system
 */
Features.prototype['system'] = undefined;
var _default = Features;
exports["default"] = _default;