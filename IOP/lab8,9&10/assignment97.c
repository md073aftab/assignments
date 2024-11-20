//  WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char *ptr= str;
    int count=0 ;

    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        switch(*ptr)
        {
            case 'a' :
                       
            case 'e' : 
                       
            case 'i' :
                       
            case 'o' : 
                        
            case 'u' :
                       
            case 'A' :
                       
            case 'E' :
                       
            case 'I' :
                       
            case 'O' :
                       
            case 'U' :
                       count++ ;
                        break ;
             
        }
        ptr++ ;
    }

    printf("total number of vowels is : %d \n",count);

    
    
    return 0;
}
