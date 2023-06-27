#!/bin/sh

set -xe

FILES="main.cpp cmd.cpp"
FLAGS="-std=c++17 -Wall -Wextra"

g++ -c $FILES $FLAGS
g++ -o main *.o $FLAGS

