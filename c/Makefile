API = https://app.avh.arm.com/api
USERNAME = username
PASSWORD = password

API_URL = $(API)/untaggedapi.json
.PHONY: example build all update install

all: build

update:
	@echo Ensuring openapi spec is up-to-date
	@curl -k $(API_URL) -o openapi-fetch.json
	@if ! diff -q openapi-fetch.json openapi.json; then rm -f openapi.json; mv openapi-fetch.json openapi.json; else rm -f openapi-fetch.json; fi

api: config.json openapi.json
	rm -rf api
	openapi-generator-cli generate -i openapi.json -g c -c config.json -o api/

build/.built: api
	[ -d build ] || mkdir build 
	cmake -S api -B build
	cmake --build build
	touch build/.built

build: build/.built

install: build
	cmake --install build

example:
	@echo "*** Example requires make install to have been completed successfully ***"
	make -C example

clean:
	rm -rf build
	make -C example clean
