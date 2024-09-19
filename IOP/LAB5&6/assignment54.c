// THIS IS PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.

#include <stdio.h>
int main()
{
    int num[10],sum=0,i ;
    for ( i = 0; i < 10; i++)
    {
        printf("enter value of %d element : \n",i);
        scanf("%d",&num[i]);
        sum = sum +num[i] ;
    }

    printf("sum of all elements is %d",sum);
    
    
    return 0;
}
