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
 * The Image model module.
 * @module model/Image
 * @version 1.0.2
 */
var Image = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Image</code>.
   * 
   * @alias module:model/Image
   * @param status {String} 
   */
  function Image(status) {
    _classCallCheck(this, Image);
    Image.initialize(this, status);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Image, null, [{
    key: "initialize",
    value: function initialize(obj, status) {
      obj['status'] = status;
    }

    /**
     * Constructs a <code>Image</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Image} obj Optional instance to populate.
     * @return {module:model/Image} The populated <code>Image</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Image();
        if (data.hasOwnProperty('status')) {
          obj['status'] = _ApiClient["default"].convertToType(data['status'], 'String');
        }
        if (data.hasOwnProperty('id')) {
          obj['id'] = _ApiClient["default"].convertToType(data['id'], 'String');
        }
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('type')) {
          obj['type'] = _ApiClient["default"].convertToType(data['type'], 'String');
        }
        if (data.hasOwnProperty('filename')) {
          obj['filename'] = _ApiClient["default"].convertToType(data['filename'], 'String');
        }
        if (data.hasOwnProperty('uniqueid')) {
          obj['uniqueid'] = _ApiClient["default"].convertToType(data['uniqueid'], 'String');
        }
        if (data.hasOwnProperty('size')) {
          obj['size'] = _ApiClient["default"].convertToType(data['size'], 'Number');
        }
        if (data.hasOwnProperty('project')) {
          obj['project'] = _ApiClient["default"].convertToType(data['project'], 'String');
        }
        if (data.hasOwnProperty('created_at')) {
          obj['created_at'] = _ApiClient["default"].convertToType(data['created_at'], 'Date');
        }
        if (data.hasOwnProperty('updated_at')) {
          obj['updated_at'] = _ApiClient["default"].convertToType(data['updated_at'], 'Date');
        }
      }
      return obj;
    }
  }]);
  return Image;
}();
/**
 * 
 * @member {String} status
 */
Image.prototype['status'] = undefined;

/**
 * Image ID
 * @member {String} id
 */
Image.prototype['id'] = undefined;

/**
 * 
 * @member {String} name
 */
Image.prototype['name'] = undefined;

/**
 * Type of image
 * @member {module:model/Image.TypeEnum} type
 */
Image.prototype['type'] = undefined;

/**
 * 
 * @member {String} filename
 */
Image.prototype['filename'] = undefined;

/**
 * 
 * @member {String} uniqueid
 */
Image.prototype['uniqueid'] = undefined;

/**
 * 
 * @member {Number} size
 */
Image.prototype['size'] = undefined;

/**
 * project ID
 * @member {String} project
 */
Image.prototype['project'] = undefined;

/**
 * When Image was created
 * @member {Date} created_at
 */
Image.prototype['created_at'] = undefined;

/**
 * When Image was last updated
 * @member {Date} updated_at
 */
Image.prototype['updated_at'] = undefined;

/**
 * Allowed values for the <code>type</code> property.
 * @enum {String}
 * @readonly
 */
Image['TypeEnum'] = {
  /**
   * value: "fwbinary"
   * @const
   */
  "fwbinary": "fwbinary",
  /**
   * value: "kernel"
   * @const
   */
  "kernel": "kernel",
  /**
   * value: "devicetree"
   * @const
   */
  "devicetree": "devicetree",
  /**
   * value: "ramdisk"
   * @const
   */
  "ramdisk": "ramdisk",
  /**
   * value: "loaderfile"
   * @const
   */
  "loaderfile": "loaderfile",
  /**
   * value: "sepfw"
   * @const
   */
  "sepfw": "sepfw",
  /**
   * value: "seprom"
   * @const
   */
  "seprom": "seprom",
  /**
   * value: "bootrom"
   * @const
   */
  "bootrom": "bootrom",
  /**
   * value: "llb"
   * @const
   */
  "llb": "llb",
  /**
   * value: "iboot"
   * @const
   */
  "iboot": "iboot",
  /**
   * value: "ibootdata"
   * @const
   */
  "ibootdata": "ibootdata",
  /**
   * value: "fwpackage"
   * @const
   */
  "fwpackage": "fwpackage",
  /**
   * value: "partition"
   * @const
   */
  "partition": "partition"
};
var _default = Image;
exports["default"] = _default;