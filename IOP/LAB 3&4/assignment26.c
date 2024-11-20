// THIS IS PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N

#include <stdio.h>
int main()
{
    
int n,i=1,seven=0,sodd=0;

printf("ENTER THE OF N\n");
scanf("%d",&n);

while (i<=n)
{
    if (i%2==0)
    {
        seven=seven+i;
    }
    else{
        sodd=sodd+i;
    }
    i++ ;
    
}
    printf("sum of even nos is %d\n",seven);
    printf("sum of odd nos is %d\n",sodd);


    return 0;
}
