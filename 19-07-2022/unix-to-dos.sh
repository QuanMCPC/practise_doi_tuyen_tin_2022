#!/bin/bash
find -type f \( -name "*.cpp" -o -name "*.inp" -o -name "*.INP" \) -exec unix2dos {} \;
