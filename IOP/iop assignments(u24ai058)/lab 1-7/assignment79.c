//  WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y 
#include<stdio.h>
int exchange(int a, int b)
{
    int c;
    printf("intial value of a is : %d\n",a);
    printf("intial value of b is : %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("now, value of a is : %d\n",a);
    printf("now, value of b is : %d\n",b);


}
int main()
{
    int a,b;
    printf(" enter the value of a & b\n");
    scanf("%d%d",&a,&b);
    exchange(a,b);
    return 0 ;
}