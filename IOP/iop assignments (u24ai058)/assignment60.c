//  PROGRAM TO SORT (SELECTION SORT) AN ARRAY
#include<stdio.h>
int main(){
    int a[10];
    int temp,num;
    
    printf("Enter the number to give\n");
    scanf("%d",&num);
    
    for(int i=0; i<num; i++)
    {
        printf("a[i]=\t");
        scanf("%d",&a[i]);
    }
    int min=a[0],q;
    for (int j=0;j<num;j++)
    {
        
        for(int i=j; i<num; i++)
        {  
        
            if (a[i]<min)
            {    
                q=i;
            }
            else
                continue;
        }
    temp=a[j];
    a[j]=a[q];
    a[q]=temp;
    min=a[j+1];
    }
    

    printf("Selection Sort in C\n");
    for(int i=0; i<num; i++)
        {
            printf("a[%d]=\t%d\n",i,a[i]);
        }
    
    return 0;
}