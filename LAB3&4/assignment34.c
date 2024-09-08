// THIS IS PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)

#include <stdio.h>
int main() {
    int a=0,b=1,num=0;
    printf("fabonacci seris is : \n") ;
    printf("%d %d ",a,b) ;


    while (num<5000)
    {
        num=a+b ;
        a=b ;
        b=num ;
        printf("%d ",num);
    }
    


    return 0;
}
