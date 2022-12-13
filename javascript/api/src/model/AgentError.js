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
 * The AgentError model module.
 * @module model/AgentError
 * @version 1.0.2
 */
class AgentError {
    /**
     * Constructs a new <code>AgentError</code>.
     * 
     * @alias module:model/AgentError
     * @param error {String} The error encountered by the agent
     * @param errorID {module:model/AgentError.ErrorIDEnum} AgentError
     */
    constructor(error, errorID) { 
        
        AgentError.initialize(this, error, errorID);
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
     * Constructs a <code>AgentError</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AgentError} obj Optional instance to populate.
     * @return {module:model/AgentError} The populated <code>AgentError</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AgentError();

            if (data.hasOwnProperty('error')) {
                obj['error'] = ApiClient.convertToType(data['error'], 'String');
            }
            if (data.hasOwnProperty('errorID')) {
                obj['errorID'] = ApiClient.convertToType(data['errorID'], 'String');
            }
            if (data.hasOwnProperty('originalError')) {
                obj['originalError'] = ApiClient.convertToType(data['originalError'], Object);
            }
        }
        return obj;
    }


}

/**
 * The error encountered by the agent
 * @member {String} error
 */
AgentError.prototype['error'] = undefined;

/**
 * AgentError
 * @member {module:model/AgentError.ErrorIDEnum} errorID
 */
AgentError.prototype['errorID'] = undefined;

/**
 * The full error encountered by the agent
 * @member {Object} originalError
 */
AgentError.prototype['originalError'] = undefined;





/**
 * Allowed values for the <code>errorID</code> property.
 * @enum {String}
 * @readonly
 */
AgentError['ErrorIDEnum'] = {

    /**
     * value: "AgentError"
     * @const
     */
    "AgentError": "AgentError"
};



export default AgentError;

