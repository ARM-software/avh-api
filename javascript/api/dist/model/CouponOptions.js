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
 * The CouponOptions model module.
 * @module model/CouponOptions
 * @version 1.0.2
 */
var CouponOptions = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>CouponOptions</code>.
   * Coupon options
   * @alias module:model/CouponOptions
   * @param type {module:model/CouponOptions.TypeEnum} 
   * @param amount {Number} Amount
   * @param used {Boolean} Is Used. If true, this coupon has been used and cannot be used again
   */
  function CouponOptions(type, amount, used) {
    _classCallCheck(this, CouponOptions);
    CouponOptions.initialize(this, type, amount, used);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(CouponOptions, null, [{
    key: "initialize",
    value: function initialize(obj, type, amount, used) {
      obj['type'] = type;
      obj['amount'] = amount;
      obj['used'] = used;
    }

    /**
     * Constructs a <code>CouponOptions</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CouponOptions} obj Optional instance to populate.
     * @return {module:model/CouponOptions} The populated <code>CouponOptions</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new CouponOptions();
        if (data.hasOwnProperty('type')) {
          obj['type'] = _ApiClient["default"].convertToType(data['type'], 'String');
        }
        if (data.hasOwnProperty('amount')) {
          obj['amount'] = _ApiClient["default"].convertToType(data['amount'], 'Number');
        }
        if (data.hasOwnProperty('used')) {
          obj['used'] = _ApiClient["default"].convertToType(data['used'], 'Boolean');
        }
      }
      return obj;
    }
  }]);
  return CouponOptions;
}();
/**
 * 
 * @member {module:model/CouponOptions.TypeEnum} type
 */
CouponOptions.prototype['type'] = undefined;

/**
 * Amount
 * @member {Number} amount
 */
CouponOptions.prototype['amount'] = undefined;

/**
 * Is Used. If true, this coupon has been used and cannot be used again
 * @member {Boolean} used
 */
CouponOptions.prototype['used'] = undefined;

/**
 * Allowed values for the <code>type</code> property.
 * @enum {String}
 * @readonly
 */
CouponOptions['TypeEnum'] = {
  /**
   * value: "percent"
   * @const
   */
  "percent": "percent",
  /**
   * value: "discount"
   * @const
   */
  "discount": "discount",
  /**
   * value: "absolute"
   * @const
   */
  "absolute": "absolute"
};
var _default = CouponOptions;
exports["default"] = _default;