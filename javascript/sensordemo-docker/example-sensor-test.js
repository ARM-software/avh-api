const assert = require("assert");
const split2 = require("split2");
const wsstream = require("websocket-stream");
const { createReadStream } = require("fs");
const { PromiseSocket } = require("promise-socket")
const { ArmApi, ApiClient } = require('@arm-avh/avh-api');
const { writeFile } = require('fs/promises');
const { promisify } = require("util");
const { spawn, ChildProcess } = require("child_process");
const exec = promisify(require("child_process").exec);
const BearerAuth = ApiClient.instance.authentications['BearerAuth']
const api = new ArmApi()
const CONFIGURATION = {
  endpoint: process.env.API_ENDPOINT,
  apiToken: process.env.API_TOKEN,
}

function sleep(ms) {
  return new Promise((resolve) => {
    setTimeout(resolve, ms);
  });
}

async function waitForState(instance, callback) {
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

async function readSensor(ip, sensor) {
  const client = new PromiseSocket()
  await client.connect(80, ip)
  await client.writeAll('GET /Read_' + sensor + ' HTTP/1.0\r\n', 1024)
  const result = await client.readAll()
  client.destroy()
  return Number(result.toString()).toFixed(2)
}

async function readHumiditySensor(instance) {
  return await readSensor(instance.wifiIp, "Humidity")
}

async function readPressureSensor(instance) {
  return await readSensor(instance.wifiIp, "Pressure")
}

async function readTemperatureSensor(instance) {
  return await readSensor(instance.wifiIp, "Temperature")
}

/** @type {ChildProcess} */
let openVpn
async function startVpn(instance) {
  if (openVpn && openVpn.kill(0)) {
    console.log('OpenVPN already started')
    throw new Error('OpenVPN already started')
  }
  if (instance.state !== 'on') {
    console.log('Instance must be started to connect VPN', instance)
    throw new Error('Instance must be started to connect VPN')
  }

  const config = await api.v1GetProjectVpnConfig(instance.project, 'ovpn')
  console.log('Got OpenVPN Config')
  await writeFile('./vpnconfig.ovpn', config)

  openVpn = spawn('openvpn', ['--config', 'vpnconfig.ovpn'])
  openVpn.stdout.on('data', (data) => console.log(data.toString()))
  openVpn.stderr.on('data', (data) => console.log(data.toString()))
  for (let i=0; i<10; i++) {
    // Wait for openvpn link to establish
    console.log('Waiting for VPN link to establish...')
    try {
      await exec(`ping -c 1 ${instance.wifiIp}`)
      return true
    } catch (_) {}
  }
  return false
}

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

async function setup_instance() {
  const authInfo = await api.v1AuthLogin({ apiToken: CONFIGURATION.apiToken });
  BearerAuth.accessToken = authInfo.token

  let projects = await api.v1GetProjects();
  let project = projects[0];

  let firmware = "/opt/test/firmware.bin";

  let instance = await api.v1CreateInstance({
    project: project.id,
    name: "STM32U5-test",
    flavor: 'stm32u5-b-u585i-iot02a',
    os: '1.1.0',
    osbuild: 'WS'
  })

  console.log('Waiting for instance to finish creating...')
  instance = await waitForState(instance, state => state !== 'creating')

  console.log('Uploading new firmware...')
  const fileStream = createReadStream(firmware)
  await api.v1CreateImage('iotfirmware', 'plain', {
    instance: instance.id,
    file: fileStream
  })

  await api.v1RebootInstance(instance.id) // Reboot to load uploaded firmware
  console.log('Waiting for instance to boot.')
  instance = await waitForState(instance, state => state === 'on')

  return instance;
}

async function waitForWifi(instanceId) {
  const consoleEndpoint = await api.v1GetInstanceConsole(instanceId)
  const consoleStream = wsstream(consoleEndpoint.url, ['binary']);
  const testTimeout = setTimeout(async () => {
    console.log("Timeout waiting for Wifi to come up after 50 seconds");
    await consoleStream.destroy();
  }, 50000);
  consoleStream.read();
  let ssid
  return new Promise(async (resolve, reject) => {
    consoleStream.pipe(split2())
      .on('data', async function (line) {
        console.log("<<", line);
        let ssidMatch = line.match(/\s+\d+\s+(\S+)\s+ch\s+\d+\s+rss/);
        if (ssidMatch) {
          ssid = ssidMatch[1]
        } else if (line.includes("*** Please enter your wifi ssid")) {
          // Write the SSID
          consoleStream.write(`${ssid}\r\n`);
          console.log('>>', ssid);
        } else if (line.includes("*** Please enter your wifi password")) {
          // Write the password
          consoleStream.write("password\r\n");
          console.log('>>', 'password');
        } else if (line.includes('IP address :')) {
          const match = line.match(/IP address :\s*(\S+)\./);
          if (match && match[1] !== '0.0.0.0') {
            connected = true;
            resolve(match[1]);
            clearTimeout(testTimeout);
            consoleStream.destroy();
          }
        }
      })
      .on("error", async function (err) {
        console.log('error', err);
        reject(err);
      })
      .on("end", async function () {
        if (!connected) {
          reject('Connection closed prematurely');
        }
      });
  });
}

async function validateSensors(instance) {
  // set sensor ranges
  let temp_low = 20;
  let temp_high = 30;
  let press_low = 980;
  let press_high = 1030;
  let humid_low = 20;
  let humid_high = 70;

  // set initial values
  await api.v1SetInstancePeripherals(instance.id, {
    "temperature": 25.0,
    "pressure": 1005.0,
    "humidity": 45.0
  });

  let x = 0.0;
  // Run the test 1 time
  for (let i = 0; i < 1; i++) {
    // generate sensor values
    let temp_cur = (Math.round((25 + Math.sin(x) * ((temp_high - temp_low)/2)) * 4) * 0.25).toFixed(2)
    let press_cur = (1005 + (Math.sin(x) * ((press_high - press_low)/2))).toFixed(2)
    let humid_cur = (45 + (Math.sin(x) * ((humid_high - humid_low)/2))).toFixed(2)

    console.log("Setting sensor values : [*] T: %f, P: %f, H: %f", temp_cur, press_cur, humid_cur);
    await api.v1SetInstancePeripherals(instance.id, {
      "temperature": temp_cur.toString(),
      "pressure": press_cur.toString(),
      "humidity": humid_cur.toString()
    });

    // Give the webserver app time to update to current state of sensors
    await sleep(250);
    // Compare the sensor levels reported by the device
    const temp_result = await readTemperatureSensor(instance)
    const press_result = await readPressureSensor(instance)
    const humid_result = await readHumiditySensor(instance)

    console.log("Getting sensor values : [*] T: %f, P: %f, H: %f", temp_result, press_result, humid_result);

    if(temp_result.toString() !== temp_cur.toString())
    {
      console.log("Temperature Sensor returned bad value:  " + temp_result.toString() + " cur: " + temp_cur.toString())
      return false
    }

    if(press_result.toString() !== press_cur.toString())
    {
      console.log("Pressure Sensor returned bad value: " + press_result.toString() + " cur: " + press_cur.toString())
      return false
    }

    if(humid_result.toString() !== humid_cur.toString())
    {
      console.log("Humidity Sensor returned bad value: " + humid_result.toString())
      return false
    }

    x += Math.PI/20.0;
  }
  return true
}

describe("stm sensor check", function () {
  this.timeout(0);
  let instance;
  let wifiIp;
  before(async () => {
    instance = await setup_instance();
  });

  it('connects to wifi', async () => {
    console.log('Connecting to wifi...')
    wifiIp = await waitForWifi(instance.id)
    instance = await api.v1GetInstance(instance.id)
    assert(wifiIp === instance.wifiIp)
  });
  it('Is reachable over VPN', async () => {
    console.log('Connecting VPN...')
    instance = await waitForState({ id: instance.id }, state => state === 'on')
    const vpnStarted = await startVpn(instance)
    assert(vpnStarted)
  });
  it("sets and gets the sensors", async () => {
    console.log('Testing sensors...')
    instance = await waitForState({ id: instance.id }, state => state === 'on')
    const hasValidatedSensors = await validateSensors(instance)
    assert(hasValidatedSensors);
  });

  after(async () => {
    if (instance) {
      await api.v1DeleteInstance(instance.id)
    }
    if (openVpn) {
      openVpn.kill(9)
    }
  });
});
