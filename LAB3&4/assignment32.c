// THIS IS PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS

#include <stdio.h>

int main() {
    int n, i, num;
    int max, second_max;

    printf("Enter the number of elements\n ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Invalid input. There must be at least two numbers.\n");
        return 0;
    }

    printf("Enter number 1 : ");
    scanf("%d", &num);
    max = num;
    second_max = -2147483648; // minimum posiible value

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%d", &num);

        if (num > max) {
            second_max = max;
            max = num;
        } else if (num > second_max && num != max) {
            second_max = num;
        }
    }

    if (second_max == -2147483648)
    {
        printf("both no are same .\n");
    } 
    else
    {
        printf("Maximum number is %d\n", max);
        printf("Second maximum number is %d\n", second_max);
    }

    return 0;
}
