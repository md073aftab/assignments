//this is program to convert 31558150 seconds to hours,day,minutes
#include<stdio.h>
int main(){
    int seconds,days,hours,minutes;
    printf("enter the no of seconds,which earth takes for one revolution\n");

    scanf("%d" , &seconds);
    minutes = seconds/60;
    hours = minutes/60;
    days = hours/24;

    printf("days =%d\n", days);
    printf("hours = %d\n", hours);
    printf("minutes= %d\n", minutes);

    return 0;


}