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
 * The ApiNotFoundError model module.
 * @module model/ApiNotFoundError
 * @version 1.0.2
 */
var ApiNotFoundError = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>ApiNotFoundError</code>.
   * 
   * @alias module:model/ApiNotFoundError
   * @param error {String} Error text
   * @param errorID {String} Error ID
   */
  function ApiNotFoundError(error, errorID) {
    _classCallCheck(this, ApiNotFoundError);
    ApiNotFoundError.initialize(this, error, errorID);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(ApiNotFoundError, null, [{
    key: "initialize",
    value: function initialize(obj, error, errorID) {
      obj['error'] = error;
      obj['errorID'] = errorID;
    }

    /**
     * Constructs a <code>ApiNotFoundError</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ApiNotFoundError} obj Optional instance to populate.
     * @return {module:model/ApiNotFoundError} The populated <code>ApiNotFoundError</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new ApiNotFoundError();
        if (data.hasOwnProperty('error')) {
          obj['error'] = _ApiClient["default"].convertToType(data['error'], 'String');
        }
        if (data.hasOwnProperty('errorID')) {
          obj['errorID'] = _ApiClient["default"].convertToType(data['errorID'], 'String');
        }
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('params')) {
          obj['params'] = _ApiClient["default"].convertToType(data['params'], Object);
        }
      }
      return obj;
    }
  }]);
  return ApiNotFoundError;
}();
/**
 * Error text
 * @member {String} error
 */
ApiNotFoundError.prototype['error'] = undefined;

/**
 * Error ID
 * @member {String} errorID
 */
ApiNotFoundError.prototype['errorID'] = undefined;

/**
 * Name of the object requested
 * @member {String} name
 */
ApiNotFoundError.prototype['name'] = undefined;

/**
 * params provided by user
 * @member {Object} params
 */
ApiNotFoundError.prototype['params'] = undefined;
var _default = ApiNotFoundError;
exports["default"] = _default;