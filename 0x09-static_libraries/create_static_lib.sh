#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c 
ar -rc liball.a *.a
ranlib liball.a
