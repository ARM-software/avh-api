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
import InstanceState from './InstanceState';

/**
 * The InstanceReturn model module.
 * @module model/InstanceReturn
 * @version 1.0.2
 */
class InstanceReturn {
    /**
     * Constructs a new <code>InstanceReturn</code>.
     * 
     * @alias module:model/InstanceReturn
     * @param id {String} Instance ID
     * @param state {module:model/InstanceState} 
     */
    constructor(id, state) { 
        
        InstanceReturn.initialize(this, id, state);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, state) { 
        obj['id'] = id;
        obj['state'] = state;
    }

    /**
     * Constructs a <code>InstanceReturn</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InstanceReturn} obj Optional instance to populate.
     * @return {module:model/InstanceReturn} The populated <code>InstanceReturn</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InstanceReturn();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('state')) {
                obj['state'] = InstanceState.constructFromObject(data['state']);
            }
        }
        return obj;
    }


}

/**
 * Instance ID
 * @member {String} id
 */
InstanceReturn.prototype['id'] = undefined;

/**
 * @member {module:model/InstanceState} state
 */
InstanceReturn.prototype['state'] = undefined;






export default InstanceReturn;

