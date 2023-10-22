#!/bin/bash
if [ -e test.test ]; then
	rm test.test
fi
cc -Wall -Wextra -Werror *.c -o test.test
