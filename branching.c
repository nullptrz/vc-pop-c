#include <stdio.h>


int main()
{
    int x = 1;
    // char myChar = 'a';

    switch (x)
    {
    case 1:
        printf("value is %d\n", x);
    case 3:
        printf("We are here\n");
    case 4:
        printf("here");
        break;
    default:
        printf("Not any case\n");
    }
}