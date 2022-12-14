"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _CreatedBy = _interopRequireDefault(require("./CreatedBy"));
var _InstanceBootOptions = _interopRequireDefault(require("./InstanceBootOptions"));
var _InstanceNetmonState = _interopRequireDefault(require("./InstanceNetmonState"));
var _InstanceServices = _interopRequireDefault(require("./InstanceServices"));
var _InstanceState = _interopRequireDefault(require("./InstanceState"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The Instance model module.
 * @module model/Instance
 * @version 1.0.2
 */
var Instance = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Instance</code>.
   * 
   * @alias module:model/Instance
   */
  function Instance() {
    _classCallCheck(this, Instance);
    Instance.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Instance, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>Instance</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Instance} obj Optional instance to populate.
     * @return {module:model/Instance} The populated <code>Instance</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Instance();
        if (data.hasOwnProperty('id')) {
          obj['id'] = _ApiClient["default"].convertToType(data['id'], 'String');
        }
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('key')) {
          obj['key'] = _ApiClient["default"].convertToType(data['key'], 'String');
        }
        if (data.hasOwnProperty('flavor')) {
          obj['flavor'] = _ApiClient["default"].convertToType(data['flavor'], 'String');
        }
        if (data.hasOwnProperty('type')) {
          obj['type'] = _ApiClient["default"].convertToType(data['type'], 'String');
        }
        if (data.hasOwnProperty('project')) {
          obj['project'] = _ApiClient["default"].convertToType(data['project'], 'String');
        }
        if (data.hasOwnProperty('state')) {
          obj['state'] = _InstanceState["default"].constructFromObject(data['state']);
        }
        if (data.hasOwnProperty('stateChanged')) {
          obj['stateChanged'] = _ApiClient["default"].convertToType(data['stateChanged'], 'Date');
        }
        if (data.hasOwnProperty('startedAt')) {
          obj['startedAt'] = _ApiClient["default"].convertToType(data['startedAt'], 'String');
        }
        if (data.hasOwnProperty('userTask')) {
          obj['userTask'] = _ApiClient["default"].convertToType(data['userTask'], 'String');
        }
        if (data.hasOwnProperty('taskState')) {
          obj['taskState'] = _ApiClient["default"].convertToType(data['taskState'], 'String');
        }
        if (data.hasOwnProperty('error')) {
          obj['error'] = _ApiClient["default"].convertToType(data['error'], 'String');
        }
        if (data.hasOwnProperty('bootOptions')) {
          obj['bootOptions'] = _InstanceBootOptions["default"].constructFromObject(data['bootOptions']);
        }
        if (data.hasOwnProperty('serviceIp')) {
          obj['serviceIp'] = _ApiClient["default"].convertToType(data['serviceIp'], 'String');
        }
        if (data.hasOwnProperty('wifiIp')) {
          obj['wifiIp'] = _ApiClient["default"].convertToType(data['wifiIp'], 'String');
        }
        if (data.hasOwnProperty('secondaryIp')) {
          obj['secondaryIp'] = _ApiClient["default"].convertToType(data['secondaryIp'], 'String');
        }
        if (data.hasOwnProperty('services')) {
          obj['services'] = _InstanceServices["default"].constructFromObject(data['services']);
        }
        if (data.hasOwnProperty('panicked')) {
          obj['panicked'] = _ApiClient["default"].convertToType(data['panicked'], 'Boolean');
        }
        if (data.hasOwnProperty('created')) {
          obj['created'] = _ApiClient["default"].convertToType(data['created'], 'Date');
        }
        if (data.hasOwnProperty('model')) {
          obj['model'] = _ApiClient["default"].convertToType(data['model'], 'String');
        }
        if (data.hasOwnProperty('fwpackage')) {
          obj['fwpackage'] = _ApiClient["default"].convertToType(data['fwpackage'], 'String');
        }
        if (data.hasOwnProperty('os')) {
          obj['os'] = _ApiClient["default"].convertToType(data['os'], 'String');
        }
        if (data.hasOwnProperty('agent')) {
          obj['agent'] = _ApiClient["default"].convertToType(data['agent'], 'String');
        }
        if (data.hasOwnProperty('netmon')) {
          obj['netmon'] = _InstanceNetmonState["default"].constructFromObject(data['netmon']);
        }
        if (data.hasOwnProperty('exposePort')) {
          obj['exposePort'] = _ApiClient["default"].convertToType(data['exposePort'], 'String');
        }
        if (data.hasOwnProperty('fault')) {
          obj['fault'] = _ApiClient["default"].convertToType(data['fault'], 'Boolean');
        }
        if (data.hasOwnProperty('patches')) {
          obj['patches'] = _ApiClient["default"].convertToType(data['patches'], ['String']);
        }
        if (data.hasOwnProperty('createdBy')) {
          obj['createdBy'] = _CreatedBy["default"].constructFromObject(data['createdBy']);
        }
      }
      return obj;
    }
  }]);
  return Instance;
}();
/**
 * Instance Identifier
 * @member {String} id
 */
