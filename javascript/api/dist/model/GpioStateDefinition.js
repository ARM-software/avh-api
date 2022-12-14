"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _Bit = _interopRequireDefault(require("./Bit"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The GpioStateDefinition model module.
 * @module model/GpioStateDefinition
 * @version 1.0.2
 */
var GpioStateDefinition = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>GpioStateDefinition</code>.
   * 
   * @alias module:model/GpioStateDefinition
   * @param bitCount {Number} count of bits in members of this bank
   * @param banks {Array.<Array.<module:model/Bit>>} bits for each bank of this name as an array of arrays
   */
  function GpioStateDefinition(bitCount, banks) {
    _classCallCheck(this, GpioStateDefinition);
    GpioStateDefinition.initialize(this, bitCount, banks);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(GpioStateDefinition, null, [{
    key: "initialize",
    value: function initialize(obj, bitCount, banks) {
      obj['bitCount'] = bitCount;
      obj['banks'] = banks;
    }

    /**
     * Constructs a <code>GpioStateDefinition</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/GpioStateDefinition} obj Optional instance to populate.
     * @return {module:model/GpioStateDefinition} The populated <code>GpioStateDefinition</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new GpioStateDefinition();
        if (data.hasOwnProperty('bitCount')) {
          obj['bitCount'] = _ApiClient["default"].convertToType(data['bitCount'], 'Number');
        }
        if (data.hasOwnProperty('banks')) {
          obj['banks'] = _ApiClient["default"].convertToType(data['banks'], [[_Bit["default"]]]);
        }
      }
      return obj;
    }
  }]);
  return GpioStateDefinition;
}();
/**
 * count of bits in members of this bank
 * @member {Number} bitCount
 */
GpioStateDefinition.prototype['bitCount'] = undefined;

/**
 * bits for each bank of this name as an array of arrays
 * @member {Array.<Array.<module:model/Bit>>} banks
 */
GpioStateDefinition.prototype['banks'] = undefined;
var _default = GpioStateDefinition;
exports["default"] = _default;