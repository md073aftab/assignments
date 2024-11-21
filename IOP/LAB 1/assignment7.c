//this is program to calculate area of triangle

#include<stdio.h>
int main(){
    int base , height ,area ,d;
    printf("ENTER BASE AND HEIGHT\n");

    scanf("%d%d", &base,&height);


    area =  (base*height)/2;

    printf(" area of triangle = %d" ,area);


    return 0;
}