Instance.prototype['id'] = undefined;

/**
 * Instance Name
 * @member {String} name
 */
Instance.prototype['name'] = undefined;

/**
 * Key used to encrypt the Instance
 * @member {String} key
 */
Instance.prototype['key'] = undefined;

/**
 * The type of virtual machine this is
 * @member {String} flavor
 */
Instance.prototype['flavor'] = undefined;

/**
 * 
 * @member {String} type
 */
Instance.prototype['type'] = undefined;

/**
 * The projectId of the project this instance belongs to
 * @member {String} project
 */
Instance.prototype['project'] = undefined;

/**
 * @member {module:model/InstanceState} state
 */
Instance.prototype['state'] = undefined;

/**
 * Time the state of the instance last changed
 * @member {Date} stateChanged
 */
Instance.prototype['stateChanged'] = undefined;

/**
 * Time the instance was started
 * @member {String} startedAt
 */
Instance.prototype['startedAt'] = undefined;

/**
 * Currently executing User Task
 * @member {String} userTask
 */
Instance.prototype['userTask'] = undefined;

/**
 * Current task state if any
 * @member {String} taskState
 */
Instance.prototype['taskState'] = undefined;

/**
 * Current error state if any
 * @member {String} error
 */
Instance.prototype['error'] = undefined;

/**
 * @member {module:model/InstanceBootOptions} bootOptions
 */
Instance.prototype['bootOptions'] = undefined;

/**
 * Services IP Address
 * @member {String} serviceIp
 */
Instance.prototype['serviceIp'] = undefined;

/**
 * LAN IP Address
 * @member {String} wifiIp
 */
Instance.prototype['wifiIp'] = undefined;

/**
 * Secondary Inteface LAN IP Address (if supported)
 * @member {String} secondaryIp
 */
Instance.prototype['secondaryIp'] = undefined;

/**
 * @member {module:model/InstanceServices} services
 */
Instance.prototype['services'] = undefined;

/**
 * 
 * @member {Boolean} panicked
 */
Instance.prototype['panicked'] = undefined;

/**
 * Time instance was created
 * @member {Date} created
 */
Instance.prototype['created'] = undefined;

/**
 * Model of virtual machine device
 * @member {String} model
 */
Instance.prototype['model'] = undefined;

/**
 * URL that package used to create this instance is available at
 * @member {String} fwpackage
 */
Instance.prototype['fwpackage'] = undefined;

/**
 * 
 * @member {String} os
 */
Instance.prototype['os'] = undefined;

/**
 * 
 * @member {String} agent
 */
Instance.prototype['agent'] = undefined;

/**
 * @member {module:model/InstanceNetmonState} netmon
 */
Instance.prototype['netmon'] = undefined;

/**
 * 
 * @member {String} exposePort
 */
Instance.prototype['exposePort'] = undefined;

/**
 * 
 * @member {Boolean} fault
 */
Instance.prototype['fault'] = undefined;

/**
 * 
 * @member {Array.<String>} patches
 */
Instance.prototype['patches'] = undefined;

/**
 * @member {module:model/CreatedBy} createdBy
 */
Instance.prototype['createdBy'] = undefined;
var _default = Instance;
exports["default"] = _default;