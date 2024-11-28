//  WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURNZERO OTHERWISE.

#include <stdio.h>

void prime(n)
{
    int flag=0,i;
    if (n <= 1)
    {
        printf("0\n");
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;  
            break;    
        }
    }

    if (flag == 0)
        printf("1\n");
    else
        printf("0\n");


}
int main() 
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    prime(n);

    return 0;
}
