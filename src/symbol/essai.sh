#! /bin/bash

for file in *.h;
do
filename="$(tr '[:lower:]' '[:upper:]' <<< ${file:0:1})${file:1}"
rm $file
cp test.txt $file
sed -i "s/default/${filename%%.*}/g" $file
done
