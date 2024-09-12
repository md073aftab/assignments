#include<stdio.h> 

int main(){
    int a,b,i,ans=1;
    printf("Enter your base\n");
    scanf("%d",&a);
     printf("Enter your power\n");
    scanf("%d",&b);
    for(i=0;i<b;i++){
        ans=ans*a;
    }
    printf("%d",ans);
    return 0 ;
}