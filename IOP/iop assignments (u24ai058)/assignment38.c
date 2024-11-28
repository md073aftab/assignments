// THIS IS PROGRAM TO PRINT 1,4,9,16,25,………N.

#include <stdio.h>
int main() {
    int a=1, n,num=1;

    printf ("enter n\n");
    scanf("%d",&n);

    while (num<=n)
    {
        a=num*num ;
        num++;
        printf("%d ",a);
    }
    
    return 0;
}
