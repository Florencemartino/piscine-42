#!/bin/sh 
cat $1 | grep -i 'nicolas	bauer' contacts_hard.txt | awk -F " " '{ print $(NF - 1) }'
