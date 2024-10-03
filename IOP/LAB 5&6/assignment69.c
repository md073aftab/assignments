//  WRITE PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY

#include <stdio.h>
int main() {
    int arr[10],a,b=0;

    for (int i = 0; i < 10; i++)
    {
        printf("enter the element %d of array\n",i);
        scanf("%d",&arr[i]);
    }

     printf("enter the value of a :\n");
     scanf("%d",&a);

     for (int i = 0; i < 10; i++)
    {
        
        if(a==arr[i])
        {
            b=1 ;

            printf ("%d exist in array and its position is %d ",a,i);
            break;
        
        }
       

    }
    if(b!=1)
    {
        printf("%d does not exist in given array", a);
        

    }



   

    return 0;
}
