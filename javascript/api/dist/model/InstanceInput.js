"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _TextInput = _interopRequireDefault(require("./TextInput"));
var _TouchCurveInput = _interopRequireDefault(require("./TouchCurveInput"));
var _TouchInput = _interopRequireDefault(require("./TouchInput"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The InstanceInput model module.
 * @module model/InstanceInput
 * @version 1.0.2
 */
var InstanceInput = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>InstanceInput</code>.
   * 
   * @alias module:model/InstanceInput
   * @implements module:model/TouchInput
   * @implements module:model/TouchCurveInput
   * @implements module:model/TextInput
   */
  function InstanceInput() {
    _classCallCheck(this, InstanceInput);
    _TouchInput["default"].initialize(this);
    _TouchCurveInput["default"].initialize(this);
    _TextInput["default"].initialize(this);
    InstanceInput.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(InstanceInput, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>InstanceInput</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InstanceInput} obj Optional instance to populate.
     * @return {module:model/InstanceInput} The populated <code>InstanceInput</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new InstanceInput();
        _TouchInput["default"].constructFromObject(data, obj);
        _TouchCurveInput["default"].constructFromObject(data, obj);
        _TextInput["default"].constructFromObject(data, obj);
        if (data.hasOwnProperty('position')) {
          obj['position'] = _ApiClient["default"].convertToType(data['position'], Object);
        }
        if (data.hasOwnProperty('start')) {
          obj['start'] = _ApiClient["default"].convertToType(data['start'], Object);
        }
        if (data.hasOwnProperty('end')) {
          obj['end'] = _ApiClient["default"].convertToType(data['end'], Object);
        }
        if (data.hasOwnProperty('text')) {
          obj['text'] = _ApiClient["default"].convertToType(data['text'], 'String');
        }
      }
      return obj;
    }
  }]);
  return InstanceInput;
}();
/**
 * Finger Positions
 * @member {Object} position
 */
InstanceInput.prototype['position'] = undefined;

/**
 * Finger Positions
 * @member {Object} start
 */
InstanceInput.prototype['start'] = undefined;

/**
 * Finger Positions
 * @member {Object} end
 */
InstanceInput.prototype['end'] = undefined;

/**
 * text to type
 * @member {String} text
 */
InstanceInput.prototype['text'] = undefined;

// Implement TouchInput interface:
/**
 * Finger Positions
 * @member {Object} position
 */
_TouchInput["default"].prototype['position'] = undefined;
// Implement TouchCurveInput interface:
/**
 * Finger Positions
 * @member {Object} start
 */
_TouchCurveInput["default"].prototype['start'] = undefined;
/**
 * Finger Positions
 * @member {Object} end
 */
_TouchCurveInput["default"].prototype['end'] = undefined;
// Implement TextInput interface:
/**
 * text to type
 * @member {String} text
 */
_TextInput["default"].prototype['text'] = undefined;
var _default = InstanceInput;
exports["default"] = _default;