//THIS IS PROGRAM TO  READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND                     
#include<stdio.h>

int main() {
    int HR,MIN,SEC,TOTALSECONDS ;

    printf("enter time\n");

    scanf("%d%d%d", &HR,&MIN,&SEC);

    TOTALSECONDS = HR*3600 + MIN*60 + SEC ;

    printf("\nHR=%d" , HR);
    printf("\nMIN =%d", MIN);
    printf("\nSEC=%d", SEC);

    printf("\n TOTALSECONDS=%d", TOTALSECONDS); 
    return 0;

} 