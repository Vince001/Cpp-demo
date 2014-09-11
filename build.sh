#!/bin/bash

incdir="/usr/include/c++/4.8"
incdir1="/usr/include/x86_64-linux-gnu/c++/4.8"
incdir2="/usr/include"
#incdir3="/usr/include"
cppfile=main.cpp
CC_FLAGS="-O2 ""-Wno-unused-result"

echo g++ -I $incdir -I $incdir1 -I $incdir2 $CC_FLAGS $cppfile
g++ -I $incdir -I $incdir1 -I $incdir2 $CC_FLAGS $cppfil
