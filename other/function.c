#include <stdio.h>

int sum (int a,int b);  
int main() {
    int a,b,c ;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf(" sum af a and b is %d",c);
    
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
