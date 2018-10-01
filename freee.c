#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "allocate.h"
#include "freee.h"


int freee()
{
   printf("The %p address and following addresses are free\n\n",mem);
   free(mem);
   mem = NULL;
   return 0;
}
