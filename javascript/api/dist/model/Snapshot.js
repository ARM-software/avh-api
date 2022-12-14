"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _SnapshotStatus = _interopRequireDefault(require("./SnapshotStatus"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The Snapshot model module.
 * @module model/Snapshot
 * @version 1.0.2
 */
var Snapshot = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>Snapshot</code>.
   * 
   * @alias module:model/Snapshot
   */
  function Snapshot() {
    _classCallCheck(this, Snapshot);
    Snapshot.initialize(this);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(Snapshot, null, [{
    key: "initialize",
    value: function initialize(obj) {}

    /**
     * Constructs a <code>Snapshot</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Snapshot} obj Optional instance to populate.
     * @return {module:model/Snapshot} The populated <code>Snapshot</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new Snapshot();
        if (data.hasOwnProperty('id')) {
          obj['id'] = _ApiClient["default"].convertToType(data['id'], 'String');
        }
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('instance')) {
          obj['instance'] = _ApiClient["default"].convertToType(data['instance'], 'String');
        }
        if (data.hasOwnProperty('status')) {
          obj['status'] = _SnapshotStatus["default"].constructFromObject(data['status']);
        }
        if (data.hasOwnProperty('date')) {
          obj['date'] = _ApiClient["default"].convertToType(data['date'], 'Number');
        }
        if (data.hasOwnProperty('fresh')) {
          obj['fresh'] = _ApiClient["default"].convertToType(data['fresh'], 'Boolean');
        }
        if (data.hasOwnProperty('live')) {
          obj['live'] = _ApiClient["default"].convertToType(data['live'], 'Boolean');
        }
        if (data.hasOwnProperty('local')) {
          obj['local'] = _ApiClient["default"].convertToType(data['local'], 'Boolean');
        }
      }
      return obj;
    }
  }]);
  return Snapshot;
}();
/**
 * Snapshot ID
 * @member {String} id
 */
Snapshot.prototype['id'] = undefined;

/**
 * Snapshot name
 * @member {String} name
 */
Snapshot.prototype['name'] = undefined;

/**
 * Instance that this snapshot is of
 * @member {String} instance
 */
Snapshot.prototype['instance'] = undefined;

/**
 * @member {module:model/SnapshotStatus} status
 */
Snapshot.prototype['status'] = undefined;

/**
 * UNIX Date that the snapshot was created
 * @member {Number} date
 */
Snapshot.prototype['date'] = undefined;

/**
 * 
 * @member {Boolean} fresh
 */
Snapshot.prototype['fresh'] = undefined;

/**
 * Live snapshot (included state and memory)
 * @member {Boolean} live
 */
Snapshot.prototype['live'] = undefined;

/**
 * 
 * @member {Boolean} local
 */
Snapshot.prototype['local'] = undefined;
var _default = Snapshot;
exports["default"] = _default;