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
 * The AgentAppReadyResponse model module.
 * @module model/AgentAppReadyResponse
 * @version 1.0.2
 */
class AgentAppReadyResponse {
    /**
     * Constructs a new <code>AgentAppReadyResponse</code>.
     * 
     * @alias module:model/AgentAppReadyResponse
     * @param ready {Boolean} 
     */
    constructor(ready) { 
        
        AgentAppReadyResponse.initialize(this, ready);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, ready) { 
        obj['ready'] = ready;
    }

    /**
     * Constructs a <code>AgentAppReadyResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AgentAppReadyResponse} obj Optional instance to populate.
     * @return {module:model/AgentAppReadyResponse} The populated <code>AgentAppReadyResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AgentAppReadyResponse();

            if (data.hasOwnProperty('ready')) {
                obj['ready'] = ApiClient.convertToType(data['ready'], 'Boolean');
            }
        }
        return obj;
    }


}

/**
 * 
 * @member {Boolean} ready
 */
AgentAppReadyResponse.prototype['ready'] = undefined;






export default AgentAppReadyResponse;

