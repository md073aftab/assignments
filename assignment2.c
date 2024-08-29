#include<stdio.h>
int main(){
    int marks1,marks2,marks3,marks4,marks5,totalmarks,percentage ;
    printf("enter marks");
    scanf( "%d%d%d%d%d", &marks1, &marks2, &marks3, &marks4, &marks5);
    totalmarks = marks1+ marks2 + marks3 + marks4 +marks5 ;
    percentage= totalmarks/5 ;
    
    

    printf("totalmarks = %d",totalmarks);
    printf("percentage = %d",percentage);
    return 0;
}
