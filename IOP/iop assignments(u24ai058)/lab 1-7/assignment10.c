//. THIS IS PROGRAM  TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE 
//FORMULA.
// CM = M/2+P/2+C/2+E
//WHERE CM = Cut of f mark
//M = Marks in Mathematics out of 200
//P = Marks in Physics out of 200
//C = Marks in Chemistry out of 200
//E = Marks in entrance examination out of 100. 

#include<stdio.h>

int main(){
    int CM,M,P,C,E ;

    printf(" ENTER MARKS IN  Mathematics , Physics ,Chemistry ,entrance examination\n ");
    
    scanf("%d%d%d%d", &M ,&P ,&C ,&E);

    if((M>200) || (P>200) || (C>200) || (E>100))
    {
        printf("invalid marks");
    }
    else{

    CM = M/2+P/2+C/2+E ;

    printf("CM=%d", CM);
    }
     

    return 0 ;

}