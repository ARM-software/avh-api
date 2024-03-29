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
 * The Image model module.
 * @module model/Image
 * @version 1.0.3
 */
class Image {
    /**
     * Constructs a new <code>Image</code>.
     * 
     * @alias module:model/Image
     * @param status {String} 
     */
    constructor(status) { 
        
        Image.initialize(this, status);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, status) { 
        obj['status'] = status;
    }

    /**
     * Constructs a <code>Image</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Image} obj Optional instance to populate.
     * @return {module:model/Image} The populated <code>Image</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Image();

            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], 'String');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('filename')) {
                obj['filename'] = ApiClient.convertToType(data['filename'], 'String');
            }
            if (data.hasOwnProperty('uniqueid')) {
                obj['uniqueid'] = ApiClient.convertToType(data['uniqueid'], 'String');
            }
            if (data.hasOwnProperty('size')) {
                obj['size'] = ApiClient.convertToType(data['size'], 'Number');
            }
            if (data.hasOwnProperty('project')) {
                obj['project'] = ApiClient.convertToType(data['project'], 'String');
            }
            if (data.hasOwnProperty('created_at')) {
                obj['created_at'] = ApiClient.convertToType(data['created_at'], 'Date');
            }
            if (data.hasOwnProperty('updated_at')) {
                obj['updated_at'] = ApiClient.convertToType(data['updated_at'], 'Date');
            }
        }
        return obj;
    }


}

/**
 * 
 * @member {String} status
 */
Image.prototype['status'] = undefined;

/**
 * Image ID
 * @member {String} id
 */
Image.prototype['id'] = undefined;

/**
 * 
 * @member {String} name
 */
Image.prototype['name'] = undefined;

/**
 * Type of image
 * @member {module:model/Image.TypeEnum} type
 */
Image.prototype['type'] = undefined;

/**
 * 
 * @member {String} filename
 */
Image.prototype['filename'] = undefined;

/**
 * 
 * @member {String} uniqueid
 */
Image.prototype['uniqueid'] = undefined;

/**
 * 
 * @member {Number} size
 */
Image.prototype['size'] = undefined;

/**
 * project ID
 * @member {String} project
 */
Image.prototype['project'] = undefined;

/**
 * When Image was created
 * @member {Date} created_at
 */
Image.prototype['created_at'] = undefined;

/**
 * When Image was last updated
 * @member {Date} updated_at
 */
Image.prototype['updated_at'] = undefined;





/**
 * Allowed values for the <code>type</code> property.
 * @enum {String}
 * @readonly
 */
Image['TypeEnum'] = {

    /**
     * value: "fwbinary"
     * @const
     */
    "fwbinary": "fwbinary",

    /**
     * value: "kernel"
     * @const
     */
    "kernel": "kernel",

    /**
     * value: "devicetree"
     * @const
     */
    "devicetree": "devicetree",

    /**
     * value: "ramdisk"
     * @const
     */
    "ramdisk": "ramdisk",

    /**
     * value: "loaderfile"
     * @const
     */
    "loaderfile": "loaderfile",

    /**
     * value: "sepfw"
     * @const
     */
    "sepfw": "sepfw",

    /**
     * value: "seprom"
     * @const
     */
    "seprom": "seprom",

    /**
     * value: "bootrom"
     * @const
     */
    "bootrom": "bootrom",

    /**
     * value: "llb"
     * @const
     */
    "llb": "llb",

    /**
     * value: "iboot"
     * @const
     */
    "iboot": "iboot",

    /**
     * value: "ibootdata"
     * @const
     */
    "ibootdata": "ibootdata",

    /**
     * value: "fwpackage"
     * @const
     */
    "fwpackage": "fwpackage",

    /**
     * value: "partition"
     * @const
     */
    "partition": "partition"
};



export default Image;

