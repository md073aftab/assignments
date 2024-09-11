// THIS IS  program to READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF 
// 

#include <stdio.h>
int main() {
    
    int n,sum=0,a;

    printf ("enter the value of n\n");
    scanf("%d",&n);

    while (n>0)
    {
        a=n%10 ;
        n=n/10 ;
        sum=sum+a ;
    }

    printf("%d",sum);
    
    return 0;
}
