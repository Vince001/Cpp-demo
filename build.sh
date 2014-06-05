#!/bin/bash

incdir="/usr/include/c++/4.8"
cppfile=main.cpp
CC_FLAGS="-O2"

g++ -I $incdir $CC_FLAGS $cppfile
