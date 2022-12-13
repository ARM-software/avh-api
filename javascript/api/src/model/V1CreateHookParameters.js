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
 * The V1CreateHookParameters model module.
 * @module model/V1CreateHookParameters
 * @version 1.0.2
 */
class V1CreateHookParameters {
    /**
     * Constructs a new <code>V1CreateHookParameters</code>.
     * 
     * @alias module:model/V1CreateHookParameters
     * @param label {String} Label
     * @param address {String} Address
     * @param patch {String} Patch
     * @param patchType {module:model/V1CreateHookParameters.PatchTypeEnum} Patch Type
     */
    constructor(label, address, patch, patchType) { 
        
        V1CreateHookParameters.initialize(this, label, address, patch, patchType);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, label, address, patch, patchType) { 
        obj['label'] = label;
        obj['address'] = address;
        obj['patch'] = patch;
        obj['patchType'] = patchType;
    }

    /**
     * Constructs a <code>V1CreateHookParameters</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/V1CreateHookParameters} obj Optional instance to populate.
     * @return {module:model/V1CreateHookParameters} The populated <code>V1CreateHookParameters</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new V1CreateHookParameters();

            if (data.hasOwnProperty('label')) {
                obj['label'] = ApiClient.convertToType(data['label'], 'String');
            }
            if (data.hasOwnProperty('address')) {
                obj['address'] = ApiClient.convertToType(data['address'], 'String');
            }
            if (data.hasOwnProperty('patch')) {
                obj['patch'] = ApiClient.convertToType(data['patch'], 'String');
            }
            if (data.hasOwnProperty('patchType')) {
                obj['patchType'] = ApiClient.convertToType(data['patchType'], 'String');
            }
        }
        return obj;
    }


}

/**
 * Label
 * @member {String} label
 */
V1CreateHookParameters.prototype['label'] = undefined;

/**
 * Address
 * @member {String} address
 */
V1CreateHookParameters.prototype['address'] = undefined;

/**
 * Patch
 * @member {String} patch
 */
V1CreateHookParameters.prototype['patch'] = undefined;

/**
 * Patch Type
 * @member {module:model/V1CreateHookParameters.PatchTypeEnum} patchType
 */
V1CreateHookParameters.prototype['patchType'] = undefined;





/**
 * Allowed values for the <code>patchType</code> property.
 * @enum {String}
 * @readonly
 */
V1CreateHookParameters['PatchTypeEnum'] = {

    /**
     * value: "csmfcc"
     * @const
     */
    "csmfcc": "csmfcc",

    /**
     * value: "csmfvm"
     * @const
     */
    "csmfvm": "csmfvm"
};



export default V1CreateHookParameters;

