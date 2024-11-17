// WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING 
// POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER
#include <stdio.h>
int main()
{
    int num,square,cube;
    int *p ;
    p=&num ;


    printf("enter number of which you want to find square and cube\n");
    scanf("%d",&num);

    square = (*p)*(*p);
    cube = (*p)*(*p)*(*p);

    printf("square of given num is %d\n",square);
    printf("cube of given num is %d\n",cube);


    return 0;
}
