
// THIS is PROGRAM PRINT FACTOR OF GIVEN NO N.


#include <stdio.h>

int main() {
    int a, i;

    printf("Enter the number\n");
    scanf("%d", &a);

    printf(" factors of %d is:\n",a);

    

    for (i = 1; i <= a ; i++) {
        if (a % i == 0)
        {
            printf("%d\t",i)   ; 
        }
    }

    return 0;
}
