#!/bin/sh

set -xe

FILES="main.cpp cmd.cpp string_utils.cpp"
FLAGS="-std=c++17 -Wall -Wextra"

clang++ -c $FILES $FLAGS
clang++ -o main *.o $FLAGS
