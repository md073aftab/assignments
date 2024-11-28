//  WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

#include <stdio.h>
int check(int a)
{
    

    if (a%2==0)
    {
        printf ("given no is even");
    }
    else{
        printf ("given no is odd");
    }    
}
int main()
{
    int a;
    scanf("%d", &a);
    check(a);
}