#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "allocate.h"
int allocate()
{
   int size;
   //int32_t *mem;
   printf("State the number of 32-bits of memory to be allocated:-\t");
   scanf("%d",&size);
   mem = (int32_t *) malloc(size*4);
   printf("The starting address of allocated block is %p\n",mem);
   return 0;
}
