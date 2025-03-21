FROM ubuntu:20.04

# Install dependencies for building CMake
RUN apt-get update && apt-get install -y \
    build-essential \
    libssl-dev \
    cmake \
    wget \
    unzip

# Download and extract CMake 3.2.3
RUN wget https://cmake.org/files/v3.2/cmake-3.2.3.zip && \
    unzip cmake-3.2.3.zip && \
    cd cmake-3.2.3 && \
    ./bootstrap && \
    make && \
    make install && \
    cd .. && \
    rm -rf cmake-3.2.3 cmake-3.2.3.zip

#Verify version
RUN cmake --version