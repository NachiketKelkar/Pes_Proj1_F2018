edit: Project1.o help.o allocate.o freee.o disp.o write.o invert.o write_pattern.o verify_pattern.o ext.o
	gcc -o edit Project1.o help.o allocate.o freee.o disp.o write.o invert.o write_pattern.o verify_pattern.o ext.o

Project1.o: Project1.c
	gcc -c Project1.c

help.o: help.c
	gcc -c help.c

allocate.o: allocate.c
	gcc -c allocate.c

freee.o: freee.c
	gcc -c freee.c

disp.o: disp.c
	gcc -c disp.c

write.o: write.c
	gcc -c write.c

invert.o: invert.c
	gcc -c invert.c

write_pattern.o: write_pattern.c
	gcc -c write_pattern.c

verify_pattern.o: verify_pattern.c
	gcc -c verify_pattern.c

ext.o: ext.c
	gcc -c ext.c

clean:
	rm edit Project1.o help.o allocate.o freee.o disp.o write.o invert.o write_pattern.o verify_pattern.o ext.o
