"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _InstanceBootOptionsAdditionalTag = _interopRequireDefault(require("./InstanceBootOptionsAdditionalTag"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The InstanceBootOptions model module.
 * @module model/InstanceBootOptions
 * @version 1.0.2
 */
var InstanceBootOptions = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>InstanceBootOptions</code>.
   * 
   * @alias module:model/InstanceBootOptions
   */
  function InstanceBootOptions() {
    _classCallCheck(this, InstanceBootOptions);
    InstanceBootOptions.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(InstanceBootOptions, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>InstanceBootOptions</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InstanceBootOptions} obj Optional instance to populate.
     * @return {module:model/InstanceBootOptions} The populated <code>InstanceBootOptions</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new InstanceBootOptions();
        if (data.hasOwnProperty('bootArgs')) {
          obj['bootArgs'] = _ApiClient["default"].convertToType(data['bootArgs'], 'String');
        }
        if (data.hasOwnProperty('restoreBootArgs')) {
          obj['restoreBootArgs'] = _ApiClient["default"].convertToType(data['restoreBootArgs'], 'String');
        }
        if (data.hasOwnProperty('udid')) {
          obj['udid'] = _ApiClient["default"].convertToType(data['udid'], 'String');
        }
        if (data.hasOwnProperty('ecid')) {
          obj['ecid'] = _ApiClient["default"].convertToType(data['ecid'], 'String');
        }
        if (data.hasOwnProperty('randomSeed')) {
          obj['randomSeed'] = _ApiClient["default"].convertToType(data['randomSeed'], 'String');
        }
        if (data.hasOwnProperty('pac')) {
          obj['pac'] = _ApiClient["default"].convertToType(data['pac'], 'Boolean');
        }
        if (data.hasOwnProperty('aprr')) {
          obj['aprr'] = _ApiClient["default"].convertToType(data['aprr'], 'Boolean');
        }
        if (data.hasOwnProperty('additionalTags')) {
          obj['additionalTags'] = _ApiClient["default"].convertToType(data['additionalTags'], [_InstanceBootOptionsAdditionalTag["default"]]);
        }
      }
      return obj;
    }
  }]);
  return InstanceBootOptions;
}();
/**
 * 
 * @member {String} bootArgs
 */
InstanceBootOptions.prototype['bootArgs'] = undefined;

/**
 * 
 * @member {String} restoreBootArgs
 */
InstanceBootOptions.prototype['restoreBootArgs'] = undefined;

/**
 * Boot udid
 * @member {String} udid
 */
InstanceBootOptions.prototype['udid'] = undefined;

/**
 * Assigned ECID
 * @member {String} ecid
 */
InstanceBootOptions.prototype['ecid'] = undefined;

/**
 * Random seed to provide to boot if any
 * @member {String} randomSeed
 */
InstanceBootOptions.prototype['randomSeed'] = undefined;

/**
 * Enable PAC
 * @member {Boolean} pac
 */
InstanceBootOptions.prototype['pac'] = undefined;

/**
 * Enable APRR
 * @member {Boolean} aprr
 */
InstanceBootOptions.prototype['aprr'] = undefined;

/**
 * 
 * @member {Array.<module:model/InstanceBootOptionsAdditionalTag>} additionalTags
 */
InstanceBootOptions.prototype['additionalTags'] = undefined;
var _default = InstanceBootOptions;
exports["default"] = _default;