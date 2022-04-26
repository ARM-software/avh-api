#! /bin/bash
set -e
if [ "x${API_ENDPOINT}" = "x" ]; then
  API_ENDPOINT='https://app.avh.arm.com/api'
fi

rm -f /opt/build/IOT_HTTP_WebServer/STM32CubeIDE/Debug/IOT_HTTP_WebServer.elf
cd IOT_HTTP_WebServer/STM32CubeIDE/Debug
make main-build

cp /opt/build/IOT_HTTP_WebServer/STM32CubeIDE/Debug/IOT_HTTP_WebServer.elf /opt/docker/output/
cp /opt/build/IOT_HTTP_WebServer/STM32CubeIDE/Debug/IOT_HTTP_WebServer.elf /opt/test/firmware.bin
cd /opt/test
npm ci
export REPORT_PATH=/opt/docker/output/report.json
npm run test
