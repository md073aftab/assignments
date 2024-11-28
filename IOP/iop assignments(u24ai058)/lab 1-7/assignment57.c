// PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX

#include<stdio.h>
int main()
{
    int n,b,c;
    printf("Number of number to read:");
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
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
            else 
                continue;
        }
    }
    printf("\nlargest=%d\n",a[n-1]);
    printf("second largest=%d\n",a[n-2]);
}