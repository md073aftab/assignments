// 88) WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS

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

    q=p;
    
    for (int  i = 0; i < 10; i++)
    {
        b[i] =*q++ ;
        printf("%d",b[i]);

    }
    return 0;
}
