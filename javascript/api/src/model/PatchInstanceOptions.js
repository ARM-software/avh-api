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
import InstanceBootOptions from './InstanceBootOptions';

/**
 * The PatchInstanceOptions model module.
 * @module model/PatchInstanceOptions
 * @version 1.0.2
 */
class PatchInstanceOptions {
    /**
     * Constructs a new <code>PatchInstanceOptions</code>.
     * 
     * @alias module:model/PatchInstanceOptions
     */
    constructor() { 
        
        PatchInstanceOptions.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PatchInstanceOptions</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PatchInstanceOptions} obj Optional instance to populate.
     * @return {module:model/PatchInstanceOptions} The populated <code>PatchInstanceOptions</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PatchInstanceOptions();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('state')) {
                obj['state'] = ApiClient.convertToType(data['state'], 'String');
            }
            if (data.hasOwnProperty('bootOptions')) {
                obj['bootOptions'] = InstanceBootOptions.constructFromObject(data['bootOptions']);
            }
            if (data.hasOwnProperty('proxy')) {
                obj['proxy'] = ApiClient.convertToType(data['proxy'], 'String');
            }
        }
        return obj;
    }


}

/**
 * the name of the device
 * @member {String} name
 */
PatchInstanceOptions.prototype['name'] = undefined;

/**
 * the desired state of the device
 * @member {module:model/PatchInstanceOptions.StateEnum} state
 */
PatchInstanceOptions.prototype['state'] = undefined;

/**
 * @member {module:model/InstanceBootOptions} bootOptions
 */
PatchInstanceOptions.prototype['bootOptions'] = undefined;

/**
 * 
 * @member {String} proxy
 */
PatchInstanceOptions.prototype['proxy'] = undefined;





/**
 * Allowed values for the <code>state</code> property.
 * @enum {String}
 * @readonly
 */
PatchInstanceOptions['StateEnum'] = {

    /**
     * value: "on"
     * @const
     */
    "on": "on",

    /**
     * value: "off"
     * @const
     */
    "off": "off",

    /**
     * value: "paused"
     * @const
     */
    "paused": "paused",

    /**
     * value: "deleting"
     * @const
     */
    "deleting": "deleting"
};



export default PatchInstanceOptions;

