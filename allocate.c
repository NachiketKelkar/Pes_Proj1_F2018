
/*
*********************************************************************************************************************
FILENMAE	:allocate.c
DESCRIPTION	:Function to allocate 32-bit blocks of memory.The user specifies number of 32 bit blocks to allocate
AUTHOR NAME	:Puneet Bansal & Nachiket Kelkar
TOOLS USED	:GCC		
*********************************************************************************************************************
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "allocate.h"


int allocate()
{
   if(!mem)
   {
      printf("\nState the number of 32-bits block of memory to be allocated:-\t\n>>");
      scanf("\n%d",&size);										//User enter the number of 32 bit blocks that needs to be allocated
      mem = (uint32_t *) malloc(size*4);								//pointer to pointing to the starting address of the first block
      memlast=(uint32_t *)malloc(sizeof(uint32_t *));
      memlast=mem+(size-1);										//pointer pointing to the starting address of the last 32bit block
      printf("\n****MEMORY ALLOCATED****");
      printf("\nEnter the function you would like to perform or type help to see the menu\n>>");
   }
   else
   {
      printf("Memory block is already allocated\Enter the function you would like to perform or enter help to see the menu\n>>");
   }

   return 0;
}
