#include<stdio.h> 

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int count =0;
        int num,k=0;
        scanf("%d",&num);
        int t=num;
        while(t>0){
            k++;
            t=t/10;
        }

        int n[k];
        int temp =num;
         int j=0;
        while(temp>0){
           
            n[j]=temp%10;
            temp=temp/10;
            j++;
        }
        for(int i=0;i<k;i++){
            if(num%n[i]==0){
                count++;
            }
        }

        printf("%d\n",count);
    }
    return 0 ;
}