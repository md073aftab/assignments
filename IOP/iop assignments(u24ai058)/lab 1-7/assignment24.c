//    PROGRAM TO FIND THE VALUE OF Y USING 
//    
//    1+x where n=1
//   1+x/n where n=2
//   Y(x,n) = 1 +xn 
//    when n=3
//   1 + nx when n>3 or n<1


#include <stdio.h>
int main() {

    int x,y,n;

    printf("enter the value of n\n");

    scanf("%d", &n);

    switch (n)
    {
    case 1: printf("ENTER THE VALUE OF X ");
             
             scanf("%d", &x);

             y= 1+x ;

             printf("value of y is %d" ,y);
            break;

    
    case 2:  printf("ENTER THE VALUE OF X ");
             
             scanf("%d", &x);

             y= 1+(x/n) ;

             printf("value of y is %d" ,y);
             break;

    case 3:  printf("ENTER THE VALUE OF X ");
             
             scanf("%d", &x);

             y= 1+(n*x) ;

             printf("value of y is %d" ,y);
             break;    

    }

    if ((n>3)||(n<1))
    {
        printf("ENTER THE VALUE OF X \n");

        scanf("%d",&x);

        y = 1+(n*x);

        printf("value of y is %d",y);
    }
    
    
    return 0;
}
