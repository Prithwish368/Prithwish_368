#include<stdio.h>
int main()
{
    float p,t,r,s;

    printf("Enter principle :");
    scanf("%f",&p);
    printf("enter time :");
    scanf("%f",&t);
    printf("enter rate :");
    scanf("%f",&r);
    printf("simple interest = %f",s=p*r*t/100);


    return 0;

}
