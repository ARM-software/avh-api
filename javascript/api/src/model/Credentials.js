/**
 * Arm API
 * REST API to manage your virtual devices.
 *
 * The version of the OpenAPI document: 3.9.0-13085
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The Credentials model module.
 * @module model/Credentials
 * @version 1.0.1
 */
class Credentials {
    /**
     * Constructs a new <code>Credentials</code>.
     * @alias module:model/Credentials
     * @param username {String} Authentication Username
     * @param password {String} Authentication Password
     */
    constructor(username, password) { 
        
        Credentials.initialize(this, username, password);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, username, password) { 
        obj['username'] = username;
        obj['password'] = password;
    }

    /**
     * Constructs a <code>Credentials</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Credentials} obj Optional instance to populate.
     * @return {module:model/Credentials} The populated <code>Credentials</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Credentials();

            if (data.hasOwnProperty('username')) {
                obj['username'] = ApiClient.convertToType(data['username'], 'String');
            }
            if (data.hasOwnProperty('password')) {
                obj['password'] = ApiClient.convertToType(data['password'], 'String');
            }
        }
        return obj;
    }


}

/**
 * Authentication Username
 * @member {String} username
 */
Credentials.prototype['username'] = undefined;

/**
 * Authentication Password
 * @member {String} password
 */
Credentials.prototype['password'] = undefined;






export default Credentials;

