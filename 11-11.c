#include<stdio.h>
int main()
{
    int n,i,arry[30],sum=0;
    printf("Enter how many eliment of array : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    for (i=0;i<n;i++)
    {
        sum = sum + arry[i];
    }
    printf("sum = %d\n",sum);
    printf("avg = %.2f",(float)sum/n);

    return 0;
}
