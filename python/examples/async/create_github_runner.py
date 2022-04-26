import asyncio
import re
from websockets import client as ws
import sys

import avh_api_async as AvhAPIAsync
from pprint import pprint

if len(sys.argv) < 3:
  print('Usage: %s <ApiEndpoint> <ApiToken> <GithubRunnerScope> <GithubPAT>', sys.argv[0])
  print('\tGithubRunnerScope: eg yourOrg/yourRepo for https://github.com/yourorg/yourrepo.git or simply yourOrg')
  print('\tGithubPAT: GitHub Personal Access Token to register the runner (GitHub Settings -> Developer Settings -> Personal Access Tokens)')
  exit(-1)

apiEndpoint = sys.argv[1]
apiToken = sys.argv[2]

if len(sys.argv) > 3:
  runnerScope = sys.argv[3]
else:
  runnerScope = input('Please enter desired runner scope: ')

if len(sys.argv) > 4:
  githubPat = sys.argv[4]
else:
  githubPat = input('Please enter github personal access token: ')

async def waitForState(instance, state):
  global api_instance

  instanceState = await api_instance.v1_get_instance_state(instance.id)
  while (instanceState != state):
    if (instanceState == 'error'):
      raise Exception('VM entered error state')
    await asyncio.sleep(1)
    instanceState = await api_instance.v1_get_instance_state(instance.id)

# Initialize global state variables
stage = 1
done = False
async def configureInstance(instance):
  global done
  text = ''

  # Give the VM time to finish booting
  await asyncio.sleep(5)

  consoleEndpoint = await api_instance.v1_get_instance_console(instance.id)
  console = await ws.connect(consoleEndpoint.url)

  async def handleText(text):
    global githubPat, runnerScope, done, stage

    if stage == 1:
      # Log in
      match = re.match(r'(?:(raspberrypi login:)|(Password:)|.*(pi\@raspberrypi:~\$))', text) 
      if (match):
        pprint(match)
        if match[1]:
          await console.send('pi\n')
        elif match[2]:
          await console.send('raspberry\n')
        elif match[3]:
          print('== Logged in ==')
          # Hit enter to let the network code continue
          await console.send('\n')
          stage += 1
        return True
    elif stage == 2:
      # Ensure network is connected, then kick off package installations
      match = re.match(r'(?:.*(pi\@raspberrypi:~\$)|.*default via (\S+) dev eth0)', text)
      if (match):
        if (match[1]):
          await asyncio.sleep(1)
          await console.send('ip route\n')
        elif (match[2]):
          stage += 1
          await console.send((
            'sudo apt-get update && ',
            'sudo apt-get -y install docker.io curl jq && ',
            'echo "PACKAGE INSTALLATION SUCCESS" || echo "PACKAGE INSTALLATION FAILED"\n'))
        return True
    elif stage == 3:
      # Watch for package installation success
      match = re.match(r'(?:.*(?<!echo ")(PACKAGE INSTALLATION SUCCESS)|.*(?<!echo ")(PACKAGE INSTALLATION FAILED))', text)
      if (match):
        if (match[1]):
          stage += 1
        elif (match[2]):
          raise Exception('Package installation failed')
        return True
    elif stage == 4:
      # Install github runner
      match = re.match(r'(?:.*(pi\@raspberrypi:~\$))', text)
      if match:
        await console.send('curl -s https://raw.githubusercontent.com/actions/runner/main/scripts/create-latest-svc.sh | sed -e "s/-x64-/-arm64-/g" | RUNNER_CFG_PAT="%s" bash -s -- -s "%s" -n "avhrunner"\n' % (githubPat, runnerScope))
        stage += 1
    elif stage == 5:
      match = re.match(r'(?:.*error: (Failed to get a token)|.*(Started GitHub Actions Runner))', text)
      if match:
        if match[1]:
          raise Exception('Failed to register github runner with github, invalid github token or scope?')
        elif match[2]:
          # Success
          stage += 1
    else:
      match = re.match(r'(?:.*(pi\@raspberrypi:~\$))', text)
      if (match):
        done = True
    return False
  try:
    async for message in console:
      data = message.decode('UTF-8', errors='ignore')
      text += data

      while '\n' in text:
        offset = text.find('\n')
        line, text = text[:offset], text[offset+1:]
        print('%s' % line)
        await handleText(line)
      
      if await handleText(text):
        # Clear partial lines that were matched
        print('%s' % text, end='')
        text = ''
      
      if done:
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

  configuration = AvhAPIAsync.Configuration(
      host = apiEndpoint
  )
  # Enter a context with an instance of the API client
  async with AvhAPIAsync.ApiClient(configuration=configuration) as api_client:
    # Create an instance of the API class
    api_instance = AvhAPIAsync.ArmApi(api_client)

    # Log In
    print('Logging in...')
    token_response = await api_instance.v1_auth_login({
      "apiToken": apiToken,
    })

    print('Logged in')
    configuration.access_token = token_response.token

    print('Finding a project...')
    api_response = await api_instance.v1_get_projects()
    pprint(api_response)
    projectId = api_response[0].id

    print('Finding software for our model...')
    api_response = await api_instance.v1_get_model_software('rpi4b')
    software = api_response[0]
  
    print('Creating a new instance...')
    api_response = await api_instance.v1_create_instance({
      "name": 'Docker-Runner',
      "project": projectId,
      "flavor": 'rpi4b',
      "os": software.version,
      "osbuild": software.buildid
    })
    instance = api_response

    print('Waiting for VM to create...')
    await waitForState(instance, 'on')
    print('done')

    print('Connecting to VM and configuring packages')
    await configureInstance(instance)
    print('You can now use your runner')

asyncio.run(main())
exit(0)
