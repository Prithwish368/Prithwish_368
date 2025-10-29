#include <stdio.h>
int main()
{
    int number[]={5,7,8,6,4,2};
    int la=sizeof (number)/sizeof (number[0]);
    if (la<2)
        printf("we need more number\n");
    int fast,secend;
    if (number[0]>number[1])
    {
        fast =number[0];
        secend=number[1];
    }
    else {fast=number[1];
        secend=number[0];
    }
    for (int i=2;i<la;i++)
    {
        if(fast<number[i])
        {
            secend=fast;
            fast=number[i];
        }
        else if (secend<number[i]&&number[i]!=fast)
            secend=number[i];

    }

    printf("fast number =%d\n",fast);
    printf("2nd number = %d",secend);
    return 0;
}
