// Write a program in C to rotate an array by N positions

#include<stdio.h>
int main()
{   
    printf("\a");
    int r,n;
    printf("Enter max size of array :");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter values of array A\n");
    for (int i=0;i<n;i++)
    {
        printf("enter number %d= ",i+1);
        scanf("%d",&a[i]);           
    }
    printf("enter number of times u need to rotate array:");
    scanf("%d",&r);
    for (int i=0,j=0;i<n;i++)
    {
        if (i+r<n)
        {
            b[i+r]=a[i];
        }
        else 
        {
            
            b[j]=a[i];
            j+=1;
            if (j>r-1)
              break;
            else 
              continue;
        }
    }
    printf("\nrotated array\n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",b[i]);
                   
    }

}