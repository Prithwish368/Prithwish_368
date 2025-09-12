#include<stdio.h>
int main()
{
    char op;
    int n1,n2;
    printf("Enter a oparetor (+ - * /) =");
    scanf("%c",&op);
    printf("Enter a two number ");
    scanf("%d %d",&n1,&n2);
     switch (op)
     {
        case '+':
            printf("%d+%d=%d",n1,n2,n1+n2);
            break;
        case '-':
            printf("%d-%d=%d",n1,n2,n1-n2);
            break;
        case '*':
            printf("%d*%d=%d",n1,n2,n1*n2);
            break;
        case '/':
            printf("%d/%d=%d",n1,n2,n1/n2);
            break;
        default :
            printf("invalit opretor ");
     }
    return 0;


}
