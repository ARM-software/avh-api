# Usage

## Dependencies
```
pip3 install avh-api avh-api-async websockets python-dateutil aiohttp six urllib3
```

## Running

```
python3 examples/sync/instance_create_snapshot_delete.py https://app.avh.arm.com/api <APITOKEN>
python3 examples/async/stm32_bsp_test.py https://app.avh.arm.com/api <APITOKEN>
python3 examples/async/create_github_runner.py https://app.avh.arm.com/api <APITOKEN>
```

## Regenerating the API
- This requires nodejs and the openapi-generator package installed
  1. Ensure nodejs is installed using the package manager of your choice
  2. Install the generator: `sudo npm install -g @openapitools/openapi-generator-cli && openapi-generator-cli version`
  3. `make update all`
