#include <stdio.h>

int main() 
{
    char a;
    printf("Enter any Letter");
    scanf("%c",&a);
    int b,d;
    b=a;
    d=96<b?b:96;
    if (d==96)
        printf("is uper case character");
    else 
        printf("it is small case character");


    return 0;
}