#-*-Makefile-*-

prog: main.o help.o allocate.o write.o disp.o 
	gcc main.o help.o allocate.o write.o disp.o -o prog
main.o: main.c  
	gcc -c main.c 
help.o: help.c 
	gcc -c help.c 
allocate.o: allocate.c
	gcc -c allocate.c
write.o: write.c
	gcc -c write.c
disp.o: disp.c
	gcc -c disp.c
clear: 
	rm *.o
