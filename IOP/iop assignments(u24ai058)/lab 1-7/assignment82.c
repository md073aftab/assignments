//  WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.NCR = (!N/(!R*!(N-R)));


#include <stdio.h>

int factorial(int a)
{
    int fact = 1;
    while (a > 0)
    {
        fact = fact * a;
        a--;
    }
    return fact;
}

int main()
{
    int NCR, n, r;
    printf("Enter the value of n and r:\n");
    scanf("%d%d", &n, &r);

    if (r > n)
    {
        printf("Invalid input: r cannot be greater than n.\n");
        return 1;
    }

    NCR = factorial(n) / (factorial(r) * factorial(n - r));

    printf("NCR of n:%d and r:%d is: %d\n", n, r, NCR);

    return 0;
}
