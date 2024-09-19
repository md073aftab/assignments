
#include <stdio.h>
int main()
{

    int i,j,k;

    for ( i = 1; i <=25; i++)
    {
        for (j = 0; j < 25-i; j++)
        {
            printf(" ");

        }

        for ( k = 0; k < i; k++)
        {
            printf("*");
            printf(" ");

        }

        printf("\n");
        
    }
    
    return 0;


}