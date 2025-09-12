#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter any alphabet :");
    scanf("%c",&ch);

    if (ch>='A'&&ch<='Z')
        printf("this is capital letter ");

   else if (ch>='a'&&ch<='z')
     printf("this is small letter ");
    else {printf("is not a alphabet");}
        return 0;
}
