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
 * The Hook model module.
 * @module model/Hook
 * @version 1.0.2
 */
var Hook = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Hook</code>.
   * 
   * @alias module:model/Hook
   */
  function Hook() {
    _classCallCheck(this, Hook);
    Hook.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Hook, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>Hook</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Hook} obj Optional instance to populate.
     * @return {module:model/Hook} The populated <code>Hook</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Hook();
        if (data.hasOwnProperty('identifier')) {
          obj['identifier'] = _ApiClient["default"].convertToType(data['identifier'], 'String');
        }
        if (data.hasOwnProperty('label')) {
          obj['label'] = _ApiClient["default"].convertToType(data['label'], 'String');
        }
        if (data.hasOwnProperty('address')) {
          obj['address'] = _ApiClient["default"].convertToType(data['address'], 'String');
        }
        if (data.hasOwnProperty('patch')) {
          obj['patch'] = _ApiClient["default"].convertToType(data['patch'], 'String');
        }
        if (data.hasOwnProperty('patchType')) {
          obj['patchType'] = _ApiClient["default"].convertToType(data['patchType'], 'String');
        }
        if (data.hasOwnProperty('enabled')) {
          obj['enabled'] = _ApiClient["default"].convertToType(data['enabled'], 'Boolean');
        }
        if (data.hasOwnProperty('createdAt')) {
          obj['createdAt'] = _ApiClient["default"].convertToType(data['createdAt'], 'String');
        }
        if (data.hasOwnProperty('updatedAt')) {
          obj['updatedAt'] = _ApiClient["default"].convertToType(data['updatedAt'], 'String');
        }
        if (data.hasOwnProperty('instanceId')) {
          obj['instanceId'] = _ApiClient["default"].convertToType(data['instanceId'], 'String');
        }
      }
      return obj;
    }
  }]);
  return Hook;
}();
/**
 * Identifier
 * @member {String} identifier
 */
Hook.prototype['identifier'] = undefined;

/**
 * Label
 * @member {String} label
 */
Hook.prototype['label'] = undefined;

/**
 * Address
 * @member {String} address
 */
Hook.prototype['address'] = undefined;

/**
 * Patch
 * @member {String} patch
 */
Hook.prototype['patch'] = undefined;

/**
 * Patch Type
 * @member {module:model/Hook.PatchTypeEnum} patchType
 */
Hook.prototype['patchType'] = undefined;

/**
 * If true, instances can call required hooks
 * @member {Boolean} enabled
 */
Hook.prototype['enabled'] = undefined;

/**
 * Created Date in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
 * @member {String} createdAt
 */
Hook.prototype['createdAt'] = undefined;

/**
 * Updated Date in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
 * @member {String} updatedAt
 */
Hook.prototype['updatedAt'] = undefined;

/**
 * Instance Id
 * @member {String} instanceId
 */
Hook.prototype['instanceId'] = undefined;

/**
 * Allowed values for the <code>patchType</code> property.
 * @enum {String}
 * @readonly
 */
Hook['PatchTypeEnum'] = {
  /**
   * value: "csmfcc"
   * @const
   */
  "csmfcc": "csmfcc",
  /**
   * value: "csmfvm"
   * @const
   */
  "csmfvm": "csmfvm"
};
var _default = Hook;
exports["default"] = _default;