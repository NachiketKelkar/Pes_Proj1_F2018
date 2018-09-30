#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int32_t *mem;

int allocate()
{
   int size;

   printf("State the number of 32-bits block of memory to be allocated:-\t");
   scanf("%d",&size);
   mem = (int32_t *) malloc(size);
   printf("The starting address of allocated block is %p\n",mem);
   return 0;
}
