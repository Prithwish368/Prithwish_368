#include <stdio.h>
int main()
{
    char n;
    printf("Enter a latter ");
    scanf("%c",&n);
    if (n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||
        n=='A'||n=='E'||n=='I'||n=='O'||n=='U' )
        printf("the latter is vowel");
    else {printf("the letter is consonet");}
    return 0;
}
