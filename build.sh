#!/bin/bash

all_shas=(SHA*)

for ((i = 0; i < ${#all_shas[@]}; i++)); do
    # include ssl and crypto
    gcc ${all_shas[$i]} -o ${all_shas[$i]%??} -lssl -lcrypto -w 
done


