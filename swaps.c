#include<stdio.h>
int main()
{
    float a=5,b=10;
    printf("1st number%.1f\n",a);
    printf("2nd number%.1f\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nafter swap 1st number =%.1f\n",a);
    printf("after swap 2nd number =%.1f\n",b);

    return 0;

}
