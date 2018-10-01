#include<stdio.h>
#include<stdint.h>
#include"write.h"
#include"Pattern_gen.h"
#include"write_pattern.h"
#include "allocate.h"
#include "disp.h"

int write_pattern()
{
   long pattern;
   int length, seed_value;
   uint32_t *address;
   int k=1,l;

   address=(uint32_t *)malloc(8);
   if(mem==NULL)
   {
      printf("No memory is allocated, allocate memory first\n");
      allocate();
   }
   printf("\nThe available addresses on which you can write are\n");
   for(i=mem;i<=memlast;i++)
   {
	printf("\n%p",i);	
   }

   printf("\nEnter the address on which you want to write the contents");
   scanf("%p",&address);
   printf("\nEnter the no of 32-bit memory blocks to write pattern to:- ");
   scanf("%d",&length);

   printf("\nEnter the seed value to generate the psudo-random patttern:- ");
   scanf("%d",&seed_value);
   pattern = Pattern_gen(seed_value);
   j=(uint32_t *)malloc(8); 

 
   for(j=mem;j<=memlast;j++)
   {
	if(j==address)
	{
		//printf("The data at address %p is %x",j,*j)
	   break;		
	}
	else
	{
		k++;	
	}
   }
   if(k==(size+1))
   {
	printf("\nMemeory entered is not valid\n");
   }

   else if(length<=(size-(k-1)))
   {
	for(l=0;l<length;l++)
	{
		*j = pattern;
		pattern = pattern + 11111;
		j++;
	}
	printf("\nWrite Pattern successful");
	printf("\nType the function you would like to perform or type help to see the menu\n");	
   }


   else{
	printf("\nThe number of blocks entered is invalid\nType disp to try again or help to see the menu");
   }

   return 0;
}





