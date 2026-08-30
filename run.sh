#!/bin/bash

# The purpose of this file is to avoid the default CMake command set into one command
# Works on Linux and macOS
# Make this file executable once with: chmod +x run.sh
# After that use ./run.sh instead of typing the full CMake commands!!!

cmake -S . -B build &&
cmake --build build &&
./build/Persephone


