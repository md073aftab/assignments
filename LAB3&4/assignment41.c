// THIS IS READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)

#include <stdio.h>
int main() {
    int n,s,factorial=1;
    

    printf("enter the number\n");
    scanf("%d",&n);
                                    // pending
    s=n ;

    while (n>0)
    {
        factorial=factorial*n ;
        n-- ;
    }
    printf("factorial of %d : %d",s,factorial);
    return 0;
}
