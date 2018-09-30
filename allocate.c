#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "allocate.h"
int allocate()
{
   //int size;
   //int32_t *mems,;
   mem=NULL;	
   printf("\nState the number of 32-bits of memory to be allocated:-\t");
   scanf("%d",&size);
   mem = (uint32_t *) malloc(size*4);
   memlast=(uint32_t *)malloc(sizeof(uint32_t *));
  memlast=mem+(size-1);
   printf("\nThe size of the memory address is %ld",sizeof(mem));
   printf("\nThe starting address of allocated block is %p \n",mem);
   printf("\nThe starting address of the last block is %p \n",memlast);
   return 0;
}
