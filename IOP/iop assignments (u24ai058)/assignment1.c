// program to calculate simple intrest
#include<stdio.h>
int main(){
    int intrestrate, totalintrest, totalamount , intrestamount;
    printf(" enter total amount\n");

    scanf("%d", &totalamount );

    printf(" enter intrest rate\n10000");

    scanf("%d", &intrestrate);

    intrestamount = totalamount*intrestrate/100;

    totalintrest = totalamount + intrestamount;

    printf("total intrest=%d", totalintrest);


    return 0;
}