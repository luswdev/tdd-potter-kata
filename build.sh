#!/bin/bash
export LANG="CPP"

mkdir -p build
cd build

cmake ..
make -j`nproc`
