//THIS IS PROGRAM TO PRINT TABLE OF ANY NO

#include <stdio.h>
int main() {
    int n,x=0,i=1;

    printf("enter the value of n\n");
    scanf("%d",&n);

    printf("table of %d\n",n);

    while(i<11)
    {

        x=x+n ;

        printf("%d * %d = %d\n", n , i,x);

        i++ ;




    }
    
    return 0;
}
