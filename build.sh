#!/bin/sh

set -xe

FILES="src/main.cpp src/cmd.cpp src/string_utils.cpp"
INCLUDES="includes/"
FLAGS="-std=c++17 -Wall -Wextra"

clang++ -c -I $INCLUDES $FILES $FLAGS
clang++ -o main *.o $FLAGS
rm *.o
