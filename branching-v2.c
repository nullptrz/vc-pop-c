#include <stdio.h>

int main()
{
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number > 5)
    {
        printf("Number greater than 5\n");
    }
    else
    {
        printf("Number not bigger than 5\n");
    }

    return 0;
}