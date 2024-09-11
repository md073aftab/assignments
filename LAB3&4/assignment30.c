#include <stdio.h>
int main() {
    int a,b,number ;
    printf("enter the number\n");
    scanf("%d",&number);

    while (number>0)        
    {
        a=  number%10 ;
        number=number/10 ;
        printf("%d",a);
    }
    
    return 0;
}
