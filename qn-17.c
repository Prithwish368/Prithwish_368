#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number =");
    scanf("%d",&n);
    if (n%5==0&&n%11==0)
        printf(" it divaitedd ",n);
    else
        printf("not devaied ",n);

    return 0;
}
