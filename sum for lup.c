#include<stdio.h>
int main()
{
    int a,b,sum=0,i;
    printf("input:");
    scanf("%d",&a);
     printf("input:");
    scanf("%d",&b);

    for (i=a;i<=b;i++)

    {
    sum+=i;
    }
    printf("The sum of numbers from %d to %d is: %d\n",a,b,sum);


    return 0;

}
