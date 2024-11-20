// 96) WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.

#include <stdio.h>
#include <string.h>
int main()
{
    int n ;

    printf("enter the numbers of strings\n") ;
    scanf("%d",&n) ;

    char str[n][100], ptr[100] ;
    char *p=str ;
    
    
    for (int i = 0; i <=n; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);

    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            { 
                strcpy(ptr, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], ptr);
            }
        }
    }

    for (int i = 0; i <=n; i++)
    {
        puts(str[i]);
    }
    
    
    
    return 0;
}
