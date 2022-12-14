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
 * The ProjectKey model module.
 * @module model/ProjectKey
 * @version 1.0.2
 */
var ProjectKey = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>ProjectKey</code>.
   * 
   * @alias module:model/ProjectKey
   * @param kind {module:model/ProjectKey.KindEnum} kind of key
   * @param key {String} The public key
   */
  function ProjectKey(kind, key) {
    _classCallCheck(this, ProjectKey);
    ProjectKey.initialize(this, kind, key);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(ProjectKey, null, [{
    key: "initialize",
    value: function initialize(obj, kind, key) {
      obj['kind'] = kind;
      obj['key'] = key;
    }

    /**
     * Constructs a <code>ProjectKey</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ProjectKey} obj Optional instance to populate.
     * @return {module:model/ProjectKey} The populated <code>ProjectKey</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new ProjectKey();
        if (data.hasOwnProperty('identifier')) {
          obj['identifier'] = _ApiClient["default"].convertToType(data['identifier'], 'String');
        }
        if (data.hasOwnProperty('kind')) {
          obj['kind'] = _ApiClient["default"].convertToType(data['kind'], 'String');
        }
        if (data.hasOwnProperty('project')) {
          obj['project'] = _ApiClient["default"].convertToType(data['project'], 'String');
        }
        if (data.hasOwnProperty('key')) {
          obj['key'] = _ApiClient["default"].convertToType(data['key'], 'String');
        }
        if (data.hasOwnProperty('fingerprint')) {
          obj['fingerprint'] = _ApiClient["default"].convertToType(data['fingerprint'], 'String');
        }
        if (data.hasOwnProperty('updatedAt')) {
          obj['updatedAt'] = _ApiClient["default"].convertToType(data['updatedAt'], 'Date');
        }
        if (data.hasOwnProperty('createdAt')) {
          obj['createdAt'] = _ApiClient["default"].convertToType(data['createdAt'], 'Date');
        }
      }
      return obj;
    }
  }]);
  return ProjectKey;
}();
/**
 * keyId
 * @member {String} identifier
 */
ProjectKey.prototype['identifier'] = undefined;

/**
 * kind of key
 * @member {module:model/ProjectKey.KindEnum} kind
 */
ProjectKey.prototype['kind'] = undefined;

/**
 * projectId
 * @member {String} project
 */
ProjectKey.prototype['project'] = undefined;

/**
 * The public key
 * @member {String} key
 */
ProjectKey.prototype['key'] = undefined;

/**
 * Key fingerprint
 * @member {String} fingerprint
 */
ProjectKey.prototype['fingerprint'] = undefined;

/**
 * Time of last update
 * @member {Date} updatedAt
 */
ProjectKey.prototype['updatedAt'] = undefined;

/**
 * Time of creation
 * @member {Date} createdAt
 */
ProjectKey.prototype['createdAt'] = undefined;

/**
 * Allowed values for the <code>kind</code> property.
 * @enum {String}
 * @readonly
 */
ProjectKey['KindEnum'] = {
  /**
   * value: "ssh"
   * @const
   */
  "ssh": "ssh",
  /**
   * value: "adb"
   * @const
   */
  "adb": "adb"
};
var _default = ProjectKey;
exports["default"] = _default;