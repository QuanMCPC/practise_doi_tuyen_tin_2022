#!/bin/bash
for file in *.cpp; do
    echo "Converting $file"
    unix2dos $file
done

for file in *.INP; do
    echo "Converting $file"
    unix2dos $file
done