#include<stdio.h>
int main()
{
    int number[]={9,8,7,4,5,6,3};

        int max=number[0];
            int min=number[0];
            for (int i=1;i<7;i++)
            {
                if (max<number[i])
                {
                    max=number[i];
                }
            }
            printf("max = %d",max);

             for (int i=1;i<7;i++)
            {
                if (min>number[i])
                {
                    min=number[i];
                }
            }
            printf("min = %d",min);
    return 0;

}
