#include <stdio.h>
#include <string.h>
//#include "help.c"
//#include "allocate.c"
//#include "freee.c"
//#include "disp.c"
//#include "write.c"
//#include "invert.c"
//#include "write_pattern.c"
//#include "verify_pattern.c"
//#include "ext.c"
int help();
int allocate();
int freee();
int disp();
int write();
int invert();
int write_pattern();
int verify_pattern();
int ext();

int main()
{
   int static i=0;
   int compare;
   char *p, *comma, *comm[20];
   char *command[] = {"help","allocate","freee","disp","write","invert","write_pattern","verify_pattern","ext"};
   void (*command1[])()= {help,allocate,freee,disp,write,invert,write_pattern,verify_pattern,ext};

   printf("Welcome to the command line\n");
   printf("To see the available commands use help command\n");
   printf("Use 'help'\n");
   
   while(command[i] != "ext")
   {
      scanf("%s",comm);
      for(i=0;i<9;i++)
      {
         compare = strcmp(*(command+i),&comm);
         if (compare == 0)
         {
            break;
         }
      }
      (*command1[i])();
   }
   return 0;
}
