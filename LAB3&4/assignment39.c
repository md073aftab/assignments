// THIS IS PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N

#include <stdio.h>
int main() {
    
    int a=1,b=1,c=1,n,num=0;

    printf("enter n\n");
    scanf("%d",&n);
    
    while (a<=n)
    {
        while (c<=a)
        {
            b=b*c;
            c++ ;
        }

        num=num+a/b ;
        a++ ;

        
        
    }

    printf("%d",num);
    
    return 0;
}
