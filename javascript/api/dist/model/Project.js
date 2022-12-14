"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _ProjectQuota = _interopRequireDefault(require("./ProjectQuota"));
var _ProjectSettings = _interopRequireDefault(require("./ProjectSettings"));
var _ProjectUsage = _interopRequireDefault(require("./ProjectUsage"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The Project model module.
 * @module model/Project
 * @version 1.0.2
 */
var Project = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Project</code>.
   * 
   * @alias module:model/Project
   * @param id {String} Project Identifier
   */
  function Project(id) {
    _classCallCheck(this, Project);
    Project.initialize(this, id);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Project, null, [{
    key: "initialize",
    value: function initialize(obj, id) {
      obj['id'] = id;
    }

    /**
     * Constructs a <code>Project</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Project} obj Optional instance to populate.
     * @return {module:model/Project} The populated <code>Project</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Project();
        if (data.hasOwnProperty('id')) {
          obj['id'] = _ApiClient["default"].convertToType(data['id'], 'String');
        }
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('settings')) {
          obj['settings'] = _ProjectSettings["default"].constructFromObject(data['settings']);
        }
        if (data.hasOwnProperty('quotas')) {
          obj['quotas'] = _ProjectQuota["default"].constructFromObject(data['quotas']);
        }
        if (data.hasOwnProperty('quotasUsed')) {
          obj['quotasUsed'] = _ProjectUsage["default"].constructFromObject(data['quotasUsed']);
        }
      }
      return obj;
    }
  }]);
  return Project;
}();
/**
 * Project Identifier
 * @member {String} id
 */
Project.prototype['id'] = undefined;

/**
 * Project Name
 * @member {String} name
 */
Project.prototype['name'] = undefined;

/**
 * @member {module:model/ProjectSettings} settings
 */
Project.prototype['settings'] = undefined;

/**
 * @member {module:model/ProjectQuota} quotas
 */
Project.prototype['quotas'] = undefined;

/**
 * @member {module:model/ProjectUsage} quotasUsed
 */
Project.prototype['quotasUsed'] = undefined;
var _default = Project;
exports["default"] = _default;