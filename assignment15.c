 //THIS IS PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
 #include <stdio.h>
 int main() {
    int m ,e ,c ,p ,h , perc;
    printf("ENTER MARKS OF MATHS,ENGLISH,CHEMISTRY,PHYSICS,HINDI\n");

    scanf("%d%d%d%d%d", &m,&e,&c,&p,&h);

    perc= (m+e+c+p+h)/5 ;

    if(80<=perc&&perc<=100)
    {
        printf("GRADE A");
    }
    else if (70<=perc&&perc<80)
    {
        printf("GRADE B");
    }
    else if (60<=perc&&perc<70)
    {
        printf("GRADE C");
    }
    else {
        printf("GRADE D");
    }
    
     return 0;
 }
 