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
 * The Firmware model module.
 * @module model/Firmware
 * @version 1.0.2
 */
var Firmware = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Firmware</code>.
   * 
   * @alias module:model/Firmware
   */
  function Firmware() {
    _classCallCheck(this, Firmware);
    Firmware.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Firmware, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>Firmware</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Firmware} obj Optional instance to populate.
     * @return {module:model/Firmware} The populated <code>Firmware</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Firmware();
        if (data.hasOwnProperty('version')) {
          obj['version'] = _ApiClient["default"].convertToType(data['version'], 'String');
        }
        if (data.hasOwnProperty('buildid')) {
          obj['buildid'] = _ApiClient["default"].convertToType(data['buildid'], 'String');
        }
        if (data.hasOwnProperty('AndroidFlavor')) {
          obj['AndroidFlavor'] = _ApiClient["default"].convertToType(data['AndroidFlavor'], 'String');
        }
        if (data.hasOwnProperty('APIVersion')) {
          obj['APIVersion'] = _ApiClient["default"].convertToType(data['APIVersion'], 'String');
        }
        if (data.hasOwnProperty('sha256sum')) {
          obj['sha256sum'] = _ApiClient["default"].convertToType(data['sha256sum'], 'String');
        }
        if (data.hasOwnProperty('sha1sum')) {
          obj['sha1sum'] = _ApiClient["default"].convertToType(data['sha1sum'], 'String');
        }
        if (data.hasOwnProperty('md5sum')) {
          obj['md5sum'] = _ApiClient["default"].convertToType(data['md5sum'], 'String');
        }
        if (data.hasOwnProperty('size')) {
          obj['size'] = _ApiClient["default"].convertToType(data['size'], 'Number');
        }
        if (data.hasOwnProperty('uniqueId')) {
          obj['uniqueId'] = _ApiClient["default"].convertToType(data['uniqueId'], 'String');
        }
        if (data.hasOwnProperty('metadata')) {
          obj['metadata'] = _ApiClient["default"].convertToType(data['metadata'], Object);
        }
        if (data.hasOwnProperty('releasedate')) {
          obj['releasedate'] = _ApiClient["default"].convertToType(data['releasedate'], 'Date');
        }
        if (data.hasOwnProperty('uploaddate')) {
          obj['uploaddate'] = _ApiClient["default"].convertToType(data['uploaddate'], 'Date');
        }
        if (data.hasOwnProperty('url')) {
          obj['url'] = _ApiClient["default"].convertToType(data['url'], 'String');
        }
        if (data.hasOwnProperty('orig_url')) {
          obj['orig_url'] = _ApiClient["default"].convertToType(data['orig_url'], 'String');
        }
        if (data.hasOwnProperty('filename')) {
          obj['filename'] = _ApiClient["default"].convertToType(data['filename'], 'String');
        }
      }
      return obj;
    }
  }]);
  return Firmware;
}();
/**
 * 
 * @member {String} version
 */
Firmware.prototype['version'] = undefined;

/**
 * 
 * @member {String} buildid
 */
Firmware.prototype['buildid'] = undefined;

/**
 * Android only flavor
 * @member {String} AndroidFlavor
 */
Firmware.prototype['AndroidFlavor'] = undefined;

/**
 * Android only API version
 * @member {String} APIVersion
 */
Firmware.prototype['APIVersion'] = undefined;

/**
 * 
 * @member {String} sha256sum
 */
Firmware.prototype['sha256sum'] = undefined;

/**
 * 
 * @member {String} sha1sum
 */
Firmware.prototype['sha1sum'] = undefined;

/**
 * 
 * @member {String} md5sum
 */
Firmware.prototype['md5sum'] = undefined;

/**
 * 
 * @member {Number} size
 */
Firmware.prototype['size'] = undefined;

/**
 * 
 * @member {String} uniqueId
 */
Firmware.prototype['uniqueId'] = undefined;

/**
 * Firmware metadata
 * @member {Object} metadata
 */
Firmware.prototype['metadata'] = undefined;

/**
 * Release Date
 * @member {Date} releasedate
 */
Firmware.prototype['releasedate'] = undefined;

/**
 * Date uploaded
 * @member {Date} uploaddate
 */
Firmware.prototype['uploaddate'] = undefined;

/**
 * URL firmware is available at
 * @member {String} url
 */
Firmware.prototype['url'] = undefined;

/**
 * URL firmware is available at from vendor
 * @member {String} orig_url
 */
Firmware.prototype['orig_url'] = undefined;

/**
 * 
 * @member {String} filename
 */
Firmware.prototype['filename'] = undefined;
var _default = Firmware;
exports["default"] = _default;