// THIS READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A 
// LIST OF NUMBERS READ

#include <stdio.h>
int main()
{
    int a,sum=0,sums,n;
    
    printf("enter numbers\n");
    scanf("%d",&n);
       

    while (a>0)
    {
        scanf("%d",&a);
        sum=sum+a ;
    }

    sums=sum+n ;
    printf("sum is %d",sums) ;
    
    return 0;
}
