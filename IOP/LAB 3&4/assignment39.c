// THIS IS PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N

#include<stdio.h>
int main() {
    float num = 0, a = 1, b = 1, c, n;
    
    printf("Enter n: ");
    scanf("%f", &n);
    
    while (a <= n) {
        
        b = 1;
        c = 1;
        
        
        while (c <= a) {
            b = b * c;
            c++;
        }

        
        num = num + (a / b);
        
        a++;  
    }

    printf("%f\n", num);
    
    return 0;
}





