#!/bin/bash
gcc *.o -shared -o libwinner.so
LD_PRELOAD=$PWD/libwinner.so

