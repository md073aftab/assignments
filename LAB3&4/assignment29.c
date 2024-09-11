// THIS IS PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.


#include <stdio.h>
int main() {

    int num,pali=0,a,number;
    number=num;


    printf("enter num\n");
    scanf("%d",&num);


    while(num>0)
    {
       a=num%10 ;
       num=num/10 ;
       pali= pali*10+a ;



    }

    if(pali=number)
    {
        printf("given no is palindromin ");
    }
    else{
        printf("given no is not palindromin");
    }

    return 0;
}
