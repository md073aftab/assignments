#include <stdio.h>
int main()
{
    int ng ;
    printf(" enter no of the gems\n");
    scanf("%d",&ng);
    char str[ng][100] ;

    for (int i = 0; i < ng; i++)
    {
        gets(str[i]);
    }
    for (int i = 0; i < ng; i++)
    {
        puts(str[i]);
    }
    

    return 0;
}