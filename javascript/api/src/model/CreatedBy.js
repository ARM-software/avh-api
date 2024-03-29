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
 * The CreatedBy model module.
 * @module model/CreatedBy
 * @version 1.0.3
 */
class CreatedBy {
    /**
     * Constructs a new <code>CreatedBy</code>.
     * 
     * @alias module:model/CreatedBy
     */
    constructor() { 
        
        CreatedBy.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CreatedBy</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CreatedBy} obj Optional instance to populate.
     * @return {module:model/CreatedBy} The populated <code>CreatedBy</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CreatedBy();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('username')) {
                obj['username'] = ApiClient.convertToType(data['username'], 'String');
            }
            if (data.hasOwnProperty('label')) {
                obj['label'] = ApiClient.convertToType(data['label'], 'String');
            }
            if (data.hasOwnProperty('deleted')) {
                obj['deleted'] = ApiClient.convertToType(data['deleted'], 'Boolean');
            }
        }
        return obj;
    }


}

/**
 * User Identifier
 * @member {String} id
 */
CreatedBy.prototype['id'] = undefined;

/**
 * Username
 * @member {String} username
 */
CreatedBy.prototype['username'] = undefined;

/**
 * User Label
 * @member {String} label
 */
CreatedBy.prototype['label'] = undefined;

/**
 * Indicates if user was deleted
 * @member {Boolean} deleted
 */
CreatedBy.prototype['deleted'] = undefined;






export default CreatedBy;

