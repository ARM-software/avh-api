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
    describe('trialStatus', function() {
      it('should call trialStatus successfully', function(done) {
        //uncomment below and update the code to test trialStatus
        //instance.trialStatus(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1AddProjectKey', function() {
      it('should call v1AddProjectKey successfully', function(done) {
        //uncomment below and update the code to test v1AddProjectKey
        //instance.v1AddProjectKey(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1AddTeamRoleToProject', function() {
      it('should call v1AddTeamRoleToProject successfully', function(done) {
        //uncomment below and update the code to test v1AddTeamRoleToProject
        //instance.v1AddTeamRoleToProject(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1AddUserRoleToProject', function() {
      it('should call v1AddUserRoleToProject successfully', function(done) {
        //uncomment below and update the code to test v1AddUserRoleToProject
        //instance.v1AddUserRoleToProject(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1AddUserToTeam', function() {
      it('should call v1AddUserToTeam successfully', function(done) {
        //uncomment below and update the code to test v1AddUserToTeam
        //instance.v1AddUserToTeam(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
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
    describe('v1BtracePreauthorize', function() {
      it('should call v1BtracePreauthorize successfully', function(done) {
        //uncomment below and update the code to test v1BtracePreauthorize
        //instance.v1BtracePreauthorize(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1ClearCoreTrace', function() {
      it('should call v1ClearCoreTrace successfully', function(done) {
        //uncomment below and update the code to test v1ClearCoreTrace
        //instance.v1ClearCoreTrace(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1ClearHyperTrace', function() {
      it('should call v1ClearHyperTrace successfully', function(done) {
        //uncomment below and update the code to test v1ClearHyperTrace
        //instance.v1ClearHyperTrace(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1ClearHyperTraceHooks', function() {
      it('should call v1ClearHyperTraceHooks successfully', function(done) {
        //uncomment below and update the code to test v1ClearHyperTraceHooks
        //instance.v1ClearHyperTraceHooks(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1ClearInstancePanics', function() {
      it('should call v1ClearInstancePanics successfully', function(done) {
        //uncomment below and update the code to test v1ClearInstancePanics
        //instance.v1ClearInstancePanics(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1CreateHook', function() {
      it('should call v1CreateHook successfully', function(done) {
        //uncomment below and update the code to test v1CreateHook
        //instance.v1CreateHook(function(error) {
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
    describe('v1CreateProject', function() {
      it('should call v1CreateProject successfully', function(done) {
        //uncomment below and update the code to test v1CreateProject
        //instance.v1CreateProject(function(error) {
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
    describe('v1CreateSubscriberInvite', function() {
      it('should call v1CreateSubscriberInvite successfully', function(done) {
        //uncomment below and update the code to test v1CreateSubscriberInvite
        //instance.v1CreateSubscriberInvite(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1DeleteHook', function() {
      it('should call v1DeleteHook successfully', function(done) {
        //uncomment below and update the code to test v1DeleteHook
        //instance.v1DeleteHook(function(error) {
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
    describe('v1DeleteInstanceSnapshot', function() {
      it('should call v1DeleteInstanceSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1DeleteInstanceSnapshot
        //instance.v1DeleteInstanceSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1DeleteProject', function() {
      it('should call v1DeleteProject successfully', function(done) {
        //uncomment below and update the code to test v1DeleteProject
        //instance.v1DeleteProject(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1DeleteSnapshot', function() {
      it('should call v1DeleteSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1DeleteSnapshot
        //instance.v1DeleteSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1DisableExposePort', function() {
      it('should call v1DisableExposePort successfully', function(done) {
        //uncomment below and update the code to test v1DisableExposePort
        //instance.v1DisableExposePort(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1EnableExposePort', function() {
      it('should call v1EnableExposePort successfully', function(done) {
        //uncomment below and update the code to test v1EnableExposePort
        //instance.v1EnableExposePort(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1ExecuteHyperTraceHooks', function() {
      it('should call v1ExecuteHyperTraceHooks successfully', function(done) {
        //uncomment below and update the code to test v1ExecuteHyperTraceHooks
        //instance.v1ExecuteHyperTraceHooks(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetHookById', function() {
      it('should call v1GetHookById successfully', function(done) {
        //uncomment below and update the code to test v1GetHookById
        //instance.v1GetHookById(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetHooks', function() {
      it('should call v1GetHooks successfully', function(done) {
        //uncomment below and update the code to test v1GetHooks
        //instance.v1GetHooks(function(error) {
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
    describe('v1GetInstanceConsoleLog', function() {
      it('should call v1GetInstanceConsoleLog successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceConsoleLog
        //instance.v1GetInstanceConsoleLog(function(error) {
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
    describe('v1GetInstancePanics', function() {
      it('should call v1GetInstancePanics successfully', function(done) {
        //uncomment below and update the code to test v1GetInstancePanics
        //instance.v1GetInstancePanics(function(error) {
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
    describe('v1GetInstanceQuickConnectCommand', function() {
      it('should call v1GetInstanceQuickConnectCommand successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceQuickConnectCommand
        //instance.v1GetInstanceQuickConnectCommand(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstanceScreenshot', function() {
      it('should call v1GetInstanceScreenshot successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceScreenshot
        //instance.v1GetInstanceScreenshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstanceSnapshot', function() {
      it('should call v1GetInstanceSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceSnapshot
        //instance.v1GetInstanceSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1GetInstanceSnapshots', function() {
      it('should call v1GetInstanceSnapshots successfully', function(done) {
        //uncomment below and update the code to test v1GetInstanceSnapshots
        //instance.v1GetInstanceSnapshots(function(error) {
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
    describe('v1GetProjectKeys', function() {
      it('should call v1GetProjectKeys successfully', function(done) {
        //uncomment below and update the code to test v1GetProjectKeys
        //instance.v1GetProjectKeys(function(error) {
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
    describe('v1Kcrange', function() {
      it('should call v1Kcrange successfully', function(done) {
        //uncomment below and update the code to test v1Kcrange
        //instance.v1Kcrange(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1ListThreads', function() {
      it('should call v1ListThreads successfully', function(done) {
        //uncomment below and update the code to test v1ListThreads
        //instance.v1ListThreads(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1MediaPlay', function() {
      it('should call v1MediaPlay successfully', function(done) {
        //uncomment below and update the code to test v1MediaPlay
        //instance.v1MediaPlay(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1MediaStop', function() {
      it('should call v1MediaStop successfully', function(done) {
        //uncomment below and update the code to test v1MediaStop
        //instance.v1MediaStop(function(error) {
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
    describe('v1PostInstanceInput', function() {
      it('should call v1PostInstanceInput successfully', function(done) {
        //uncomment below and update the code to test v1PostInstanceInput
        //instance.v1PostInstanceInput(function(error) {
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
    describe('v1RemoveProjectKey', function() {
      it('should call v1RemoveProjectKey successfully', function(done) {
        //uncomment below and update the code to test v1RemoveProjectKey
        //instance.v1RemoveProjectKey(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1RemoveTeamRoleFromProject', function() {
      it('should call v1RemoveTeamRoleFromProject successfully', function(done) {
        //uncomment below and update the code to test v1RemoveTeamRoleFromProject
        //instance.v1RemoveTeamRoleFromProject(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1RemoveUserFromTeam', function() {
      it('should call v1RemoveUserFromTeam successfully', function(done) {
        //uncomment below and update the code to test v1RemoveUserFromTeam
        //instance.v1RemoveUserFromTeam(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1RemoveUserRoleFromProject', function() {
      it('should call v1RemoveUserRoleFromProject successfully', function(done) {
        //uncomment below and update the code to test v1RemoveUserRoleFromProject
        //instance.v1RemoveUserRoleFromProject(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1RenameInstanceSnapshot', function() {
      it('should call v1RenameInstanceSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1RenameInstanceSnapshot
        //instance.v1RenameInstanceSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1RestoreInstanceSnapshot', function() {
      it('should call v1RestoreInstanceSnapshot successfully', function(done) {
        //uncomment below and update the code to test v1RestoreInstanceSnapshot
        //instance.v1RestoreInstanceSnapshot(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1Roles', function() {
      it('should call v1Roles successfully', function(done) {
        //uncomment below and update the code to test v1Roles
        //instance.v1Roles(function(error) {
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
    describe('v1StartCoreTrace', function() {
      it('should call v1StartCoreTrace successfully', function(done) {
        //uncomment below and update the code to test v1StartCoreTrace
        //instance.v1StartCoreTrace(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1StartHyperTrace', function() {
      it('should call v1StartHyperTrace successfully', function(done) {
        //uncomment below and update the code to test v1StartHyperTrace
        //instance.v1StartHyperTrace(function(error) {
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
    describe('v1StartNetworkMonitor', function() {
      it('should call v1StartNetworkMonitor successfully', function(done) {
        //uncomment below and update the code to test v1StartNetworkMonitor
        //instance.v1StartNetworkMonitor(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1StopCoreTrace', function() {
      it('should call v1StopCoreTrace successfully', function(done) {
        //uncomment below and update the code to test v1StopCoreTrace
        //instance.v1StopCoreTrace(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1StopHyperTrace', function() {
      it('should call v1StopHyperTrace successfully', function(done) {
        //uncomment below and update the code to test v1StopHyperTrace
        //instance.v1StopHyperTrace(function(error) {
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
    describe('v1StopNetworkMonitor', function() {
      it('should call v1StopNetworkMonitor successfully', function(done) {
        //uncomment below and update the code to test v1StopNetworkMonitor
        //instance.v1StopNetworkMonitor(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1TeamChange', function() {
      it('should call v1TeamChange successfully', function(done) {
        //uncomment below and update the code to test v1TeamChange
        //instance.v1TeamChange(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1TeamCreate', function() {
      it('should call v1TeamCreate successfully', function(done) {
        //uncomment below and update the code to test v1TeamCreate
        //instance.v1TeamCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1TeamDelete', function() {
      it('should call v1TeamDelete successfully', function(done) {
        //uncomment below and update the code to test v1TeamDelete
        //instance.v1TeamDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1Teams', function() {
      it('should call v1Teams successfully', function(done) {
        //uncomment below and update the code to test v1Teams
        //instance.v1Teams(function(error) {
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
    describe('v1UpdateHook', function() {
      it('should call v1UpdateHook successfully', function(done) {
        //uncomment below and update the code to test v1UpdateHook
        //instance.v1UpdateHook(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1UpdateProject', function() {
      it('should call v1UpdateProject successfully', function(done) {
        //uncomment below and update the code to test v1UpdateProject
        //instance.v1UpdateProject(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1UpdateProjectSettings', function() {
      it('should call v1UpdateProjectSettings successfully', function(done) {
        //uncomment below and update the code to test v1UpdateProjectSettings
        //instance.v1UpdateProjectSettings(function(error) {
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
    describe('v1WebPlayerAllowedDomains', function() {
      it('should call v1WebPlayerAllowedDomains successfully', function(done) {
        //uncomment below and update the code to test v1WebPlayerAllowedDomains
        //instance.v1WebPlayerAllowedDomains(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1WebPlayerCreateSession', function() {
      it('should call v1WebPlayerCreateSession successfully', function(done) {
        //uncomment below and update the code to test v1WebPlayerCreateSession
        //instance.v1WebPlayerCreateSession(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1WebPlayerDestroySession', function() {
      it('should call v1WebPlayerDestroySession successfully', function(done) {
        //uncomment below and update the code to test v1WebPlayerDestroySession
        //instance.v1WebPlayerDestroySession(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1WebPlayerListSessions', function() {
      it('should call v1WebPlayerListSessions successfully', function(done) {
        //uncomment below and update the code to test v1WebPlayerListSessions
        //instance.v1WebPlayerListSessions(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v1WebPlayerSessionInfo', function() {
      it('should call v1WebPlayerSessionInfo successfully', function(done) {
        //uncomment below and update the code to test v1WebPlayerSessionInfo
        //instance.v1WebPlayerSessionInfo(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
