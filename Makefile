#-*-Makefile-*-

prog: main.o help.o allocate.o freee.o
	gcc main.o help.o allocate.o freee.o -o prog

main.o: main.c
	gcc -c main.c
help.o: help.c
	gcc -c help.c
allocate.o: allocate.c
	gcc -c allocate.c
freee.o: freee.c
	gcc -c freee.c

clear:
	rm *.o
