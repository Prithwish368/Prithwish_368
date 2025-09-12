#include<stdio.h>
int main()
{
    int day,y,w,d;
    printf("Enter total days :");
    scanf("%d",&day);

    printf("year = %d\n",y=day/365);
    printf("week = %d\n",w=day%365/7);
    printf("day = %d\n",d=day%365%7);
     return 0;
}
