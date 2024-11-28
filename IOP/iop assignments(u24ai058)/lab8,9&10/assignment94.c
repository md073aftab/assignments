// 94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING 
// POINTERS.FOR EXAMPLE,
//  ST =”SVNITJAVA” IS COPIkED AS “AVAJTINVS” 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *a,*b;
    a=(char*)malloc(100*sizeof(char));
    printf("Enter string:");
    gets(a);
    b=(char*)malloc(100*sizeof(char));
    int l=0;

   l= strlen(a) ;

    for(int i=0;i<l;i++)
    {
        *(b+i)=*(a+l-1-i);
    }
    printf("reversed string:");

    for(int i=0;i<l;i++)
    {
        printf("%c",*(b+i));
    }
}