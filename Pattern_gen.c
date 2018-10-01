#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"Pattern_gen.h"

long Pattern_gen(int seed_value)
{
   long pattern;
   int x = seed_value, i=0;

   char str[50]={0};
   for(i=0;i<8;i++)
   {
      strcat(str, "f");
   }

   pattern = 12345*pow(x,11) + 17*pow(x,7) + 11*pow(x,3) + 9*pow(x,2) * 3;
   //printf("The pattern is %p\n",pattern);

   char mask[51] = {"0x"};
   strcat(mask, str);

   char *eptr;
   eptr=(char *)malloc(8);
   long mask1= strtol(mask, &eptr, 16);

   //printf("The mask is %p\n",mask1);
   pattern = mask1 & pattern;
   //printf("Final pattern is %p\n",pattern);
   return pattern;
}
