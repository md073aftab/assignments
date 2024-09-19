//  PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
//  NEGATIVE, AND ZERO ELEMENTS




#include <stdio.h>
int main()
{
    int num[10],sum=0,i,pos_num=0 ;
    for ( i = 0; i < 10; i++)
    {
        printf("enter value of  element%d : \n",i);
        scanf("%d",&num[i]);
         
    }

    printf("sum of all elements is %d",sum);
    
    
    return 0;
}
