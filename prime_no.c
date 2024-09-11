#include <stdio.h>
int main()
{
    int num,i=2;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num==2)
    {
        printf("This is a prime number");

    }
    else if(num>2)
    {
        while(i<num)
        {
            if(num%i==0)
            {
                printf("This is not prime number");
                i++;
                

            }
            
            else
            {
                printf("This is prime number");
                break;
            }
            

        }
    }
        
    
    return 0;
    
}
