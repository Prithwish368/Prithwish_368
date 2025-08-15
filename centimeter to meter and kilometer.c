#include<stdio.h>
int main()
{
    float cm,m,km;

    printf("Enter the velue of centimeter : \n");
    scanf("%f",&cm);
    printf("this is the velue of centimeter to meter =%.2f\n",m=cm/100);
    printf("this is the velue of centimeter to kilometer =%.2f\n",km=cm/(1000*100));

    return 0;

}
