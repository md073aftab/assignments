//this is PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.

#include<stdio.h>
int main(){

    int a;
    printf("ENTER THE NO\n");

    scanf("%d",&a);

    if(a%2==0){
        printf("NO IS EVEN");
    }
    else{
        printf("NO IS ODD");
    }
    return 0;

}