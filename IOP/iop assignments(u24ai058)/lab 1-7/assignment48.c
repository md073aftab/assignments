#include <stdio.h>
int main() {
    int i,j;

    for ( i = 1; i < 6; i++)
    {
        for ( j = 1; j <6; j++)
        {
            if (j<(6-i))
            {
                printf("\t");
            }
            else
            {
                printf("%d\t",i+j-5);
            }
            
        }
        printf("\n");
        
    }
    

    return 0;
}
