#!/bin/bash
wget -P /tmp/ https://raw.github.com./herdeybayor/alx-low_level_programming/main/0x18-dynamic_libraries/libruin.so
export LD_PRELOAD=/tmp/libruin.so
