//  PROGRAM TO REVERSE AN ARRAY

#include <stdio.h>
int main() {
    
    int arr[10],arr1[10];

    for (int i = 1; i <= 10; i++)
    {
        printf("enter element %d of array\n",i);
        scanf("%d",&arr[i]);
        arr1[11-i]= arr[i] ;



    }

   //  for (int i =1; i <= 10; i++)
   //  {
   //      arr[i] = arr[11-i] ;
   //  }
 
    for (int i = 1; i <=10; i++)
    {
        printf("element %d of arr is : %d\n" ,i,arr1[i]);
    }
    
    return 0;
}
