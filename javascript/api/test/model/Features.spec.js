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
    instance = new AvhApi.Features();
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

  describe('Features', function() {
    it('should create an instance of Features', function() {
      // uncomment below and update the code to test Features
      //var instance = new AvhApi.Features();
      //expect(instance).to.be.a(AvhApi.Features);
    });

    it('should have the property apps (base name: "apps")', function() {
      // uncomment below and update the code to test the property apps
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property connect (base name: "connect")', function() {
      // uncomment below and update the code to test the property connect
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property console (base name: "console")', function() {
      // uncomment below and update the code to test the property console
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property coretrace (base name: "coretrace")', function() {
      // uncomment below and update the code to test the property coretrace
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property deviceControl (base name: "deviceControl")', function() {
      // uncomment below and update the code to test the property deviceControl
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property deviceDelete (base name: "deviceDelete")', function() {
      // uncomment below and update the code to test the property deviceDelete
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property files (base name: "files")', function() {
      // uncomment below and update the code to test the property files
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property frida (base name: "frida")', function() {
      // uncomment below and update the code to test the property frida
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property images (base name: "images")', function() {
      // uncomment below and update the code to test the property images
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property messaging (base name: "messaging")', function() {
      // uncomment below and update the code to test the property messaging
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property netmon (base name: "netmon")', function() {
      // uncomment below and update the code to test the property netmon
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property network (base name: "network")', function() {
      // uncomment below and update the code to test the property network
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property portForwarding (base name: "portForwarding")', function() {
      // uncomment below and update the code to test the property portForwarding
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property powerManagement (base name: "powerManagement")', function() {
      // uncomment below and update the code to test the property powerManagement
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property profile (base name: "profile")', function() {
      // uncomment below and update the code to test the property profile
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property sensors (base name: "sensors")', function() {
      // uncomment below and update the code to test the property sensors
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property settings (base name: "settings")', function() {
      // uncomment below and update the code to test the property settings
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property snapshots (base name: "snapshots")', function() {
      // uncomment below and update the code to test the property snapshots
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property strace (base name: "strace")', function() {
      // uncomment below and update the code to test the property strace
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

    it('should have the property system (base name: "system")', function() {
      // uncomment below and update the code to test the property system
      //var instance = new AvhApi.Features();
      //expect(instance).to.be();
    });

  });

}));
