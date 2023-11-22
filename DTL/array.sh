#!/bin/bash
arrvar=("AC" "TV" "Mobile")
arrvar+=("Dish washer")


for value in "${arrvar[@]}"
do 
	echo $value
done
