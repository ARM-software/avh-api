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
import Bit from './Bit';

/**
 * The GpioStateDefinition model module.
 * @module model/GpioStateDefinition
 * @version 1.0.2
 */
class GpioStateDefinition {
    /**
     * Constructs a new <code>GpioStateDefinition</code>.
     * 
     * @alias module:model/GpioStateDefinition
     * @param bitCount {Number} count of bits in members of this bank
     * @param banks {Array.<Array.<module:model/Bit>>} bits for each bank of this name as an array of arrays
     */
    constructor(bitCount, banks) { 
        
        GpioStateDefinition.initialize(this, bitCount, banks);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, bitCount, banks) { 
        obj['bitCount'] = bitCount;
        obj['banks'] = banks;
    }

    /**
     * Constructs a <code>GpioStateDefinition</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/GpioStateDefinition} obj Optional instance to populate.
     * @return {module:model/GpioStateDefinition} The populated <code>GpioStateDefinition</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GpioStateDefinition();

            if (data.hasOwnProperty('bitCount')) {
                obj['bitCount'] = ApiClient.convertToType(data['bitCount'], 'Number');
            }
            if (data.hasOwnProperty('banks')) {
                obj['banks'] = ApiClient.convertToType(data['banks'], [[Bit]]);
            }
        }
        return obj;
    }


}

/**
 * count of bits in members of this bank
 * @member {Number} bitCount
 */
GpioStateDefinition.prototype['bitCount'] = undefined;

/**
 * bits for each bank of this name as an array of arrays
 * @member {Array.<Array.<module:model/Bit>>} banks
 */
GpioStateDefinition.prototype['banks'] = undefined;






export default GpioStateDefinition;

