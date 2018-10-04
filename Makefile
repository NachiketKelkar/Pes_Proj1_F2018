#-*-Makefile-*-

prog: main.o help.o allocate.o write.o disp.o freee.o ext.o invert.o write_pattern.o verify_pattern.o Pattern_gen.o
	gcc main.o help.o allocate.o write.o disp.o freee.o ext.o invert.o write_pattern.o verify_pattern.o Pattern_gen.o -lm -o prog
main.o: main.c main.h help.h
	gcc -c main.c
help.o: help.c help.h
	gcc -c help.c
allocate.o: allocate.c allocate.h
	gcc -c allocate.c
write.o: write.c write.h allocate.h
	gcc -c write.c
disp.o: disp.c disp.h allocate.h write.h
	gcc -c disp.c
freee.o: freee.c freee.h allocate.h
	gcc -c freee.c
invert.o: invert.c invert.h allocate.h write.h
	gcc -c invert.c
write_pattern.o: write_pattern.c write_pattern.h write.h Pattern_gen.h allocate.h disp.h
	gcc -c write_pattern.c
verify_pattern.o: verify_pattern.c verify_pattern.h write.h Pattern_gen.h allocate.h disp.h
	gcc -c verify_pattern.c
Pattern_gen.o: Pattern_gen.c Pattern_gen.h
	gcc -lm -c Pattern_gen.c
ext.o: ext.c ext.h
	gcc -c ext.c
test: prog testf.txt
	./prog <testf.txt
clean:
	rm *.o
