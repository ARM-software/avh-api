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
 * The TouchInput model module.
 * @module model/TouchInput
 * @version 1.0.3
 */
class TouchInput {
    /**
     * Constructs a new <code>TouchInput</code>.
     * 
     * @alias module:model/TouchInput
     */
    constructor() { 
        
        TouchInput.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TouchInput</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TouchInput} obj Optional instance to populate.
     * @return {module:model/TouchInput} The populated <code>TouchInput</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TouchInput();

            if (data.hasOwnProperty('position')) {
                obj['position'] = ApiClient.convertToType(data['position'], Object);
            }
        }
        return obj;
    }


}

/**
 * Finger Positions
 * @member {Object} position
 */
TouchInput.prototype['position'] = undefined;






export default TouchInput;

