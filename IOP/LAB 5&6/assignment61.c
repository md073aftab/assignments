// PROGRAM TO SORT (BUBBLE SORT) AN ARRAY

bubble#include<stdio.h>
int main()
{
    int n,c,d,b;
    printf("Number of values in array:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("a array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if (a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    printf("\n\nsorted array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}