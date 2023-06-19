#include <stdio.h>

// Q4. Write a C Program, to check whether a given character is an Alphabet, Digit or Special Character and print the type of character the user has entered

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("The Character: %c is a Alphabet", ch);
    }
    else if (ch <= '9' && ch >= '0')
    {
        printf("The Character: %c is a Digit", ch);
    }
    else
    {
        printf("The Character: %c is Special Character", ch);
    }
    return 0;
}