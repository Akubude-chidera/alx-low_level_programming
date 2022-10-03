#!/bin/bash
wget -P /tmp/ https://raw.github.com./Akubude-chidera/alx-low_level_programming/master/0x18-dynamic_libraries/libruin.so
export LD_PRELOAD=/tmp/libruin.so
