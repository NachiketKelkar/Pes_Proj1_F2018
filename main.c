#include<stdio.h>
#include<string.h>
#include "help.h"
#include "allocate.h"

typedef struct
{
   char *ip;
   void (*funcp)();
}lookup;


int main()
{
   int i=0;
   lookup table[]={{"help",&help},{"allocate",&allocate}};//{"freee",&freee},{"disp",&disp},{"write",&write},{"invert",&invert},{"write_pattern",&write_pattern},{"verify_pattern",&verify_pattern},{"ext",&ext}};
   char input[15];

   printf("Welcome to the command line \n Type Help to see the commands\n");
   do
   {
      scanf("%s",input);

      for(i=0;i<2;i++)
      {
         if(strcmp(input,table[i].ip)==0)
         {
            (*table[i].funcp)();
         }
      }

   }while(strcmp(input,"ext")!=0);
   return 0;
}

