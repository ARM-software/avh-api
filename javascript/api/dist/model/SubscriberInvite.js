"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _ApiClient = _interopRequireDefault(require("../ApiClient"));
var _CouponOptions = _interopRequireDefault(require("./CouponOptions"));
var _Plan = _interopRequireDefault(require("./Plan"));
var _Trial = _interopRequireDefault(require("./Trial"));
function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { "default": obj }; }
function _typeof(obj) { "@babel/helpers - typeof"; return _typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function (obj) { return typeof obj; } : function (obj) { return obj && "function" == typeof Symbol && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }, _typeof(obj); }
function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }
function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, _toPropertyKey(descriptor.key), descriptor); } }
function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); Object.defineProperty(Constructor, "prototype", { writable: false }); return Constructor; }
function _toPropertyKey(arg) { var key = _toPrimitive(arg, "string"); return _typeof(key) === "symbol" ? key : String(key); }
function _toPrimitive(input, hint) { if (_typeof(input) !== "object" || input === null) return input; var prim = input[Symbol.toPrimitive]; if (prim !== undefined) { var res = prim.call(input, hint || "default"); if (_typeof(res) !== "object") return res; throw new TypeError("@@toPrimitive must return a primitive value."); } return (hint === "string" ? String : Number)(input); }
/**
 * The SubscriberInvite model module.
 * @module model/SubscriberInvite
 * @version 1.0.2
 */
var SubscriberInvite = /*#__PURE__*/function () {
  /**
   * Constructs a new <code>SubscriberInvite</code>.
   * Subscriber Invite
   * @alias module:model/SubscriberInvite
   * @param couponCode {String} Coupon code
   * @param aggregate {String} Aggregate
   * @param active {Boolean} Is Active flag
   * @param reusable {Boolean} Is reusable flag
   * @param createdAt {String} Created Date in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
   * @param updatedAt {String} Updated Date in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
   */
  function SubscriberInvite(couponCode, aggregate, active, reusable, createdAt, updatedAt) {
    _classCallCheck(this, SubscriberInvite);
    SubscriberInvite.initialize(this, couponCode, aggregate, active, reusable, createdAt, updatedAt);
  }

  /**
   * Initializes the fields of this object.
   * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
   * Only for internal use.
   */
  _createClass(SubscriberInvite, null, [{
    key: "initialize",
    value: function initialize(obj, couponCode, aggregate, active, reusable, createdAt, updatedAt) {
      obj['coupon_code'] = couponCode;
      obj['aggregate'] = aggregate;
      obj['active'] = active;
      obj['reusable'] = reusable;
      obj['createdAt'] = createdAt;
      obj['updatedAt'] = updatedAt;
    }

    /**
     * Constructs a <code>SubscriberInvite</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SubscriberInvite} obj Optional instance to populate.
     * @return {module:model/SubscriberInvite} The populated <code>SubscriberInvite</code> instance.
     */
  }, {
    key: "constructFromObject",
    value: function constructFromObject(data, obj) {
      if (data) {
        obj = obj || new SubscriberInvite();
        if (data.hasOwnProperty('coupon_options')) {
          obj['coupon_options'] = _CouponOptions["default"].constructFromObject(data['coupon_options']);
        }
        if (data.hasOwnProperty('plan')) {
          obj['plan'] = _Plan["default"].constructFromObject(data['plan']);
        }
        if (data.hasOwnProperty('trial')) {
          obj['trial'] = _Trial["default"].constructFromObject(data['trial']);
        }
        if (data.hasOwnProperty('name')) {
          obj['name'] = _ApiClient["default"].convertToType(data['name'], 'String');
        }
        if (data.hasOwnProperty('email')) {
          obj['email'] = _ApiClient["default"].convertToType(data['email'], 'String');
        }
        if (data.hasOwnProperty('coupon_code')) {
          obj['coupon_code'] = _ApiClient["default"].convertToType(data['coupon_code'], 'String');
        }
        if (data.hasOwnProperty('domain')) {
          obj['domain'] = _ApiClient["default"].convertToType(data['domain'], 'String');
        }
        if (data.hasOwnProperty('aggregate')) {
          obj['aggregate'] = _ApiClient["default"].convertToType(data['aggregate'], 'String');
        }
        if (data.hasOwnProperty('use_by')) {
          obj['use_by'] = _ApiClient["default"].convertToType(data['use_by'], 'String');
        }
        if (data.hasOwnProperty('active')) {
          obj['active'] = _ApiClient["default"].convertToType(data['active'], 'Boolean');
        }
        if (data.hasOwnProperty('reusable')) {
          obj['reusable'] = _ApiClient["default"].convertToType(data['reusable'], 'Boolean');
        }
        if (data.hasOwnProperty('createdAt')) {
          obj['createdAt'] = _ApiClient["default"].convertToType(data['createdAt'], 'String');
        }
        if (data.hasOwnProperty('updatedAt')) {
          obj['updatedAt'] = _ApiClient["default"].convertToType(data['updatedAt'], 'String');
        }
      }
      return obj;
    }
  }]);
  return SubscriberInvite;
}();
/**
 * @member {module:model/CouponOptions} coupon_options
 */
SubscriberInvite.prototype['coupon_options'] = undefined;

/**
 * @member {module:model/Plan} plan
 */
SubscriberInvite.prototype['plan'] = undefined;

/**
 * @member {module:model/Trial} trial
 */
SubscriberInvite.prototype['trial'] = undefined;

/**
 * Name
 * @member {String} name
 */
SubscriberInvite.prototype['name'] = undefined;

/**
 * Email
 * @member {String} email
 */
SubscriberInvite.prototype['email'] = undefined;

/**
 * Coupon code
 * @member {String} coupon_code
 */
SubscriberInvite.prototype['coupon_code'] = undefined;

/**
 * Domain
 * @member {String} domain
 */
SubscriberInvite.prototype['domain'] = undefined;

/**
 * Aggregate
 * @member {String} aggregate
 */
SubscriberInvite.prototype['aggregate'] = undefined;

/**
 * Used By
 * @member {String} use_by
 */
SubscriberInvite.prototype['use_by'] = undefined;

/**
 * Is Active flag
 * @member {Boolean} active
 */
SubscriberInvite.prototype['active'] = undefined;

/**
 * Is reusable flag
 * @member {Boolean} reusable
 */
SubscriberInvite.prototype['reusable'] = undefined;

/**
 * Created Date in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
 * @member {String} createdAt
 */
SubscriberInvite.prototype['createdAt'] = undefined;

/**
 * Updated Date in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
 * @member {String} updatedAt
 */
SubscriberInvite.prototype['updatedAt'] = undefined;
var _default = SubscriberInvite;
exports["default"] = _default;