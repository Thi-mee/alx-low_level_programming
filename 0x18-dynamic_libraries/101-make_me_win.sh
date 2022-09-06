#!/bin/bash
wget -O /tmp/libinjector.so https://github.com/Thi-mee/alx-low_level_programming/raw/master/0x17-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
