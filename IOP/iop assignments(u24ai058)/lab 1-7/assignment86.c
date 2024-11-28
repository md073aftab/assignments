//  WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.

#include <stdio.h>

void stringlength( char sen[])
{
    int count=0,i=0;
    while(sen[i]!='\0')
    {
        count++ ;
        i++ ;
    }
    printf("length of string is %d",count);

}

int main()
{
    char sen[500];
    gets(sen);

    stringlength(sen);

    return 0;
}

    
   
