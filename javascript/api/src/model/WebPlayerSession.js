/**
 * Arm API
 *    This documents the Arm Virtual Hosting REST API.  For other examples and API clients such as python or javascript please see [API Clients (python/javascript)](https://github.com/ARM-software/avh-api).   For a guide on using this interface please see [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   ## Links   - [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   - [API Clients (python/javascript)](https://github.com/arm-software/avh-api)   
 *
 * The version of the OpenAPI document: 3.15.0-15704
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The WebPlayerSession model module.
 * @module model/WebPlayerSession
 * @version 1.0.2
 */
class WebPlayerSession {
    /**
     * Constructs a new <code>WebPlayerSession</code>.
     * 
     * @alias module:model/WebPlayerSession
     * @param identifier {String} New Session Identifier
     * @param token {String} Session Token
     * @param expiration {Number} Expiration in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
     */
    constructor(identifier, token, expiration) { 
        
        WebPlayerSession.initialize(this, identifier, token, expiration);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, identifier, token, expiration) { 
        obj['identifier'] = identifier;
        obj['token'] = token;
        obj['expiration'] = expiration;
    }

    /**
     * Constructs a <code>WebPlayerSession</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/WebPlayerSession} obj Optional instance to populate.
     * @return {module:model/WebPlayerSession} The populated <code>WebPlayerSession</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new WebPlayerSession();

            if (data.hasOwnProperty('identifier')) {
                obj['identifier'] = ApiClient.convertToType(data['identifier'], 'String');
            }
            if (data.hasOwnProperty('token')) {
                obj['token'] = ApiClient.convertToType(data['token'], 'String');
            }
            if (data.hasOwnProperty('expiration')) {
                obj['expiration'] = ApiClient.convertToType(data['expiration'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * New Session Identifier
 * @member {String} identifier
 */
WebPlayerSession.prototype['identifier'] = undefined;

/**
 * Session Token
 * @member {String} token
 */
WebPlayerSession.prototype['token'] = undefined;

/**
 * Expiration in ISO-8601 format e.g. 2022-05-06T02:39:23.000Z
 * @member {Number} expiration
 */
WebPlayerSession.prototype['expiration'] = undefined;






export default WebPlayerSession;

