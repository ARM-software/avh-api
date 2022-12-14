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
 * The UserError model module.
 * @module model/UserError
 * @version 1.0.2
 */
var UserError = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>UserError</code>.
   * 
   * @alias module:model/UserError
   * @param error {String} Error text
   * @param errorID {module:model/UserError.ErrorIDEnum} Error ID
   */
  function UserError(error, errorID) {
    _classCallCheck(this, UserError);
    UserError.initialize(this, error, errorID);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(UserError, null, [{
    key: "initialize",
    value: function initialize(obj, error, errorID) {
      obj['error'] = error;
      obj['errorID'] = errorID;
    }

    /**
     * Constructs a <code>UserError</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/UserError} obj Optional instance to populate.
     * @return {module:model/UserError} The populated <code>UserError</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new UserError();
        if (data.hasOwnProperty('error')) {
          obj['error'] = _ApiClient["default"].convertToType(data['error'], 'String');
        }
        if (data.hasOwnProperty('errorID')) {
          obj['errorID'] = _ApiClient["default"].convertToType(data['errorID'], 'String');
        }
        if (data.hasOwnProperty('field')) {
          obj['field'] = _ApiClient["default"].convertToType(data['field'], 'String');
        }
      }
      return obj;
    }
  }]);
  return UserError;
}();
/**
 * Error text
 * @member {String} error
 */
UserError.prototype['error'] = undefined;

/**
 * Error ID
 * @member {module:model/UserError.ErrorIDEnum} errorID
 */
UserError.prototype['errorID'] = undefined;

/**
 * Field associated with error
 * @member {String} field
 */
UserError.prototype['field'] = undefined;

/**
 * Allowed values for the <code>errorID</code> property.
 * @enum {String}
 * @readonly
 */
UserError['ErrorIDEnum'] = {
  /**
   * value: "UserError"
   * @const
   */
  "UserError": "UserError"
};
var _default = UserError;
exports["default"] = _default;