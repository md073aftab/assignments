// PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS


#include <stdio.h>
int main() {
    int i=0,j=0,arr[3][3], sum=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value of arr[%d][%d]:\n",i,j);
            scanf("%d", &arr[i][j]);
            sum= sum + arr[i][j] ;
        }
        printf("sum of row%d is :%d \n",i,sum);
        sum = 0 ;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",arr[i][j]);
        
        }
        printf("\n");
        
    }


    
    return 0;
}
