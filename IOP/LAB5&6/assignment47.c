// print :
// A
// AB
// ABC
// ABCD
// ABCDE

#include <stdio.h>
int main() {
    int i,j ;
    char A,B,C,D,E;

    
    
    for (i=1; i <=5; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
    return 0;
}
