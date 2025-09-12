#include<stdio.h>
#include<math.h>
int main()
{
   double b,e,result=1;
    printf("Enter tow number :");
    scanf("%lf%lf",&b,&e);
    result= pow (b,e);
    printf("%lf^%lf=%lf",b,e,result);
    return 0;

}
