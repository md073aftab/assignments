// print :
// A
// AB
// ABC
// ABCD
// ABCDE

/*#include <stdio.h>
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
}*/

#include <stdio.h>
int main(){

/*

A
A B
A B 


*/


int ascii = 65, result;


for (int i = 1; i <= 5 ; i++)
{
  for (int j = 1; j <= i; j++)
  {
    result = ascii;
    printf(" %c ", result);
    ascii += 1;
  }
    printf("\n");
    ascii = 65;
  
}







    return 0;
}

