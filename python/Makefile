API = https://app.avh.arm.com/api
APITOKEN = 

API_URL = $(API)/untaggedapi.json
.PHONY: $(wildcard examples/*/*.py) build all update

all: api asyncapi

update:
	@echo Ensuring openapi spec is up-to-date
	@curl -k $(API_URL) -o openapi-fetch.json
	@if ! diff -q openapi-fetch.json openapi.json; then rm -f openapi.json; mv openapi-fetch.json openapi.json; else rm -f openapi-fetch.json; fi

api: apiconf.json openapi.json
	rm -rf $@
	openapi-generator-cli generate -i openapi.json -g python -c apiconf.json -o api/

asyncapi: asyncapiconf.json openapi.json
	rm -rf $@
	openapi-generator-cli generate -i openapi.json -g python-legacy -c asyncapiconf.json -o asyncapi/

%/build: %
	cd $^; python3 setup.py build
	touch $@

$(wildcard examples/sync/*.py): api/build
	PYTHONPATH="$(PWD)/api" python3 $@ "$(API)" "$(APITOKEN)"

$(wildcard examples/async/*.py): asyncapi/build
	PYTHONPATH="$(PWD)/asyncapi" python3 $@ "$(API)" "$(APITOKEN)"

clean:
	rm -rf api
