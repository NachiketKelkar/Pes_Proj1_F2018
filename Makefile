#-*-Makefile-*-

prog: main.o help.o allocate.o
	gcc main.o help.o allocate.o -o prog

main.o: main.c
	gcc -c main.c
help.o: help.c
	gcc -c help.c
allocate.o: allocate.c allocate.h
	gcc -c allocate.c

clear:
	rm *.o
