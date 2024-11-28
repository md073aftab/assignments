
// THIS is PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT


#include <stdio.h>

int main() {
    int a, i, flag = 0;

    printf("Enter the number\n");
    scanf("%d", &a);

    
    if (a <= 1) {
        printf("Given number is not prime\n");
        return 0;
    }

    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            flag = 1;  
            break ;    
        }
    }

    if (flag == 0)
    {
        printf("Given number is prime\n");
    }
    else
    {
        printf("Given number is not prime\n");
    }

    return 0;
}
