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
import AgentApp from './AgentApp';

/**
 * The AgentAppsList model module.
 * @module model/AgentAppsList
 * @version 1.0.3
 */
class AgentAppsList {
    /**
     * Constructs a new <code>AgentAppsList</code>.
     * 
     * @alias module:model/AgentAppsList
     */
    constructor() { 
        
        AgentAppsList.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AgentAppsList</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AgentAppsList} obj Optional instance to populate.
     * @return {module:model/AgentAppsList} The populated <code>AgentAppsList</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AgentAppsList();

            if (data.hasOwnProperty('apps')) {
                obj['apps'] = ApiClient.convertToType(data['apps'], [AgentApp]);
            }
            if (data.hasOwnProperty('frontmost')) {
                obj['frontmost'] = ApiClient.convertToType(data['frontmost'], 'String');
            }
        }
        return obj;
    }


}

/**
 * 
 * @member {Array.<module:model/AgentApp>} apps
 */
AgentAppsList.prototype['apps'] = undefined;

/**
 * bundleID of frontmost app or empty string if none are frontmost
 * @member {String} frontmost
 */
AgentAppsList.prototype['frontmost'] = undefined;






export default AgentAppsList;

