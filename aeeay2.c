#include<stdio.h>
int main ()
{
    int number[5],sum=0;
    float avg;
    for (int i=0;i<5;i++)
    {
        printf("number [%d]",i);
        scanf("%d",&number[i]);
    }
    for (int i=0;i<5;i++)
    {
        sum=sum+number[i];
    }
    printf("sum = %d\n",sum);
    printf("avg = %f",avg=(float)sum/5);
    return 0;
}
