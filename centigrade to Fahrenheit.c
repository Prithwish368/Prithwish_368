#include<stdio.h>
int main()
{
    float c,f;

    printf("Enter temperature in centigrade : \n");
    scanf("%f",&c);

    printf("this is the temperature of centigrade to Fahrenheit =%.2f\n",f=c/1.8+32);

    return 0;

}
