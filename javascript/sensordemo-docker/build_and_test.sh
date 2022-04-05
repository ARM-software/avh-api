#! /bin/bash
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
