// THIS IS PROGRAM TO CALCULATE FACTORIAL OF A NO.

#include <stdio.h>
int main() {
    int i , factorial=1 ;

    printf("integer\n") ;

    scanf ("%d",&i) ;

    while (i>0) 
    {
        factorial=factorial*i;
        i-- ;
    }
    printf("%d", factorial);


    return 0 ;
}
