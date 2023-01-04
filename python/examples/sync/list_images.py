import asyncio
import logging
import os
import re
from websockets import client as ws
import sys

import avh_api as AvhAPI
from avh_api.api import arm_api
from avh_api.model.instance_console_endpoint import InstanceConsoleEndpoint
from avh_api.model.instance_state import InstanceState
from pprint import pprint

import ssl
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

if len(sys.argv) < 3:
  print('Usage: %s <ApiEndpoint> <ApiToken> [vmName]' % sys.argv[0])
  exit(-1)

apiEndpoint = sys.argv[1]
apiToken = sys.argv[2]
if len(sys.argv) > 3:
  vmName = sys.argv[3]
else:
  vmName = 'STM32U5-BSP-Test'

exitStatus = 0

async def main():
  global exitStatus
  global api_instance

  configuration = AvhAPI.Configuration(
      host = apiEndpoint
  )
  # Enter a context with an instance of the API client
  with AvhAPI.ApiClient(configuration=configuration) as api_client:
    # Create an instance of the API class
    api_instance = arm_api.ArmApi(api_client)

    # Log In
    try:
        # Log In
        token_response = api_instance.v1_auth_login({
          "api_token": apiToken
        })
        print('Logged in')
        configuration.access_token = token_response.token
    except AvhAPI.ApiException as e:
        print("Exception when calling v1_auth_login: %s\n" % e)
        exit(1)

    print('Listing images...')
    api_response = api_instance.v1_get_images()
    pprint(api_response)

asyncio.run(asyncio.wait_for(main(), 120))
exit(0)
