#!/bin/bash
if [ -e test.test ]; then
	rm test.test
fi
cc -Wall -Wextra -Werror test_ex**.c -o test.test
if [ -e test.test ]; then
	./test.test
fi
