#include<stdio.h>
int main()
{
   int number[]={5,8,4,9,3};
   int sn=10;
   int x=-1;
   for (int i=0;i<5;i++)
   {
       if (sn==number[i])
        x=1;
   }
   if (x==-1)
   {
       printf("found not");
   }
   else   printf("found ");
   return 0;

}
