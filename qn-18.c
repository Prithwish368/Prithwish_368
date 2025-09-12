/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 number :");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b&&a>=c)
        printf("%d is the maxi",a);
    else if (b>=a&&b>=c)
         printf("%d is the maxi",b);
    else  printf("%d is the maxi",c);
    return 0;
}*/
#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

   if(a>=b)
   {
       if (a>=c){printf("a is max");}
       else printf("c is max");
   }
   else {
    if (b>=c)
    {
       printf("b is max");
    }
    else {printf("c is man");}
    }



    return 0;
}
