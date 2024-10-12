//  WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
//              NCR = (!N/(!R*!(N-R)));

#include <stdio.h>

int factorial(a)
{
    int  fact=1 ;
                                                       // pending
    while (a>0) 
    {
        fact=fact*a ;
        a-- ;
    }
    factorial(a)==fact ;
    return 0 ;
}
int main(){
    int NCR,n,r ;
    printf("enter the value of n and r\n");
    scanf("%d%d",&n,&r);

    NCR= factorial(n)/(factorial(r)*factorial(n-r));

    printf("NCR of n:%d and r:%d is %d :",n,r,NCR);

    
    return 0;
}
