// WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    printf("Enter number of names:");
    int n;
    scanf("%d",&n);
    getchar();
    char (*a)[100],b[100];
    a=(char(*)[100])malloc(100*n*sizeof(char));
    for(int i=0;i<n;i++)
    {
        gets(a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(b,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],b);            
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
    free(a);
}