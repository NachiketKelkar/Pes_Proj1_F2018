#include<stdio.h>
#include "disp.h"
#include "allocate.h"
#include "write.h"

int disp()
{
int k=1;int l;
	if(mem==NULL)
	{
	printf("There is no memory allocated");
	}
else{
	
printf("\nEnter the address at which you want to see the data\t");
scanf("%p",&u_disp_add);
printf("\nEnter the no of blocks you want to see\t");
scanf("%d",&no_of_blocks);
j=(uint32_t *)malloc(8);
//printf("\nThe value entered by user: %p",u_disp_add);
//printf("\nThe address on which value was allocated : %p",i-1);
//printf("\nThe value on the address is:%x",*(i-1));

for(j=mem;j<=memlast;j++)
	{
	if(j==u_disp_add)
		{
		//printf("The data at address %p is %x",j,*j);
		break;		
		}
	else
		{
		k++;	
		}
	}
if(k==(size+1))
	{
	printf("\nMemeory entered is not valid\nType disp to try again or help to see the menu");
	}
else if(no_of_blocks<=(size-(k-1)))
	{
	for(l=0;l<no_of_blocks;l++)
 		{
		printf("\nData at address %p is %x",j,*j);
		j++;
		}
	printf("\nType the function you would like to perform or type help to see the menu");	
	}
else{
printf("The number of blocks entered is invalid\nType disp to try again or help to see the menu");}

//printf("Inside display function\n");
}
return 0;
}
