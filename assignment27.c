// this is PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT

#include <stdio.h>
int main() {
    int a,i=2;

    printf("enter the number\n");
    scanf("%d",&a);


    while (i<a)
    {
        if (a%i==0)
        {
            printf("given number is not prime\n");
              i++ ;

        break;
        }
                              //pending
      
        else{
        printf("given number is prime no\n");
        break;
    }
        
    }
    
    
    return 0;
}
