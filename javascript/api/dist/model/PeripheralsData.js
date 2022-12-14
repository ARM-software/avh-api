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
 * The PeripheralsData model module.
 * @module model/PeripheralsData
 * @version 1.0.2
 */
var PeripheralsData = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>PeripheralsData</code>.
   * 
   * @alias module:model/PeripheralsData
   */
  function PeripheralsData() {
    _classCallCheck(this, PeripheralsData);
    PeripheralsData.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(PeripheralsData, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>PeripheralsData</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PeripheralsData} obj Optional instance to populate.
     * @return {module:model/PeripheralsData} The populated <code>PeripheralsData</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new PeripheralsData();
        if (data.hasOwnProperty('acceleration')) {
          obj['acceleration'] = _ApiClient["default"].convertToType(data['acceleration'], ['Number']);
        }
        if (data.hasOwnProperty('gyroscope')) {
          obj['gyroscope'] = _ApiClient["default"].convertToType(data['gyroscope'], ['Number']);
        }
        if (data.hasOwnProperty('magnetic')) {
          obj['magnetic'] = _ApiClient["default"].convertToType(data['magnetic'], ['Number']);
        }
        if (data.hasOwnProperty('orientation')) {
          obj['orientation'] = _ApiClient["default"].convertToType(data['orientation'], ['Number']);
        }
        if (data.hasOwnProperty('temperature')) {
          obj['temperature'] = _ApiClient["default"].convertToType(data['temperature'], 'Number');
        }
        if (data.hasOwnProperty('proximity')) {
          obj['proximity'] = _ApiClient["default"].convertToType(data['proximity'], 'Number');
        }
        if (data.hasOwnProperty('light')) {
          obj['light'] = _ApiClient["default"].convertToType(data['light'], 'Number');
        }
        if (data.hasOwnProperty('pressure')) {
          obj['pressure'] = _ApiClient["default"].convertToType(data['pressure'], 'Number');
        }
        if (data.hasOwnProperty('humidity')) {
          obj['humidity'] = _ApiClient["default"].convertToType(data['humidity'], 'Number');
        }
      }
      return obj;
    }
  }]);
  return PeripheralsData;
}();
/**
 * 
 * @member {Array.<Number>} acceleration
 */
PeripheralsData.prototype['acceleration'] = undefined;

/**
 * 
 * @member {Array.<Number>} gyroscope
 */
PeripheralsData.prototype['gyroscope'] = undefined;

/**
 * 
 * @member {Array.<Number>} magnetic
 */
PeripheralsData.prototype['magnetic'] = undefined;

/**
 * 
 * @member {Array.<Number>} orientation
 */
PeripheralsData.prototype['orientation'] = undefined;

/**
 * 
 * @member {Number} temperature
 */
PeripheralsData.prototype['temperature'] = undefined;

/**
 * 
 * @member {Number} proximity
 */
PeripheralsData.prototype['proximity'] = undefined;

/**
 * 
 * @member {Number} light
 */
PeripheralsData.prototype['light'] = undefined;

/**
 * 
 * @member {Number} pressure
 */
PeripheralsData.prototype['pressure'] = undefined;

/**
 * 
 * @member {Number} humidity
 */
PeripheralsData.prototype['humidity'] = undefined;
var _default = PeripheralsData;
exports["default"] = _default;