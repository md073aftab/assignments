// .WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.

#include <stdio.h>
int main()
{
    int n,a[n],greatest;
    int *p=a ;

    printf("enter number of integers to be checked\n");
    scanf("%d",&n);

    printf("enter integers\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    greatest=a[1] ;

    for (int i = 0; i < n; i++)
    {
        if (*p>greatest)
        {
            greatest=*p++ ;
        }
        
    }

    printf("greatest no from the given numbers is: %d \n", greatest) ;
    
    
    return 0;
}
