# Usage

## Dependencies
```
pip3 install websockets
```

## Running

```
make APITOKEN='yourToken' examples/sync/instance_create_snapshot_delete.py
make APITOKEN='yourToken' examples/async/stm32_bsp_test.py
```


## Regenerating the API
- This requires nodejs and the openapi-generator package installed
  1. Ensure nodejs is installed using the package manager of your choice
  2. Install the generator: `sudo npm install -g @openapitools/openapi-generator-cli && openapi-generator-cli version`
  3. `make update api asyncapi`
