//  WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *p = str;
    int count = 0;                        

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    while (*p != '\0') {
        
        if (*p != ' ' && (*(p + 1) == ' ' || *(p + 1) == '\0'))
        {
            count++;
        }
        p++;
    }

    printf("Number of words: %d\n", count);

    return 0;
}
