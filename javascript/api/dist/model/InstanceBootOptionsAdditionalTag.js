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
function _defineProperty(obj, key, value) { key = _toPropertyKey(key); if (key in obj) { Object.defineProperty(obj, key, { value: value, enumerable: true, configurable: true, writable: true }); } else { obj[key] = value; } return obj; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
* Enum class InstanceBootOptionsAdditionalTag.
* @enum {}
* @readonly
*/
var InstanceBootOptionsAdditionalTag = /*#__PURE__*/function () {
  function InstanceBootOptionsAdditionalTag() {
    _classCallCheck(this, InstanceBootOptionsAdditionalTag);
    _defineProperty(this, "kalloc", "kalloc");
    _defineProperty(this, "gpu", "gpu");
    _defineProperty(this, "no-keyboard", "no-keyboard");
    _defineProperty(this, "nodevmode", "nodevmode");
    _defineProperty(this, "sep-cons-ext", "sep-cons-ext");
    _defineProperty(this, "iboot-jailbreak", "iboot-jailbreak");
    _defineProperty(this, "llb-jailbreak", "llb-jailbreak");
    _defineProperty(this, "rom-jailbreak", "rom-jailbreak");
  }
  _createClass(InstanceBootOptionsAdditionalTag, null, [{
    key: "constructFromObject",
    value:
    /**
    * Returns a <code>InstanceBootOptionsAdditionalTag</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/InstanceBootOptionsAdditionalTag} The enum <code>InstanceBootOptionsAdditionalTag</code> value.
    */
    function constructFromObject(object) {
      return object;
    }
  }]);
  return InstanceBootOptionsAdditionalTag;
}();
exports["default"] = InstanceBootOptionsAdditionalTag;