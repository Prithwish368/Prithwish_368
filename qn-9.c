#include<stdio.h>
int main()
{
    int n,rev=0,rem,tem;
    printf("Enter a number :");
    scanf("%d",&n);
    tem=n;
    while (tem!=0)
    {
    rem=tem%10;
    rev=rev*10+rem;
    tem=tem/10;
    }
    printf("%d\n",rev);
    if (rev==n)
    {
        printf("The number is palindrome\n");
    }
    else {printf("The number is not a palindrome\n");}
    return 0;
}
