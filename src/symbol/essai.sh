#! /bin/bash

for file in *.h;
do
sed -i "s/virtual/""/g" $file
done
