#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "allocate.h"
#include "freee.h"


int freee()
{
   printf("The %p address and following addresses are free\n",mem);
   free(mem);
   mem = NULL;
   printf("Enter the function you would like to perform or type help to see the menu\n>>");
   return 0;
}
