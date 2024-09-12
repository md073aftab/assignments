#include<stdio.h>

int main(){
    int income1,income2,income3,grosssalary;
    printf("enter income");
    scanf( "%d%d%d",&income1, &income2,&income3 );
    grosssalary = income1 + income2 + income3;
    printf("gross salary = %d", grosssalary );

    
    return 0;
}
