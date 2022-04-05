#! /bin/bash
if [ "x${API_ENDPOINT}" = "x" ]; then
  API_ENDPOINT='https://app.avh.arm.com/api'
fi

set -e
(
  cd /opt
  curl "${API_ENDPOINT}/untaggedapi.json" -o test/openapi.json
  openapi-generator-cli generate -i test/openapi.json -g javascript -c test/apiconfig.json -o api/
  cd api
  npm install
  npm run build
)

rm -f /opt/build/IOT_HTTP_WebServer/STM32CubeIDE/Debug/IOT_HTTP_WebServer.elf
cd IOT_HTTP_WebServer/STM32CubeIDE/Debug
make main-build

RESULT=$?
if [ $RESULT -eq 0 ]; then
  cp /opt/build/IOT_HTTP_WebServer/STM32CubeIDE/Debug/IOT_HTTP_WebServer.elf /opt/docker/output/
  cp /opt/build/IOT_HTTP_WebServer/STM32CubeIDE/Debug/IOT_HTTP_WebServer.elf /opt/test/firmware.bin
  cd /opt/test
  npm ci
  export REPORT_PATH=/opt/docker/output/report.json
  npm run test
else
  echo Build failed 
  exit $RESULT
fi
