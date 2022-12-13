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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.AvhApi);
  }
}(this, function(expect, AvhApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new AvhApi.VolumeOptions();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('VolumeOptions', function() {
    it('should create an instance of VolumeOptions', function() {
      // uncomment below and update the code to test VolumeOptions
      //var instance = new AvhApi.VolumeOptions();
      //expect(instance).to.be.a(AvhApi.VolumeOptions);
    });

    it('should have the property allocate (base name: "allocate")', function() {
      // uncomment below and update the code to test the property allocate
      //var instance = new AvhApi.VolumeOptions();
      //expect(instance).to.be();
    });

    it('should have the property partitions (base name: "partitions")', function() {
      // uncomment below and update the code to test the property partitions
      //var instance = new AvhApi.VolumeOptions();
      //expect(instance).to.be();
    });

    it('should have the property computeNode (base name: "computeNode")', function() {
      // uncomment below and update the code to test the property computeNode
      //var instance = new AvhApi.VolumeOptions();
      //expect(instance).to.be();
    });

  });

}));
