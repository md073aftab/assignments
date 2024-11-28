#include <stdio.h>
#include <stdlib.h>
void rot(int *a, int n) {
   int b[n];
    for(int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    for(int i=0; i<n; i++) {
        a[i] = b[n-i-1];
    }
}

void flip(int n, int x) {
    int p = 0, b = n;
    while(n > 0) {
        n /= 10;
        p++;
    }
    int a[p];
    for(int i = p-1; i >= 0; i--) {
        a[i] = b % 10;
        b /= 10;
    }
    rot(a+(p-x), x);
    
    for(int i = 0; i < p; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
}

int main() {
    int n, x;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter digits to be flipped: ");
    scanf("%d", &x);
    flip(n, x);
    return 0;
}