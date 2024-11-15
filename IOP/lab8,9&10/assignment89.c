// 89)WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF 
// SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.

#include <stdio.h>
int main()
{
    int a[10],b[10];
    int *p=&a , *q=&b;

    printf("enter the elements of array a\n");

    for (int  i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    q  = p + 10;
    
    for (int  i = 0; i < 10; i++)
    {
        b[i] =*q-- ;
        printf("%d\n",b[i]);

    }
    return 0;
}
