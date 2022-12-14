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
 * The Model model module.
 * @module model/Model
 * @version 1.0.2
 */
var Model = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Model</code>.
   * 
   * @alias module:model/Model
   * @param type {String} 
   * @param name {String} 
   * @param flavor {String} 
   * @param model {String} 
   */
  function Model(type, name, flavor, model) {
    _classCallCheck(this, Model);
    Model.initialize(this, type, name, flavor, model);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Model, null, [{
    key: "initialize",
    value: function initialize(obj, type, name, flavor, model) {
      obj['type'] = type;
      obj['name'] = name;
      obj['flavor'] = flavor;
      obj['model'] = model;
    }

    /**
     * Constructs a <code>Model</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Model} obj Optional instance to populate.
     * @return {module:model/Model} The populated <code>Model</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Model();
        if (data.hasOwnProperty('type')) {
          obj['type'] = _ApiClient["default"].convertToType(data['type'], 'String');
        }
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('flavor')) {
          obj['flavor'] = _ApiClient["default"].convertToType(data['flavor'], 'String');
        }
        if (data.hasOwnProperty('description')) {
          obj['description'] = _ApiClient["default"].convertToType(data['description'], 'String');
        }
        if (data.hasOwnProperty('model')) {
          obj['model'] = _ApiClient["default"].convertToType(data['model'], 'String');
        }
        if (data.hasOwnProperty('boardConfig')) {
          obj['boardConfig'] = _ApiClient["default"].convertToType(data['boardConfig'], 'String');
        }
        if (data.hasOwnProperty('platform')) {
          obj['platform'] = _ApiClient["default"].convertToType(data['platform'], 'String');
        }
        if (data.hasOwnProperty('cpid')) {
          obj['cpid'] = _ApiClient["default"].convertToType(data['cpid'], 'Number');
        }
        if (data.hasOwnProperty('bdid')) {
          obj['bdid'] = _ApiClient["default"].convertToType(data['bdid'], 'Number');
        }
        if (data.hasOwnProperty('peripherals')) {
          obj['peripherals'] = _ApiClient["default"].convertToType(data['peripherals'], 'Boolean');
        }
      }
      return obj;
    }
  }]);
  return Model;
}();
/**
 * 
 * @member {String} type
 */
Model.prototype['type'] = undefined;

/**
 * 
 * @member {String} name
 */
Model.prototype['name'] = undefined;

/**
 * 
 * @member {String} flavor
 */
Model.prototype['flavor'] = undefined;

/**
 * 
 * @member {String} description
 */
Model.prototype['description'] = undefined;

/**
 * 
 * @member {String} model
 */
Model.prototype['model'] = undefined;

/**
 * 
 * @member {String} boardConfig
 */
Model.prototype['boardConfig'] = undefined;

/**
 * 
 * @member {String} platform
 */
Model.prototype['platform'] = undefined;

/**
 * 
 * @member {Number} cpid
 */
Model.prototype['cpid'] = undefined;

/**
 * 
 * @member {Number} bdid
 */
Model.prototype['bdid'] = undefined;

/**
 * 
 * @member {Boolean} peripherals
 */
Model.prototype['peripherals'] = undefined;
var _default = Model;
exports["default"] = _default;