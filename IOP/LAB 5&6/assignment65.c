//  PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.


#include <stdio.h>
int main() {
    int i=0,j=0,arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of arr[%d][%d]:\n",i,j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    printf("matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",arr[i][j]);
        
        }
        printf("\n");
        
    }
    printf("transpose of given matrix is:\n");

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",arr[j][i]);
        
        }
        printf("\n");
        
    }


    
    return 0;
}
