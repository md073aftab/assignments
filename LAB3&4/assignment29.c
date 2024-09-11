// THIS IS PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.


#include <stdio.h>
int main() {

    int num,sum=0,a,number;
    number=num;


    printf("enter num\n");
    scanf("%d",&num);


    while(num>0)
    {
       a=num%10 ;
       num=num/10 ;
       sum= sum +a*a*a ;



    }

    if(sum=number)
    {
        printf("given no is armstrong no");
    }
    else{
        printf("given no is not armstrong no");
    }

    return 0;
}
