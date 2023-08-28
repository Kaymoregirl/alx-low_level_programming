#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -C *.C
ar rc liball.a *.o
ranlib liball.a
