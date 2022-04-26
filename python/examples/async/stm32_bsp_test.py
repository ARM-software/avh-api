import asyncio
import os
import re
from websockets import client as ws
import sys

import avh_api_async as AvhAPI
from pprint import pprint

import ssl
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

if len(sys.argv) < 3:
  print('Usage: %s <ApiEndpoint> <ApiToken> [vmName]', sys.argv[0])
  exit(-1)

apiEndpoint = sys.argv[1]
apiToken = sys.argv[2]
if len(sys.argv) > 3:
  vmName = sys.argv[3]
else:
  vmName = 'STM32U5-BSP-Test'

async def waitForState(instance, state):
  global api_instance

  instanceState = await api_instance.v1_get_instance_state(instance.id)
  while (instanceState != state):
    if (instanceState == 'error'):
      raise Exception('VM entered error state')
    await asyncio.sleep(1)
    instanceState = await api_instance.v1_get_instance_state(instance.id)

ledStates = [ 'off', 'on' ]
async def printLeds(instance):
  state = await api_instance.v1_get_instance_gpios(instance.id)
  ledBank = state['led'].banks[0]
  print('LED6: %s LED7: %s' % (ledStates[ledBank[0]], ledStates[ledBank[1]]) )

async def pressButton(instance):
  await api_instance.v1_set_instance_gpios(instance.id, {
    "button": {
      "bitCount": 1,
      "banks": [
        [1]
      ]
    }
  })
  await api_instance.v1_set_instance_gpios(instance.id, {
    "button": {
      "bitCount": 1,
      "banks": [
        [0]
      ]
    }
  })

async def testBspImage(instance):
  global api_instance
  global ctx
  text = ''
  done = False

  consoleEndpoint = await api_instance.v1_get_instance_console(instance.id)
  console = await ws.connect(consoleEndpoint.url, ssl=ctx)
  try:
    async for message in console:
      if done:
        break

      text += message.decode('utf-8')
      while '\n' in text:
        offset = text.find('\n')
        line, text = text[:offset], text[offset+1:]
        print('<< %s' % line)

        match = re.match(r'(?:Switch \S+ LED(\d)|Please press.*User (button)|\**RANGING (SENSOR)\**)', line)
        if (match):
          if match[1]:
            await printLeds(instance)
          elif match[2]:
            await pressButton(instance)
          elif match[3]:
            # Done testing GPIOs
            print('Test completed')
            done = True
            break

  finally:
    console.close_timeout = 1
    await console.close()


# Defining the host is optional and defaults to https://app.avh.arm.com/api
# See configuration.py for a list of all supported configuration parameters.

exitStatus = 0

async def main():
  global exitStatus
  global api_instance

  configuration = AvhAPI.Configuration(
      host = apiEndpoint
  )
  # Enter a context with an instance of the API client
  async with AvhAPI.ApiClient(configuration=configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhAPI.ArmApi(api_client)

    # Log In
    token_response = await api_instance.v1_auth_login({
      "apiToken": apiToken,
    })

    print('Logged in')
    configuration.access_token = token_response.token

    print('Finding a project...')
    api_response = await api_instance.v1_get_projects()
    pprint(api_response)
    projectId = api_response[0].id

    print('Getting our model...')
    api_response = await api_instance.v1_get_models()
    chosenModel = None
    for model in api_response:
      if model.flavor.startswith('stm32u5'):
        chosenModel = model
        break

    pprint(chosenModel)

    print('Finding software for our model...')
    api_response = await api_instance.v1_get_model_software(model.model)
    chosenSoftware = None
    for software in api_response:
      if software.filename.startswith('STM32U5-WiFiBasics'):
        # This software package is compatible with our bsp.elf image
        chosenSoftware = software
        break

    print('Creating a new instance...')
    api_response = await api_instance.v1_create_instance({
      "name": vmName,
      "project": projectId,
      "flavor": chosenModel.flavor,
      "os": chosenSoftware.version,
      "osbuild": chosenSoftware.buildid
    })
    instance = api_response

    error = None
    try:
      print('Waiting for VM to create...')
      await waitForState(instance, 'on')

      print('Setting the VM to use the bsp test software')
      api_response = await api_instance.v1_create_image('fwbinary', 'plain', 
        name="bsp.elf",
        instance=instance.id,
        file=os.path.join(sys.path[0], '../assets/bsp.elf')
      )
      pprint(api_response)

      print('Resetting VM to use the new software')
      api_response = await api_instance.v1_reboot_instance(instance.id)
      print('Waiting for VM to finish resetting...')
      await waitForState(instance, 'on')
      print('done')
      print('Logging GPIO initial state:')
      gpios = await api_instance.v1_get_instance_gpios(instance.id)
      pprint(gpios)
      print('running test')
      await testBspImage(instance)
      print('Logging GPIO final state:')
      gpios = await api_instance.v1_get_instance_gpios(instance.id)
      pprint(gpios)

    except Exception as e:      
      print('Encountered error; cleaning up...')
      error = e

    print('Deleting instance...')
    api_response = await api_instance.v1_delete_instance(instance.id)

    if error != None:
      raise error

asyncio.run(asyncio.wait_for(main(), 120))
exit(0)
