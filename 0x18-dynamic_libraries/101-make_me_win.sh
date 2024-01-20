#!/bin/bash
wget -p .. https://raw.githubusercontent.com/fayoxis/alx-low_level_programming/master/0x18-dynamic_libraries/libexam.so
export LD_PRELOAD="$PWD/../libexam.so"
