// THIS IS PROGRAM TO PRINT 1,3,5,7,9………N

#include <stdio.h>
int main()
{
    int n,num=1;

    printf ("enter n\n");
    scanf("%d",&n);

    while (num<=n)
    {
        if (num%2!=0)
        {
            printf("%d ",num);
        }
        num++;
        
    }
    
    return 0;
}
