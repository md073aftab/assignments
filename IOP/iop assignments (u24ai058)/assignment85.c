// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT

#include <stdio.h>

void check(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Given character is a vowel\n");
        break;
    default: 
        printf("Given character is not a vowel\n");
        break;
    }
}

int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    check(ch);
    return 0;
}

