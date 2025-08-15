#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year :");
    scanf("%d",&year);
    if((year%400==0)||(year%4==0)&&(year%100!=0))
    {
        printf("%d Is a leap year.",year);
    }

        else {
            printf("%d Is not a leap year .");
        }
        return 0;



}
