#! /bin/bash

GLOBIGNORE="expr*.cpp"
for file in *.cpp;
do
filename=$(basename $file)
MFILE="$(tr '[:lower:]' '[:upper:]' <<< ${filename:0:1})${filename:1}"
MAFILE="$(tr '[:lower:]' '[:upper:]' <<< $filename)"
echo "${MFILE%.*}::${MFILE%.*}() : Symbol(${MAFILE%.*}){}" >> $file
done 


#sed -i '$d' $file
# echo "#include \""${file%.*}.h\" $(cat $file)" >> $file 
# echo "#include \"exprbin.h\" $(cat $file)" > $file
