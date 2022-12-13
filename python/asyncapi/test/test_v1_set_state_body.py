# coding: utf-8

"""
    Arm API

       This documents the Arm Virtual Hosting REST API.  For other examples and API clients such as python or javascript please see [API Clients (python/javascript)](https://github.com/ARM-software/avh-api).   For a guide on using this interface please see [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   ## Links   - [API Quickstart](https://intercom.help/arm-avh/en/articles/6134791-quickstart-for-the-api-docs)   - [API Clients (python/javascript)](https://github.com/arm-software/avh-api)     # noqa: E501

    The version of the OpenAPI document: 3.15.0-15704
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import avh_api_async
from avh_api_async.models.v1_set_state_body import V1SetStateBody  # noqa: E501
from avh_api_async.rest import ApiException

class TestV1SetStateBody(unittest.TestCase):
    """V1SetStateBody unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test V1SetStateBody
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = avh_api_async.models.v1_set_state_body.V1SetStateBody()  # noqa: E501
        if include_optional :
            return V1SetStateBody(
                state = 'on'
            )
        else :
            return V1SetStateBody(
                state = 'on',
        )

    def testV1SetStateBody(self):
        """Test V1SetStateBody"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
