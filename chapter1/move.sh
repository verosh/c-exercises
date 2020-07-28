#!/bin/bash

# This file will replace every .c file starting with "e" with the prefix "sec"

for filename in e*.c; do
    newfile="${filename/e/sec}"
    mv $filename $newfile
done
