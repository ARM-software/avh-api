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
 * The Plan model module.
 * @module model/Plan
 * @version 1.0.2
 */
var Plan = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Plan</code>.
   * Plan options
   * @alias module:model/Plan
   * @param licenseType {module:model/Plan.LicenseTypeEnum} 
   * @param cores {Number} Number of CPU cores
   */
  function Plan(licenseType, cores) {
    _classCallCheck(this, Plan);
    Plan.initialize(this, licenseType, cores);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Plan, null, [{
    key: "initialize",
    value: function initialize(obj, licenseType, cores) {
      obj['licenseType'] = licenseType;
      obj['cores'] = cores;
    }

    /**
     * Constructs a <code>Plan</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Plan} obj Optional instance to populate.
     * @return {module:model/Plan} The populated <code>Plan</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Plan();
        if (data.hasOwnProperty('licenseType')) {
          obj['licenseType'] = _ApiClient["default"].convertToType(data['licenseType'], 'String');
        }
        if (data.hasOwnProperty('cores')) {
          obj['cores'] = _ApiClient["default"].convertToType(data['cores'], 'Number');
        }
      }
      return obj;
    }
  }]);
  return Plan;
}();
/**
 * 
 * @member {module:model/Plan.LicenseTypeEnum} licenseType
 */
Plan.prototype['licenseType'] = undefined;

/**
 * Number of CPU cores
 * @member {Number} cores
 */
Plan.prototype['cores'] = undefined;

/**
 * Allowed values for the <code>licenseType</code> property.
 * @enum {String}
 * @readonly
 */
Plan['LicenseTypeEnum'] = {
  /**
   * value: "premium"
   * @const
   */
  "premium": "premium",
  /**
   * value: "individual"
   * @const
   */
  "individual": "individual",
  /**
   * value: "standard"
   * @const
   */
  "standard": "standard",
  /**
   * value: "enterprise"
   * @const
   */
  "enterprise": "enterprise",
  /**
   * value: "individual-usage"
   * @const
   */
  "individual-usage": "individual-usage",
  /**
   * value: "enterprise-usage"
   * @const
   */
  "enterprise-usage": "enterprise-usage",
  /**
   * value: "unrestricted"
   * @const
   */
  "unrestricted": "unrestricted"
};
var _default = Plan;
exports["default"] = _default;