# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and language
project(SequenceConverter C)

# Set the C standard to C99 for compatibility, based on your previous setup
set(CMAKE_C_STANDARD 99)

# Specify the GCC compiler explicitly if necessary
set(CMAKE_C_COMPILER /usr/bin/gcc)

# Add the executable target
add_executable(sequence_converter sequence_converter.c)
