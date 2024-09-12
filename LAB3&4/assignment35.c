// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF 
// N


#include <stdio.h>

int main() {
    int n, num = 0, a;

    
    printf("Enter the value of n\n");
    scanf("%d", &n);

    
    while (n > 0 || num >= 10) {
        if (n == 0) {
            n = num;
            num = 0;
        }
        a = n % 10;
        n = n / 10;
        num = num + a;
    }

    
    printf("The single-digit sum is: %d\n", num);

    return 0;
}
