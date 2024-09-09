// THIS READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A 
// LIST OF NUMBERS READ

#include <stdio.h>
int main() {
    int a,sum=0;
    printf("enter numbers\n");
    scanf("%d",a) ;
    

    while (a>0)
    {
        scanf("%d",&a);
        sum=sum+a ;
    }
    printf("sum is %d",sum) ;
    
    return 0;
}
