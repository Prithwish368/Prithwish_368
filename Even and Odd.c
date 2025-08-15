#include<stdio.h>
int main()
{
    int n;

    printf("Enter your number :");
    scanf("%d",&n);

    if(n==0)
    {
        printf("the number is zero");
    }
    else if(n%2==0)
    {
        printf("This number is Even");
    }
    else
    {
        printf("This number is Odd");
    }

        return 0;
}
