"""
    Arm API

       This documents the Arm Virtual Hosting REST API.  For other examples and API clients such as python or javascript please see [API Clients (python/javascript)](https://github.com/ARM-software/avh-api).   For a guide on using this interface please see [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   ## Links   - [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   - [API Clients (python/javascript)](https://github.com/arm-software/avh-api)     # noqa: E501

    The version of the OpenAPI document: 3.15.0-15704
    Generated by: https://openapi-generator.tech
"""


import sys
import unittest

import avh_api
from avh_api.model.text_input import TextInput
from avh_api.model.touch_curve_input import TouchCurveInput
from avh_api.model.touch_input import TouchInput
globals()['TextInput'] = TextInput
globals()['TouchCurveInput'] = TouchCurveInput
globals()['TouchInput'] = TouchInput
from avh_api.model.instance_input import InstanceInput


class TestInstanceInput(unittest.TestCase):
    """InstanceInput unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testInstanceInput(self):
        """Test InstanceInput"""
        # FIXME: construct object with mandatory attributes with example values
        # model = InstanceInput()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
