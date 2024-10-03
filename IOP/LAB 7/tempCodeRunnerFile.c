// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT

#include <stdio.h>
void palin_or_not(int num)
{
    int pali,a, original;
    original = num;
    while(num>0)
    {
       a=num%10 ;
       num=num/10 ;
       pali= pali*10+a ;
    }

       if(pali=original)
    {
        printf("given no is palindromin ");
    }
    else{
        printf("given no is not palindromin");
    }

}

int main() {
    int num ;

    printf("enter no to check if it is palindromin or not\n");
    scanf("%d",&num);
    palin_or_not(num);
    return 0;
}

