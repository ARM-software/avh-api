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
 * The ProjectKey model module.
 * @module model/ProjectKey
 * @version 1.0.2
 */
class ProjectKey {
    /**
     * Constructs a new <code>ProjectKey</code>.
     * 
     * @alias module:model/ProjectKey
     * @param kind {module:model/ProjectKey.KindEnum} kind of key
     * @param key {String} The public key
     */
    constructor(kind, key) { 
        
        ProjectKey.initialize(this, kind, key);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, kind, key) { 
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
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ProjectKey();

            if (data.hasOwnProperty('identifier')) {
                obj['identifier'] = ApiClient.convertToType(data['identifier'], 'String');
            }
            if (data.hasOwnProperty('kind')) {
                obj['kind'] = ApiClient.convertToType(data['kind'], 'String');
            }
            if (data.hasOwnProperty('project')) {
                obj['project'] = ApiClient.convertToType(data['project'], 'String');
            }
            if (data.hasOwnProperty('key')) {
                obj['key'] = ApiClient.convertToType(data['key'], 'String');
            }
            if (data.hasOwnProperty('fingerprint')) {
                obj['fingerprint'] = ApiClient.convertToType(data['fingerprint'], 'String');
            }
            if (data.hasOwnProperty('updatedAt')) {
                obj['updatedAt'] = ApiClient.convertToType(data['updatedAt'], 'Date');
            }
            if (data.hasOwnProperty('createdAt')) {
                obj['createdAt'] = ApiClient.convertToType(data['createdAt'], 'Date');
            }
        }
        return obj;
    }


}

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



export default ProjectKey;

