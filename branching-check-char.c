#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Character: %c is uppercase", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Character: %c is lowercase", ch);
    }
    else
    {
        printf("The Character is not an alphabet");
    }
    return 0;
}