// PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN THIRD MATRIX

//  PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM IN THIRD MATRIX.

#include <stdio.h>
int main() {
    int i=0,j=0,mat1[3][3],mat2[3][3],mat3[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of mat1[%d][%d]:\n",i,j);
            scanf("%d", &mat1[i][j]);
        }
        
    }

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of mat2[%d][%d]:\n",i,j);
            scanf("%d", &mat2[i][j]);
        }
        
    }

    printf("matrix 1  :\n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",mat1[i][j]);
        
        }
        printf("\n");
        
    }
    printf("matrix 2  :\n");

 for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",mat2[i][j]);
        
        }
        printf("\n");
        
    }


     printf("multiplication of mat1 and mat2 is :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] * mat2[i][j] ;
            printf("%d    ",mat3[i][j]);
        
        }
        printf("\n");
        
    }


    
    return 0;
}
