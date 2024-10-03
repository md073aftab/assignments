//  PROGRAM TO SORT (SELECTION SORT) AN ARRAY
selection sort#include<stdio.h>
int main(){
    int a[10],i;
    int j,temp,num;
    
    printf("Enter the number to give\n");
    scanf("%d",&num);
    
    for(i=0; i<num; i++){
        printf("a[%d]=\t",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<num-1; i++){  
        for(j=i+1;j<num; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

printf("Selection Sort in C\n");
for(i=0; i<num; i++){
        printf("a[%d]=\t%d\n",i,a[i]);
    }
    
    return 0;
}