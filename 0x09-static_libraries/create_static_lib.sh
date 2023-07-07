#!/bin/bash
gcc -c 0-isupper.c 0-memset.c 0-strcat.c
gcc -c 100-atoi.c
gcc -c 1-isdigit.c 1-memcpy.c 1-strncat.c
gcc -c 2-strchr.c 2-strlen.c 2-strncpy.c
gcc -c 3-islower.c 3-puts.c 3-strcmp.c
gcc -c 3-strspn.c
gcc -c 4-isalpha.c 4-strpbrk.c
gcc -c 5-strstr.c
gcc -c 6-abs.c
gcc -c 9-strcpy.c
ar -rcs liball.a *.o
