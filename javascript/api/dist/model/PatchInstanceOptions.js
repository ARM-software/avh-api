"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _InstanceBootOptions = _interopRequireDefault(require("./InstanceBootOptions"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The PatchInstanceOptions model module.
 * @module model/PatchInstanceOptions
 * @version 1.0.2
 */
var PatchInstanceOptions = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>PatchInstanceOptions</code>.
   * 
   * @alias module:model/PatchInstanceOptions
   */
  function PatchInstanceOptions() {
    _classCallCheck(this, PatchInstanceOptions);
    PatchInstanceOptions.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(PatchInstanceOptions, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>PatchInstanceOptions</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PatchInstanceOptions} obj Optional instance to populate.
     * @return {module:model/PatchInstanceOptions} The populated <code>PatchInstanceOptions</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new PatchInstanceOptions();
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('state')) {
          obj['state'] = _ApiClient["default"].convertToType(data['state'], 'String');
        }
        if (data.hasOwnProperty('bootOptions')) {
          obj['bootOptions'] = _InstanceBootOptions["default"].constructFromObject(data['bootOptions']);
        }
        if (data.hasOwnProperty('proxy')) {
          obj['proxy'] = _ApiClient["default"].convertToType(data['proxy'], 'String');
        }
      }
      return obj;
    }
  }]);
  return PatchInstanceOptions;
}();
/**
 * the name of the device
 * @member {String} name
 */
PatchInstanceOptions.prototype['name'] = undefined;

/**
 * the desired state of the device
 * @member {module:model/PatchInstanceOptions.StateEnum} state
 */
PatchInstanceOptions.prototype['state'] = undefined;

/**
 * @member {module:model/InstanceBootOptions} bootOptions
 */
PatchInstanceOptions.prototype['bootOptions'] = undefined;

/**
 * 
 * @member {String} proxy
 */
PatchInstanceOptions.prototype['proxy'] = undefined;

/**
 * Allowed values for the <code>state</code> property.
 * @enum {String}
 * @readonly
 */
PatchInstanceOptions['StateEnum'] = {
  /**
   * value: "on"
   * @const
   */
  "on": "on",
  /**
   * value: "off"
   * @const
   */
  "off": "off",
  /**
   * value: "paused"
   * @const
   */
  "paused": "paused",
  /**
   * value: "deleting"
   * @const
   */
  "deleting": "deleting"
};
var _default = PatchInstanceOptions;
exports["default"] = _default;