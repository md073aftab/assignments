//  PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.


#include <stdio.h>
int main() {
    int i=0,j=0,arr[3][3],max=0,min=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of arr[%d][%d]:\n",i,j);
            scanf("%d", &arr[i][j]);
            
        }
        
    }
    max=arr[1][1] ;
    min=arr[1][1] ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",arr[i][j]);
        
        }
        printf("\n");
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max<arr[i][j])
            {
                max= arr[i][j];
            }
             if (min>arr[i][j])
            {
                min= arr[i][j];
            }
            
        }
        
    }
    

             
    
    printf("max element is : %d \n",max);
    printf("min element is : %d \n",min);


    
    return 0;
}
