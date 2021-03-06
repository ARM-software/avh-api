/**
 * Arm API
 * REST API to manage your virtual devices.
 *
 * The version of the OpenAPI document: 3.9.0-13085
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
    instance = new AvhApi.ArmApi();
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

  describe('ArmApi', function() {
    describe('v1AuthLogin', function() {
      it('should call v1AuthLogin successfully', function(done) {
        //uncomment below and update the code to test v1AuthLogin
        //instance.v1AuthLogin(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1CreateImage', function() {
      it('should call v1CreateImage successfully', function(done) {
        //uncomment below and update the code to test v1CreateImage
        //instance.v1CreateImage(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1CreateInstance', function() {
      it('should call v1CreateInstance successfully', function(done) {
        //uncomment below and update the code to test v1CreateInstance
        //instance.v1CreateInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1CreateSnapshot', function() {
      it('should call v1CreateSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1CreateSnapshot
        //instance.v1CreateSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1DeleteImage', function() {
      it('should call v1DeleteImage successfully', function(done) {
        //uncomment below and update the code to test v1DeleteImage
        //instance.v1DeleteImage(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1DeleteInstance', function() {
      it('should call v1DeleteInstance successfully', function(done) {
        //uncomment below and update the code to test v1DeleteInstance
        //instance.v1DeleteInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetImage', function() {
      it('should call v1GetImage successfully', function(done) {
        //uncomment below and update the code to test v1GetImage
        //instance.v1GetImage(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetImages', function() {
      it('should call v1GetImages successfully', function(done) {
        //uncomment below and update the code to test v1GetImages
        //instance.v1GetImages(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstance', function() {
      it('should call v1GetInstance successfully', function(done) {
        //uncomment below and update the code to test v1GetInstance
        //instance.v1GetInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstanceConsole', function() {
      it('should call v1GetInstanceConsole successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceConsole
        //instance.v1GetInstanceConsole(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstanceGpios', function() {
      it('should call v1GetInstanceGpios successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceGpios
        //instance.v1GetInstanceGpios(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstancePeripherals', function() {
      it('should call v1GetInstancePeripherals successfully', function(done) {
        //uncomment below and update the code to test v1GetInstancePeripherals
        //instance.v1GetInstancePeripherals(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstanceState', function() {
      it('should call v1GetInstanceState successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceState
        //instance.v1GetInstanceState(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstances', function() {
      it('should call v1GetInstances successfully', function(done) {
        //uncomment below and update the code to test v1GetInstances
        //instance.v1GetInstances(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetModelSoftware', function() {
      it('should call v1GetModelSoftware successfully', function(done) {
        //uncomment below and update the code to test v1GetModelSoftware
        //instance.v1GetModelSoftware(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetModels', function() {
      it('should call v1GetModels successfully', function(done) {
        //uncomment below and update the code to test v1GetModels
        //instance.v1GetModels(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetProject', function() {
      it('should call v1GetProject successfully', function(done) {
        //uncomment below and update the code to test v1GetProject
        //instance.v1GetProject(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetProjectInstances', function() {
      it('should call v1GetProjectInstances successfully', function(done) {
        //uncomment below and update the code to test v1GetProjectInstances
        //instance.v1GetProjectInstances(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetProjectVpnConfig', function() {
      it('should call v1GetProjectVpnConfig successfully', function(done) {
        //uncomment below and update the code to test v1GetProjectVpnConfig
        //instance.v1GetProjectVpnConfig(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetProjects', function() {
      it('should call v1GetProjects successfully', function(done) {
        //uncomment below and update the code to test v1GetProjects
        //instance.v1GetProjects(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetSnapshot', function() {
      it('should call v1GetSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1GetSnapshot
        //instance.v1GetSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetSnapshots', function() {
      it('should call v1GetSnapshots successfully', function(done) {
        //uncomment below and update the code to test v1GetSnapshots
        //instance.v1GetSnapshots(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1PatchInstance', function() {
      it('should call v1PatchInstance successfully', function(done) {
        //uncomment below and update the code to test v1PatchInstance
        //instance.v1PatchInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1PauseInstance', function() {
      it('should call v1PauseInstance successfully', function(done) {
        //uncomment below and update the code to test v1PauseInstance
        //instance.v1PauseInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1Ready', function() {
      it('should call v1Ready successfully', function(done) {
        //uncomment below and update the code to test v1Ready
        //instance.v1Ready(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1RebootInstance', function() {
      it('should call v1RebootInstance successfully', function(done) {
        //uncomment below and update the code to test v1RebootInstance
        //instance.v1RebootInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1RestoreSnapshot', function() {
      it('should call v1RestoreSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1RestoreSnapshot
        //instance.v1RestoreSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1SetInstanceGpios', function() {
      it('should call v1SetInstanceGpios successfully', function(done) {
        //uncomment below and update the code to test v1SetInstanceGpios
        //instance.v1SetInstanceGpios(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1SetInstancePeripherals', function() {
      it('should call v1SetInstancePeripherals successfully', function(done) {
        //uncomment below and update the code to test v1SetInstancePeripherals
        //instance.v1SetInstancePeripherals(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1SetInstanceState', function() {
      it('should call v1SetInstanceState successfully', function(done) {
        //uncomment below and update the code to test v1SetInstanceState
        //instance.v1SetInstanceState(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1SnapshotDelete', function() {
      it('should call v1SnapshotDelete successfully', function(done) {
        //uncomment below and update the code to test v1SnapshotDelete
        //instance.v1SnapshotDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1SnapshotRename', function() {
      it('should call v1SnapshotRename successfully', function(done) {
        //uncomment below and update the code to test v1SnapshotRename
        //instance.v1SnapshotRename(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1StartInstance', function() {
      it('should call v1StartInstance successfully', function(done) {
        //uncomment below and update the code to test v1StartInstance
        //instance.v1StartInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1StopInstance', function() {
      it('should call v1StopInstance successfully', function(done) {
        //uncomment below and update the code to test v1StopInstance
        //instance.v1StopInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1UnpauseInstance', function() {
      it('should call v1UnpauseInstance successfully', function(done) {
        //uncomment below and update the code to test v1UnpauseInstance
        //instance.v1UnpauseInstance(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1UploadImageData', function() {
      it('should call v1UploadImageData successfully', function(done) {
        //uncomment below and update the code to test v1UploadImageData
        //instance.v1UploadImageData(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
