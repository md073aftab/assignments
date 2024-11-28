//THIS IS PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) 
// OPERATOR.

#include <stdio.h>
int main() {
    int a,b,c ,re,res;

    printf ("enter the value of a,b,c\n");

    scanf("%d%d%d" , &a ,&b, &c );

    re= a>b? a:b ;

    res = re>c ?re:c ;

    printf("greatest of this three no is %d" , res);


    return 0;
}

