const readline = require('readline')
const { ArmApi, ApiClient } = require('@arm-avh/avh-api');

const BearerAuth = ApiClient.instance.authentications['BearerAuth']
const api = new ArmApi()

function prompt (prompt) {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
  });
  return new Promise((resolve) => {
    rl.question(prompt, resolve)
  }).finally(() => {
    rl.close()
  })
}

function sleep (ms) {
  return new Promise((resolve) => {
    setTimeout(resolve, ms);
  });
}

async function waitForState (instance, callback) {
  instance = await api.v1GetInstance(instance.id)
  while (!callback(instance.state)) {
    if (instance.state === 'error') {
      throw new Error('Instance is in error state')
    }
    await sleep(1000);
    instance = await api.v1GetInstance(instance.id)
  }
  return instance
}

async function main() {
  const apiToken = process.env.API_TOKEN || await prompt('Please enter AVH API Token: ')

  console.log('Logging in...');
  const authInfo = await api.v1AuthLogin({ apiToken });
  BearerAuth.accessToken = authInfo.token

  console.log('Listing projects...');
  let projects = await api.v1GetProjects();
  let project = projects[0];

  console.log('Finding software...');
  const softwares = (await api.v1GetModelSoftware('stm32u5-b-u585i-iot02a')).filter(software => software.buildid === 'WB')

  if (!softwares.length > 0) {
    throw new Error('Unable to find software for STM32');
  }
  const software = softwares[0];

  console.log('Selected software', software);


  console.log('Creating VM...')
  let instance = await api.v1CreateInstance({
    project: project.id,
    name: "STM32U5",
    flavor: 'stm32u5-b-u585i-iot02a',
    os: software.version,
    osbuild: software.buildid
  })

  console.log('Waiting for VM to finish creating...')
  instance = await waitForState(instance, state => state !== 'creating')

  console.log('VM Created successfully')
}

if (require.main === module) {
  main().catch((error) => {
    console.error('Error: ', error)
    process.exit(1)
  })
}

module.exports = main
