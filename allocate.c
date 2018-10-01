#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

//int32_t *mem;
mem=NULL;
int allocate()
{
   if(!mem)
   {
      printf("State the number of 32-bits block of memory to be allocated:-\t");
      scanf("%d",&size);
      mem = (int32_t *) malloc(size*4);
      memlast=(uint32_t *)malloc(sizeof(uint32_t *));
      memlast=mem+(size-1);
      printf("The starting address of allocated block is %p\n\n",mem);
      printf("\nThe size of the memory address is %ld",sizeof(mem));
      printf("\nThe starting address of the last block is %p \n",memlast);
   }
   else
   {
      printf("Memory block is already allocated\n\n");
   }

   return 0;
}
