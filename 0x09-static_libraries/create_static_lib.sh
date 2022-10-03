#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra *.c
ar -crs liball.a *.o
