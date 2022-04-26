import asyncio
import re
from websockets import client as ws
import time
import sys

import avh_api as AvhAPI
from avh_api.api import arm_api
from avh_api.model.instance_console_endpoint import InstanceConsoleEndpoint
from avh_api.model.instance_state import InstanceState
from pprint import pprint
if len(sys.argv) < 3:
  print('Usage: %s <ApiEndpoint> <ApiToken>', sys.argv[0])
  exit(-1)

apiEndpoint = sys.argv[1]
apiToken = sys.argv[2]

async def connectWiFi(consoleEndpoint: InstanceConsoleEndpoint):
  console = await ws.connect(consoleEndpoint.url)
  try:
    text = ''
    async for message in console:
      text += message.decode('utf-8')
      while '\n' in text:
        offset = text.find('\n')
        line, text = text[:offset], text[offset+1:]
        print('<< %s' % line)
        output = None
        if line.find('Please enter your wifi ssid') != -1:
          output = 'Arm'
        elif line.find('Please enter your wifi password') != -1:
          output = 'password'
        elif line.find('IP address :') != -1:
          match = re.search(r'IP address :\s*(\S+)\.', line)
          if match:
            ip = match.group(1)
            if (ip != '0.0.0.0'):
              return ip

        if (output):
          print('>> %s' % output)
          await console.send('%s\n' % output)  
  
  except Exception as e:
    print('Timed out connecting WiFi')
    print(e)
    console.close_timeout = 5
    await console.close()
    return False


# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = AvhAPI.Configuration(
    host = apiEndpoint
)

# Enter a context with an instance of the API client
with AvhAPI.ApiClient(configuration=configuration) as api_client:
  status = 0
  # Create an instance of the API class
  api_instance = arm_api.ArmApi(api_client)
  body = {} # dict | Authorization data ( Credentials|ApiToken|Token )

  # example passing only required values which don't have defaults set
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
  
  print('Finding a project...')
  api_response = api_instance.v1_get_projects()
  pprint(api_response)
  projectId = api_response[0].id

  print('Getting our model...')
  api_response = api_instance.v1_get_models()
  for model in api_response:
    if model.flavor.startswith('stm32u5'):
      chosenModel = model
      break

  pprint(model)

  print('Finding software for our model...')
  api_response = api_instance.v1_get_model_software(model.model)
  version = api_response[0].version
  
  try:
    print('Creating a new instance...')
    api_response = api_instance.v1_create_instance({
      "name": 'STM32U5-Test',
      "project": projectId,
      "flavor": model.flavor,
      "os": version
    })
    instance = api_response
  except AvhAPI.ApiException as e:
    print("Exception when calling v1_create_instance: %s\n" % e)
    exit(1)

  try:
    print("State: '%s' (%d)" % (instance.state, instance.state == 'creating'))
    print('Waiting for instance to create...')

    while (instance.state == InstanceState('creating')):
      time.sleep(1)
      print('.', end='')
      instance = api_instance.v1_get_instance(instance.id)
    print(' done')

    consoleEndpoint = api_instance.v1_get_instance_console(instance.id)
    loop = asyncio.get_event_loop()
    wifiIp = loop.run_until_complete(asyncio.wait_for(connectWiFi(consoleEndpoint), 10))

    print('Successfully started instance and acquired IP Address %s' % wifiIp)

    print('Powering down')
    api_instance.v1_stop_instance(instance.id)
    instance = api_instance.v1_get_instance(instance.id)

    while (instance.state != InstanceState('off')):
      time.sleep(1)
      print('.', end='')
      instance = api_instance.v1_get_instance(instance.id)
    print(' done')

    print('Taking a snapshot')
    api_response = api_instance.v1_create_snapshot(instance.id, { "name": "TestSnap" })
    pprint(api_response)
    snapshot = api_response

    print('Waiting for snapshot to complete')
    while snapshot.status.task == 'creating':
      time.sleep(1)
      print('.', end='')
      snapshot = api_instance.v1_get_snapshot(instance.id, snapshot.id)
    print(' done')

    print('Listing snapshots')
    api_response = api_instance.v1_get_snapshots(instance.id)
    pprint(api_response)

  except Exception as e:
    print('failed tests: %s' % e)
    status = 1


  print('Deleting instance...')
  api_response = api_instance.v1_delete_instance(instance.id)
  exit(status)
