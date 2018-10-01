#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "allocate.h"


int allocate()
{
   if(!mem)
   {
      printf("\nState the number of 32-bits block of memory to be allocated:-\t");
      scanf("\n%d",&size);
      mem = (uint32_t *) malloc(size*4);
      memlast=(uint32_t *)malloc(sizeof(uint32_t *));
      memlast=mem+(size-1);
      printf("\n****MEMORY ALLOCATED****");
      //printf("\nThe starting address of the first allocated 32-bit block is %p\n",mem);
      //printf("\nThe size of the memory address is %ld",sizeof(mem));
      //printf("\nThe starting address of the last allocated 32-bit block is %p \n",memlast);
      printf("\nEnter the function you would like to perform or type help to see the menu\n");
   }
   else
   {
      printf("Memory block is already allocated\n\n");
   }

   return 0;
}
