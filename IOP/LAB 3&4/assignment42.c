// THIS IS READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE

#include <stdio.h>
int main() {
    int num,b;
    int flag=1;

    printf("enter num\n");
    scanf("%d",&num);

    if (num==)
    {
        printf("1 is neither prime nor composite\n")
    }
    

    for (b=2;b<num/2 && flag !=0 ;b++)
    {
        if (num%b==0)
        {
            flag=0 ;
        }
        
    }
    if (flag==1)
    {
        printf("%d is prime no",num);
    }
    else
    {
        printf("%d is composite");
    }
    
    
    return 0;
}
