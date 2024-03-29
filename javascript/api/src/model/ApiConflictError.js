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
 * The ApiConflictError model module.
 * @module model/ApiConflictError
 * @version 1.0.3
 */
class ApiConflictError {
    /**
     * Constructs a new <code>ApiConflictError</code>.
     * 
     * @alias module:model/ApiConflictError
     * @param error {String} Error text
     * @param errorID {module:model/ApiConflictError.ErrorIDEnum} Error ID
     */
    constructor(error, errorID) { 
        
        ApiConflictError.initialize(this, error, errorID);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, error, errorID) { 
        obj['error'] = error;
        obj['errorID'] = errorID;
    }

    /**
     * Constructs a <code>ApiConflictError</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ApiConflictError} obj Optional instance to populate.
     * @return {module:model/ApiConflictError} The populated <code>ApiConflictError</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ApiConflictError();

            if (data.hasOwnProperty('error')) {
                obj['error'] = ApiClient.convertToType(data['error'], 'String');
            }
            if (data.hasOwnProperty('errorID')) {
                obj['errorID'] = ApiClient.convertToType(data['errorID'], 'String');
            }
            if (data.hasOwnProperty('object')) {
                obj['object'] = ApiClient.convertToType(data['object'], Object);
            }
        }
        return obj;
    }


}

/**
 * Error text
 * @member {String} error
 */
ApiConflictError.prototype['error'] = undefined;

/**
 * Error ID
 * @member {module:model/ApiConflictError.ErrorIDEnum} errorID
 */
ApiConflictError.prototype['errorID'] = undefined;

/**
 * Object that is conflicted with
 * @member {Object} object
 */
ApiConflictError.prototype['object'] = undefined;





/**
 * Allowed values for the <code>errorID</code> property.
 * @enum {String}
 * @readonly
 */
ApiConflictError['ErrorIDEnum'] = {

    /**
     * value: "Conflict"
     * @const
     */
    "Conflict": "Conflict"
};



export default ApiConflictError;

