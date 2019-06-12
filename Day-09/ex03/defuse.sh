#!/bin/sh
touch bomb.txt
touch -A -000001 -a bomb.txt
stat -t %X -t %s -f %a  bomb.txt
