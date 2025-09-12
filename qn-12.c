#include<stdio.h>
int main()
{
    int n,f;
    printf("enter a number ");
    scanf("%d",&n);
    if (n>0)
        f=1;
    else if (n<0)
        f=-1;
    else f=0;

    switch (f)
    {
    case 1:
        printf("the number is positive\n");
    break;
    case -1:
        printf("the number is negative\n");
    break;
    case 0:
        printf("the number is zero\n");
    break;
    default :
        printf("unknown input \n");
    }
    return 0;
}

