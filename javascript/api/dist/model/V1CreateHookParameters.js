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
 * The V1CreateHookParameters model module.
 * @module model/V1CreateHookParameters
 * @version 1.0.2
 */
var V1CreateHookParameters = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>V1CreateHookParameters</code>.
   * 
   * @alias module:model/V1CreateHookParameters
   * @param label {String} Label
   * @param address {String} Address
   * @param patch {String} Patch
   * @param patchType {module:model/V1CreateHookParameters.PatchTypeEnum} Patch Type
   */
  function V1CreateHookParameters(label, address, patch, patchType) {
    _classCallCheck(this, V1CreateHookParameters);
    V1CreateHookParameters.initialize(this, label, address, patch, patchType);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(V1CreateHookParameters, null, [{
    key: "initialize",
    value: function initialize(obj, label, address, patch, patchType) {
      obj['label'] = label;
      obj['address'] = address;
      obj['patch'] = patch;
      obj['patchType'] = patchType;
    }

    /**
     * Constructs a <code>V1CreateHookParameters</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/V1CreateHookParameters} obj Optional instance to populate.
     * @return {module:model/V1CreateHookParameters} The populated <code>V1CreateHookParameters</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new V1CreateHookParameters();
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
      }
      return obj;
    }
  }]);
  return V1CreateHookParameters;
}();
/**
 * Label
 * @member {String} label
 */
V1CreateHookParameters.prototype['label'] = undefined;

/**
 * Address
 * @member {String} address
 */
V1CreateHookParameters.prototype['address'] = undefined;

/**
 * Patch
 * @member {String} patch
 */
V1CreateHookParameters.prototype['patch'] = undefined;

/**
 * Patch Type
 * @member {module:model/V1CreateHookParameters.PatchTypeEnum} patchType
 */
V1CreateHookParameters.prototype['patchType'] = undefined;

/**
 * Allowed values for the <code>patchType</code> property.
 * @enum {String}
 * @readonly
 */
V1CreateHookParameters['PatchTypeEnum'] = {
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
var _default = V1CreateHookParameters;
exports["default"] = _default;