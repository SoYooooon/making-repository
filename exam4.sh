#!/bin/bash
for i in {2..100}
do
	a=$((i-1))
	result=0
	for((j=$a;j>1;j--));
	do
		tmp=$(($i%$j));
		if [ "$tmp" -eq 0 ]; then
			result=1
			break
		fi
	done
	if [ "$result" -eq 0 ]; then
		echo "$i"
	fi
done

