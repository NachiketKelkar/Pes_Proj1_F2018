#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

extern int32_t *mem;

int freee()
{
   printf("The %p address and following addresses are free\n\n",mem);
   free(mem);
   mem = NULL;
   return 0;
}
