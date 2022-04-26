FROM public.ecr.aws/lts/ubuntu:20.04_stable

WORKDIR /root

RUN apt-get -qqy update && \
    DEBIAN_FRONTEND=noninteractive apt-get -qqy --no-install-recommends install \
    ca-certificates \
    curl \
    wget \
    iputils-ping \
    openvpn \
    iproute2 \ 
    jq \
    unzip \
    gpg \
    vim 

WORKDIR /opt/to_install

RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | gpg --dearmor - | tee /usr/share/keyrings/kitware-archive-keyring.gpg >/dev/null \
    && wget --no-check-certificate https://apt.kitware.com/kitware-archive.sh \
    && chmod +x kitware-archive.sh \
    && ./kitware-archive.sh \
    && DEBIAN_FRONTEND=noninteractive apt-get -qqy --no-install-recommends install git \
    cmake \
    gperf \
    ccache \ 
    dfu-util \
    device-tree-compiler \ 
    python3.8-venv \
    python3-dev \
    python3-pip \
    python3-setuptools \
    python3-tk \
    python3-wheel \
    xz-utils \
    file \
    make

RUN curl -sL https://deb.nodesource.com/setup_14.x -o nodesource_setup.sh
RUN chmod +x nodesource_setup.sh
RUN ./nodesource_setup.sh 
RUN apt-get install nodejs 

WORKDIR /opt/build/

# If using x64 runner
ARG TARGETARCH
RUN echo PLATFORM: ${TARGETARCH};  \
    if [ "${TARGETARCH}x" = "amd64x" ]; then \
      wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2 && \
      tar -xvf gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2; \
    else \
      wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-aarch64-linux.tar.bz2 && \
      tar -xjvf gcc-arm-none-eabi-10.3-2021.10-aarch64-linux.tar.bz2; \
    fi
      
ENV PATH="/opt/build/gcc-arm-none-eabi-10.3-2021.10/bin/:$PATH"

WORKDIR /opt/test/
COPY package.json ./
COPY example-sensor-test.js test/index.js
RUN npm install

WORKDIR /opt/build/

COPY IOT_HTTP_WebServer/ IOT_HTTP_WebServer/
COPY build_and_test.sh .
RUN mkdir -p /opt/docker/output

ENTRYPOINT ["/opt/build/build_and_test.sh"]
#CMD ["sleep", "30m"]
