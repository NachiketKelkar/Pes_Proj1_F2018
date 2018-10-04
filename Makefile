#-*-Makefile-*-

prog: main.o help.o allocate.o write.o disp.o freee.o ext.o invert.o write_pattern.o verify_pattern.o Pattern_gen.o
	gcc main.o help.o allocate.o write.o disp.o freee.o ext.o invert.o write_pattern.o verify_pattern.o Pattern_gen.o -lm -o prog
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
freee.o: freee.c
	gcc -c freee.c
invert.o: invert.c
	gcc -c invert.c
write_pattern.o: write_pattern.c
	gcc -c write_pattern.c
verify_pattern.o: verify_pattern.c
	gcc -c verify_pattern.c
Pattern_gen.o: Pattern_gen.c
	gcc -lm -c Pattern_gen.c
ext.o: ext.c
	gcc -c ext.c
test: prog testf.txt
	./prog <testf.txt
clean:
	rm *.o
