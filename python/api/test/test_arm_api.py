"""
    Arm API

    REST API to manage your virtual devices.  # noqa: E501

    The version of the OpenAPI document: 1
    Generated by: https://openapi-generator.tech
"""


import unittest

import ApiClient
from ApiClient.api.arm_api import ArmApi  # noqa: E501


class TestArmApi(unittest.TestCase):
    """ArmApi unit test stubs"""

    def setUp(self):
        self.api = ArmApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_v1_auth_login(self):
        """Test case for v1_auth_login

        Log In  # noqa: E501
        """
        pass

    def test_v1_create_image(self):
        """Test case for v1_create_image

        Create a new Image  # noqa: E501
        """
        pass

    def test_v1_create_instance(self):
        """Test case for v1_create_instance

        Create Instance  # noqa: E501
        """
        pass

    def test_v1_create_snapshot(self):
        """Test case for v1_create_snapshot

        Create Instance Snapshot  # noqa: E501
        """
        pass

    def test_v1_delete_image(self):
        """Test case for v1_delete_image

        Delete Image  # noqa: E501
        """
        pass

    def test_v1_delete_instance(self):
        """Test case for v1_delete_instance

        Remove Instance  # noqa: E501
        """
        pass

    def test_v1_get_image(self):
        """Test case for v1_get_image

        Get Image Metadata  # noqa: E501
        """
        pass

    def test_v1_get_images(self):
        """Test case for v1_get_images

        Get all Images Metadata  # noqa: E501
        """
        pass

    def test_v1_get_instance(self):
        """Test case for v1_get_instance

        Get Instance  # noqa: E501
        """
        pass

    def test_v1_get_instance_console(self):
        """Test case for v1_get_instance_console

        Get console websocket URL  # noqa: E501
        """
        pass

    def test_v1_get_instance_peripherals(self):
        """Test case for v1_get_instance_peripherals

        Get Instance Peripherals  # noqa: E501
        """
        pass

    def test_v1_get_instance_state(self):
        """Test case for v1_get_instance_state

        Get state of Instance  # noqa: E501
        """
        pass

    def test_v1_get_instances(self):
        """Test case for v1_get_instances

        Get Instances  # noqa: E501
        """
        pass

    def test_v1_get_model_software(self):
        """Test case for v1_get_model_software

        Get Software for Model  # noqa: E501
        """
        pass

    def test_v1_get_models(self):
        """Test case for v1_get_models

        Get Supported Models  # noqa: E501
        """
        pass

    def test_v1_get_project(self):
        """Test case for v1_get_project

        Get Project  # noqa: E501
        """
        pass

    def test_v1_get_project_instances(self):
        """Test case for v1_get_project_instances

        Get Instances in Project  # noqa: E501
        """
        pass

    def test_v1_get_projects(self):
        """Test case for v1_get_projects

        Get Projects  # noqa: E501
        """
        pass

    def test_v1_get_snapshot(self):
        """Test case for v1_get_snapshot

        Get Instance Snapshots  # noqa: E501
        """
        pass

    def test_v1_get_snapshots(self):
        """Test case for v1_get_snapshots

        Get Instance Snapshots  # noqa: E501
        """
        pass

    def test_v1_patch_instance(self):
        """Test case for v1_patch_instance

        Update Instance  # noqa: E501
        """
        pass

    def test_v1_pause_instance(self):
        """Test case for v1_pause_instance

        Pause an Instance  # noqa: E501
        """
        pass

    def test_v1_ready(self):
        """Test case for v1_ready

        API Status  # noqa: E501
        """
        pass

    def test_v1_reboot_instance(self):
        """Test case for v1_reboot_instance

        Reboot an Instance  # noqa: E501
        """
        pass

    def test_v1_restore_snapshot(self):
        """Test case for v1_restore_snapshot

        Restore a Snapshot  # noqa: E501
        """
        pass

    def test_v1_set_instance_peripherals(self):
        """Test case for v1_set_instance_peripherals

        Set Instance Peripherals  # noqa: E501
        """
        pass

    def test_v1_set_instance_state(self):
        """Test case for v1_set_instance_state

        Set state of Instance  # noqa: E501
        """
        pass

    def test_v1_snapshot_delete(self):
        """Test case for v1_snapshot_delete

        Delete a Snapshot  # noqa: E501
        """
        pass

    def test_v1_snapshot_rename(self):
        """Test case for v1_snapshot_rename

        Rename a Snapshot  # noqa: E501
        """
        pass

    def test_v1_start_instance(self):
        """Test case for v1_start_instance

        Start an Instance  # noqa: E501
        """
        pass

    def test_v1_stop_instance(self):
        """Test case for v1_stop_instance

        Stop an Instance  # noqa: E501
        """
        pass

    def test_v1_unpause_instance(self):
        """Test case for v1_unpause_instance

        Unpause an Instance  # noqa: E501
        """
        pass

    def test_v1_upload_image_data(self):
        """Test case for v1_upload_image_data

        Upload Image Data  # noqa: E501
        """
        pass

    def test_v1_users_login(self):
        """Test case for v1_users_login

        Log In  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()
