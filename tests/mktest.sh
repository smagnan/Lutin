echo "Test ID;Return code validation;Out result;StdErr result;File creation result;Global result" >results.csv
nOk=0
nKo=0
nOptionalOk=0
nOptionalKo=0
nOptionalTotal=0
nMandatoryOk=0
nMandatoryKo=0
nMandatoryTotal=0
nTotal=0
nMis=0

for j in originaux nouveaux
do
	rm $j/lut
	cp ../src/bin/lut $j
	cd $j
	for i in ??.*
	do
	  ../test.sh $i ../results.csv
	  result=$?
	  if [ $result -eq 0 ]
	  then
		let "nKo=$nKo+1"
		if [[ $i == ??".OPT."* ]]
		then
			let "nOptionalKo=$nOptionalKo+1"
			let "nOptionalTotal=$nOptionalTotal+1"
		else
			let "nMandatoryKo=$nMandatoryKo+1"
			let "nMandatoryTotal=$nMandatoryTotal+1"
		fi
	  elif [ $result -eq 1 ]
	  then
		let "nOk=$nOk+1"
		if [[ $i == ??".OPT."* ]]
		then
			let "nOptionalOk=$nOptionalKo+1"
			let "nOptionalTotal=$nOptionalTotal+1"
		else
			let "nMandatoryOk=$nMandatoryKo+1"
			let "nMandatoryTotal=$nMandatoryTotal+1"
		fi
	  else
		let "nMis=$nMis+1"
	  fi
	  let "nTotal=$nTotal+1"
	done
	cd ..
done

echo "MANDATORY"
echo "Passed tests     : $nMandatoryOk"
echo "Failed tests     : $nMandatoryKo"
echo "-----------------------"
echo "Total            : $nMandatoryTotal"
echo ""

echo "OPTIONAL"
echo "Passed tests     : $nOptionalOk"
echo "Failed tests     : $nOptionalKo"
echo "-----------------------"
echo "Total            : $nOptionalTotal"
echo ""

echo "GENERAL"
echo "Passed tests     : $nOk"
echo "Failed tests     : $nKo"
echo "Misformed tests  : $nMis"
echo "-----------------------"
echo "Total            : $nTotal"
