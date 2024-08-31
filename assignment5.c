// this is program to swap two variables using third variable.
#include<stdio.h>

int main(){
    int a, b, c;
    printf("ENTER THE VALUE OF a AND b\n");

    scanf("%d%d", &a, &b);                         //pending
    c=b ;
    b=a;
    a=c;

    printf("value of a  is %d\n ", &a);    

    printf("value of b is %d\n", &b );
    return 0;
}