#include <stdio.h>
int main() {
    int marks [3],i;

    for ( i = 0; i < 3; i++)
    {
        printf ("enter the marks of student %d :",i);
        scanf ("%d",&marks[i]);
        printf("\n");
    }

    for ( i = 0; i < 3; i++)
    {
        printf ("marks of student %d is : %d\n" ,i,marks[i]);
    }
    
    
    return 0;
}
