// THIS PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include<stdio.h>

int main(){
    int totalsec,hr,min,sec,mins;

    printf("enter total seconds\n");

    scanf("%d",&totalsec);

    sec = totalsec%60 ;
    mins =totalsec/60 ;
    min = mins%60;
    hr = mins/60 ;
     
     printf("%d", hr);
     printf(":%d", min);
     printf(":%d", sec);


    return 0;
}