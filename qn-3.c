#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {
        if (i%2==0&&i%5==0){
            printf("%d\n",i);
            sum=sum+i;}
    }
    printf("sum=%d",sum);
    return 0;
}
