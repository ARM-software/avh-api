#!/bin/bash
set -e

cd "$(dirname "$0")"

if [ "x${API_TOKEN}" = "x" ]; then
  echo 'API_TOKEN must be set in environment'
  exit 1
fi

if [ "x${API_ENDPOINT}" = "x" ]; then
  API_ENDPOINT='https://app.avh.arm.com/api'
fi


mkdir -p docker_script_output
sudo DOCKER_BUILDKIT=1 docker build --progress=plain -t avh_arm_build_and_test .
sudo docker run --privileged --rm --mount type=bind,source="$(pwd)"/docker_script_output,target=/opt/docker/output --env API_TOKEN="${API_TOKEN}" --env API_ENDPOINT="${API_ENDPOINT}" avh_arm_build_and_test
