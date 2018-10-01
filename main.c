#include<stdio.h>
#include<string.h>
#include "help.h"
#include "allocate.h"
#include "write.h"
#include "disp.h"
#include "freee.h"
#include "write_pattern.h"
#include "ext.h"

typedef struct { char *ip; int (*funcp)();}lookup;

int main()
{
   int i=0;
   lookup table[]={{"help",&help},{"allocate",&allocate},{"write",&write},{"disp",&disp},{"freee",&freee},{"write_pattern",&write_pattern},{"ext",&ext}};//,{"invert",&invert},{"verify_pattern",&verify_pattern}};
   char input[15];

   printf("Welcome to the command line \n Type Help to see the commands\n");
   do
   {
      scanf("%s",input);

      for(i=0;i<7;i++)
      {
         if(strcmp(input,table[i].ip)==0)
         {
            (*table[i].funcp)();
         }
      }

   }while(strcmp(input,"ext")!=0);
   return 0;
}

