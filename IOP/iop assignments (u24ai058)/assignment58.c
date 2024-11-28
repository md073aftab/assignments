//  PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE 
//  ARRAYS INTO THIRD

#include <stdio.h>
int main() {
    int arr1[10],arr2[10],arr3[10],i ;

    for ( i = 0; i < 10; i++)
    {
        printf("enter element %d of arr1 :",i);
        scanf("%d",&arr1[i]);
    }
    printf("\n");
     for ( i = 0; i < 10; i++)
    {
        printf("enter element %d of arr2 :",i);
        scanf("%d",&arr2[i]);
    }
    printf("\n");
     for ( i = 0; i < 10; i++)
    {
        arr3[i]= arr1[i] + arr2[i] ;
        
    }
    printf("\n");
     for ( i = 0; i < 10; i++)
    {
        printf("element %d  of arr3 is %d \n",i,arr3[i]);
    }
    
    return 0;
}
