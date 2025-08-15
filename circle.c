#include<stdio.h>
int main()
{

    double r,d,c;

    printf("Enter the radius of the circle : ");
    scanf("%lf",&r);
    printf("diameter is = %.4lf\n",r*2);
    printf("circumference is =%.4lf\n",2*3.1416*r);
    printf("area is =%.2lf\n",3.1416*r*r);

    return 0;

}
