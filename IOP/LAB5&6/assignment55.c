//  PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
//  TOTAL NO. OF EVERY ELEMENT.

#include <stdio.h>
int main() {
    int s_odd=0, s_even =0,arr[10],i ;

    for ( i = 0; i < 10; i++)
    {
        printf("enter the element %d : ",i);
        scanf("%d",&arr[i]);

        if (arr[i]%2==0)
        {
            s_even =s_even + arr[i];
        }
         if (arr[i]%2!=0)
        {
            s_odd =s_odd + arr[i];
        }
    }

    printf("sum of all odd elements of array is : %d \n", s_odd);
    printf("sum of all even elements of array is : %d\n", s_even);
    
    return 0;2

}
