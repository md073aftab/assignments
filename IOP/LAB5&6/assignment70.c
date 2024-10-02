
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
            b=b+1;

            printf ("%d exist in array and its index is %d \n",a,i);
            
        
        }
    }

    if(b==0)
    {
        printf("%d does not exist in given array", a);
        

    }
    if(b!=0)
    {
        printf("%d  exist in array %d times",a,b);
        

    }




   

    return 0;
}
