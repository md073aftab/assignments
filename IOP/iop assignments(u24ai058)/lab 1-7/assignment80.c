// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15

#include <stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,num=0;
    printf("fabonacci seris is : \n") ;
    if (n==1 )
    {
        printf("%d ",a) ;
    }
    if (n==2 || n>2)
    {
        printf("%d %d ",a,b);
    }
    
    


    for(int i=0;i<(n-2)&&(n>2);i++)
    {
        num=a+b ;
        a=b ;
        b=num ;
        printf("%d ",num);
    }
}
int main()
{
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    fibonacci(n);
    
    return 0;
}