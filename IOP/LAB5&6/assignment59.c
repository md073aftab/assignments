// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE 
// ARRAYS

#include <stdio.h>
int main() {
    int arr1[10],arr2[10],s;
    for (int i = 0; i < 10; i++)
    {
        printf("enter the value of element %d of arr1 :",i);
        scanf("%d",arr1[i]);
    }
    printf("\n");
     for (int i = 0; i < 10; i++)
    {
        printf("enter the value of element %d of arr2 :",i);
        scanf("%d",arr2[i]);
    }
    printf("\n");
     for (int i = 0; i < 10; i++)
    {
        s = arr1[i];
        arr1[i] = arr2[i] ;
        arr2[i] = s ;
    
    }
     for (int i = 0; i < 10; i++)
    {
        printf("element %d of arr1 is %d",i,arr1[i]);
        
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("element %d of arr2 is %d",i,arr2[i]);
        
    }
    
    return 0;
}
