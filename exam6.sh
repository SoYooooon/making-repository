#!/bin/bash
func(){
	echo func $1 $2 $3
	return 100
}
echo "CALL func()"
func "hello" "World" "WoW"
echo "func return value: $?"

