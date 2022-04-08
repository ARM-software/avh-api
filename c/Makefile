API = https://app.avh.arm.com/api
USERNAME = username
PASSWORD = password

API_URL = $(API)/untaggedapi.json
.PHONY: example build all update

all: api

update:
	@echo Ensuring openapi spec is up-to-date
	@curl -k $(API_URL) -o openapi-fetch.json
	@if ! diff -q openapi-fetch.json openapi.json; then rm -f openapi.json; mv openapi-fetch.json openapi.json; else rm -f openapi-fetch.json; fi

api: config.json openapi.json
	rm -rf api
	openapi-generator-cli generate -i openapi.json -g c -c config.json -o api/

build: api
	cd api; python3 setup.py build

example:
	$(error TODO)

clean:
	rm -rf api
