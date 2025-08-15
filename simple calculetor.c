#include<stdio.h>
int main()
{   char x;
    float a,b,c;


    printf("Enter an operator (+,-,*,/) :");
    scanf("%c",&x);
    printf("Enter two number :");
    scanf("%f %f",&a,&b);

    switch (x)
    {
    case '+':
    printf("your velue =%.2f",c=a+b);
    break;
    case '-':
    printf("your velue =%.2f",c=a-b);
    break;
    case '*':
    printf("your velue =%.2f",c=a*b);
    break;
    case '/':
    printf("your velue =%.2f",c=a/b);
    break;

    default :
    printf("Invalid number");
    }
    return 0;

}
