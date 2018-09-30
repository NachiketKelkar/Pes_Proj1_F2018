#include<stdio.h>
#include "allocate.h"
#include "write.h"
#include <stdlib.h>

int write()
{
uint32_t *address;
uint32_t value; 
address=(uint32_t *)malloc(10);
if(mem==NULL)
{
printf("No memory is allocated, allocate memory first\n");
allocate();
}

printf("\nEnter the address on which you want to see the contents");
scanf("%p",&address);
 
//printf("Address typed by user= %p\n",address);
//printf("Address allocated by malloc is %p \n",mem);
//printf("memlast %p \n",memlast);
//printf("size %x \n",size);

//uint32_t *i=(uint32_t *)malloc(8);
i=(uint32_t *)malloc(8);

for(i=mem;i<=memlast;i++)
{
if(i==address)
{
//printf("inside if , the value of i==address is %p\n",i);
printf("\nEnter the 32 bit hex value you want to write");
scanf("%x",i);
printf("\nyou have written%x", *i);

}

}


printf("Value store: %x", *address);

return 0;
}
