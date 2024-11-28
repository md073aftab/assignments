// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT

#include <stdio.h>
void arm_or_not(int num)
{
    int arm=0,a, original;
    original = num;
    while(num>0)
    {
       a=num%10 ;
       num=num/10 ;
       arm= arm + a*a*a ;
    }

       if(arm=original)
    {
        printf("given no is armstrong no ");
    }
    else{
        printf("given no is not armstrong no");
    }

}

int main() {
    int num ;

    printf("enter no to check if it is armstrong or not\n");
    scanf("%d",&num);
    arm_or_not(num);
    return 0;
}

