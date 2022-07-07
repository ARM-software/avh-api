FROM ubuntu:jammy
RUN apt-get update
RUN apt-get -y install make cmake gcc libssl-dev libwebsockets-dev libcurl4-openssl-dev
RUN mkdir /api

WORKDIR /api
COPY api ./api/
COPY Makefile openapi.json config.json ./
RUN make build
RUN make install
RUN ldconfig

COPY example ./example/
RUN make example

ENTRYPOINT ["/api/example/example"]
