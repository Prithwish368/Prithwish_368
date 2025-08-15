#include<stdio.h>
int main()
{
   int D,y,w,d;

    printf("Enter number of day's : ");
    scanf("%d",&D);
    printf("year =%d\n",y=D/365);
    printf("week =%d\n",w=D%365/7);
    printf("day =%d\n",d=D%365%7);

    return 0;

}
