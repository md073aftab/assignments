//program to convert celsius to farenheit

#include<stdio.h>
int main(){
    int temperatureincelsius ,temperatureinfahrenheit;

    printf("ENTER TEMPERATURE IN FAHRENHEIT\n");

    scanf("%d", &temperatureinfahrenheit);

    temperatureincelsius = (temperatureinfahrenheit - 32) * 5/9 ;

    printf("TEMPERATURE IN CELSIUS =%d" , temperatureincelsius);


    return 0 ;

}