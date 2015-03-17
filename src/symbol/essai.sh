#! /bin/bash

for file in expr*.h;
do
sed -i 1d $file
echo "#include \"exprbin.h\" $(cat $file)" > $file
done
