#!/bin/bash
wget -P .. https://raw.githubusercontent.com/KDEE247/alx-low_level_programming_
/master/0x18-dynamic_libraries/libhacks.so
export LD_PRELOAD="$PWD/../libhacks.so"
