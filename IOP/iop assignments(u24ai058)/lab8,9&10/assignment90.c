// WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.

#include <stdio.h>
int main()
{
    char str[50];
    char *p=str ;
    int count1=0 ,count2,count3=0;

    gets(str);

    
    while (*p !='\0')
    {
        if (*(p++) !='\0')
        {
            if (*p== ' ')
            {
                count3++ ;
            }
            
            count1++ ;
        }
        
    }
    count2=count1-count3;
    
    printf("length of the string including space is %d\n",count1);

    printf("length of the string excluding space is %d\n",count2);
    
    
    return 0;
}

