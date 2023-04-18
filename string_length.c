#include <stdio.h>

int stringLength(char *);

int main()
{
    printf("Length: %d\n", stringLength("hello"));

    return 0;
}

int stringLength(char *string)
{
    char *counter = string;

    while (*counter)
    {
        ++counter;
    }

    return counter - string;
}