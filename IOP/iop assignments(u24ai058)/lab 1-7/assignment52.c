// 

#include <stdio.h>
int main() {
    int i,j,k,s ;

    for ( i = 1; i < 5; i++)
    {
        for ( j = 0; j < (4-i); j++)
        {
            printf(" ");
        }
        for ( k = 1; k <=i; k++)
        {
            printf("%d",k);
        }
        s=i ;
        while (s>1)
        {
            printf("%d",s-1);
            s-- ;
        }
        
        
        printf("\n");
        
    }
    
    return 0;
}
