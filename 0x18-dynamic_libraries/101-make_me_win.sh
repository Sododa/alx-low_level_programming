#!/bin/bash

# get the last result from the Giga Millions program
result=$(./gm | tail -n 1)

# convert the numbers to their square root
sqrt_numbers=$(echo "$result" | awk '{print $1, sqrt($2), sqrt($3), sqrt($4), sqrt($5), $6}')

# display the result
echo "Original Result: $result"
echo "Result with Square Roots: $sqrt_numbers"
