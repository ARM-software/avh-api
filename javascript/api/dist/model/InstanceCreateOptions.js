"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _InstanceBootOptions = _interopRequireDefault(require("./InstanceBootOptions"));
var _Model = _interopRequireDefault(require("./Model"));
var _VolumeOptions = _interopRequireDefault(require("./VolumeOptions"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The InstanceCreateOptions model module.
 * @module model/InstanceCreateOptions
 * @version 1.0.2
 */
var InstanceCreateOptions = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>InstanceCreateOptions</code>.
   * 
   * @alias module:model/InstanceCreateOptions
   * @param flavor {String} the flavor id
   * @param project {String} project UUID
   * @param os {String} OS Version
   */
  function InstanceCreateOptions(flavor, project, os) {
    _classCallCheck(this, InstanceCreateOptions);
    InstanceCreateOptions.initialize(this, flavor, project, os);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(InstanceCreateOptions, null, [{
    key: "initialize",
    value: function initialize(obj, flavor, project, os) {
      obj['flavor'] = flavor;
      obj['project'] = project;
      obj['os'] = os;
    }

    /**
     * Constructs a <code>InstanceCreateOptions</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InstanceCreateOptions} obj Optional instance to populate.
     * @return {module:model/InstanceCreateOptions} The populated <code>InstanceCreateOptions</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new InstanceCreateOptions();
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('key')) {
          obj['key'] = _ApiClient["default"].convertToType(data['key'], 'String');
        }
        if (data.hasOwnProperty('flavor')) {
          obj['flavor'] = _ApiClient["default"].convertToType(data['flavor'], 'String');
        }
        if (data.hasOwnProperty('project')) {
          obj['project'] = _ApiClient["default"].convertToType(data['project'], 'String');
        }
        if (data.hasOwnProperty('os')) {
          obj['os'] = _ApiClient["default"].convertToType(data['os'], 'String');
        }
        if (data.hasOwnProperty('osbuild')) {
          obj['osbuild'] = _ApiClient["default"].convertToType(data['osbuild'], 'String');
        }
        if (data.hasOwnProperty('patches')) {
          obj['patches'] = _ApiClient["default"].convertToType(data['patches'], ['String']);
        }
        if (data.hasOwnProperty('fwpackage')) {
          obj['fwpackage'] = _ApiClient["default"].convertToType(data['fwpackage'], 'String');
        }
        if (data.hasOwnProperty('origFwPackageUrl')) {
          obj['origFwPackageUrl'] = _ApiClient["default"].convertToType(data['origFwPackageUrl'], 'String');
        }
        if (data.hasOwnProperty('encrypt')) {
          obj['encrypt'] = _ApiClient["default"].convertToType(data['encrypt'], 'Boolean');
        }
        if (data.hasOwnProperty('overrideWifiMAC')) {
          obj['overrideWifiMAC'] = _ApiClient["default"].convertToType(data['overrideWifiMAC'], 'String');
        }
        if (data.hasOwnProperty('volume')) {
          obj['volume'] = _VolumeOptions["default"].constructFromObject(data['volume']);
        }
        if (data.hasOwnProperty('snapshot')) {
          obj['snapshot'] = _ApiClient["default"].convertToType(data['snapshot'], 'String');
        }
        if (data.hasOwnProperty('bootOptions')) {
          obj['bootOptions'] = _InstanceBootOptions["default"].constructFromObject(data['bootOptions']);
        }
        if (data.hasOwnProperty('device')) {
          obj['device'] = _Model["default"].constructFromObject(data['device']);
        }
      }
      return obj;
    }
  }]);
  return InstanceCreateOptions;
}();
/**
 * the name of the device
 * @member {String} name
 */
InstanceCreateOptions.prototype['name'] = undefined;

/**
 * Key used to encrypt the Instance
 * @member {String} key
 */
InstanceCreateOptions.prototype['key'] = undefined;

/**
 * the flavor id
 * @member {String} flavor
 */
InstanceCreateOptions.prototype['flavor'] = undefined;

/**
 * project UUID
 * @member {String} project
 */
InstanceCreateOptions.prototype['project'] = undefined;

/**
 * OS Version
 * @member {String} os
 */
InstanceCreateOptions.prototype['os'] = undefined;

/**
 * OS Build
 * @member {String} osbuild
 */
InstanceCreateOptions.prototype['osbuild'] = undefined;

/**
 * list of patches to apply
 * @member {Array.<String>} patches
 */
InstanceCreateOptions.prototype['patches'] = undefined;

/**
 * URL or image id
 * @member {String} fwpackage
 */
InstanceCreateOptions.prototype['fwpackage'] = undefined;

/**
 * URL that firmware package used to create this instance is available at
 * @member {String} origFwPackageUrl
 */
InstanceCreateOptions.prototype['origFwPackageUrl'] = undefined;

/**
 * 
 * @member {Boolean} encrypt
 */
InstanceCreateOptions.prototype['encrypt'] = undefined;

/**
 * 
 * @member {String} overrideWifiMAC
 */
InstanceCreateOptions.prototype['overrideWifiMAC'] = undefined;

/**
 * @member {module:model/VolumeOptions} volume
 */
InstanceCreateOptions.prototype['volume'] = undefined;

/**
 * Snapshot ID
 * @member {String} snapshot
 */
InstanceCreateOptions.prototype['snapshot'] = undefined;

/**
 * @member {module:model/InstanceBootOptions} bootOptions
 */
InstanceCreateOptions.prototype['bootOptions'] = undefined;

/**
 * @member {module:model/Model} device
 */
InstanceCreateOptions.prototype['device'] = undefined;
var _default = InstanceCreateOptions;
exports["default"] = _default;