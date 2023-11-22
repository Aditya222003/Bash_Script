#!/bin/bash

echo -n " Enter New Number : "
read var

if [[ $var -gt 10 ]]
then
	echo " The variable is greater then 10. "
else 
	echo " The Variable is equal or less than 10 "
fi
