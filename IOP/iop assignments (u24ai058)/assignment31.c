//THIS IS PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO

#include <stdio.h>
int main() {
    int a,b=0,number ;
    printf("enter the number\n");
    scanf("%d",&number);

    while (number>0)        
    {
        a=  number%10 ;
        number=number/10 ;

        b=b+a ;
        
    }
    printf("%d",b);
    
    return 0;
}
