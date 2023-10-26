#!/bin/bash
if [ -e test.test ]; then
	rm test.test
fi
norminette -R CheckDefine ft*
cc -Wall -Wextra -Werror *.c -o test.test
if [ -e test.test ]; then
	./test.test
fi
