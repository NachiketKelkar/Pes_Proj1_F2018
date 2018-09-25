#include<stdio.h>

int help()
{
   printf("Following functions are available for use:\n");
   printf("1.allocate - Allocates the block of memory for access\n");
   printf("2.freee - Frees the allocated memory\n");
   printf("3.disp - Displays the data written into the memory\n");
   printf("4.write - Writes the data to the memory\n");
   printf("5.invert - Inverts the data which is written into the memory\n");
   printf("6.write_pattern - Writes a pattern to memory based on seed value\n");
   printf("7.verify_pattern - Verifies the pattern written in to the memory\n");
   printf("8.ext - Exits the utility\n");
   return 0;
}
