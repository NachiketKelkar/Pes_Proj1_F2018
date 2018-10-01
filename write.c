#include<stdio.h>
#include "allocate.h"
#include "write.h"
#include <stdlib.h>

int write()
{
int k=0;
i=(uint32_t *)malloc(8);
uint32_t *address;
uint32_t value; 
address=(uint32_t *)malloc(10);

if(mem==NULL)
{
printf("\nNo memory is allocated, allocate memory first\n");
allocate();
}

printf("\nThe available addresses on which you can write are\n");
for(i=mem;i<=memlast;i++)
	{
	printf("\n%p",i);	
	}
printf("\nEnter the address on which you want to write the contents");
scanf("%p",&address);
 
//printf("Address typed by user= %p\n",address);
//printf("Address allocated by malloc is %p \n",mem);
//printf("memlast %p \n",memlast);
//printf("size %x \n",size);

//uint32_t *i=(uint32_t *)malloc(8);


for(i=mem;i<=memlast;i++)
{
if(i==address)
{
//printf("inside if , the value of i==address is %p\n",i);
printf("\nEnter the 32 bit hex value you want to write");
scanf("%x",i);
//printf("\nyou have written%x", *i);
printf("\n**Value Written**");
printf("\nEnter the function you would like to perform or type help to see the menu\n");
}
else
{
k++;
}


if(k==size)
	{
	printf("\nThe address entered is not a valid address\nType write to try again or help to see other options\n");
	}
}



//printf("Value store: %x", *address);

return 0;
}
