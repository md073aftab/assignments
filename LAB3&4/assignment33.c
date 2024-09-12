// THIS IS PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS

#include <stdio.h>

int main() {
    int n, i;
    int max, min, num;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;

    for (i = 2; i <= n; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }    
    printf("Maximum number is: %d\n", max);

    printf("Minimum number is: %d\n", min);

    return 0;
}
