#!/bin/bash
gcc -Wall -Werror -Wextra -pedentic -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
