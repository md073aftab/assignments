// 94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING 
// POINTERS.FOR EXAMPLE,
//  ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str1[20],str2[20];
    char *p=str1 ,*q ;
    q=str2; 


    gets(str1) ;
    
    n = strlen(str1);         //pending
    

    while (*(p++) != '\0')
    {
        *(q+n/4)=*p ;
        n-- ;
    }

    puts(str2);
    
    printf("%d",n);


    return 0;
}
