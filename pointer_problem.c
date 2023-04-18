#include <stdio.h>

// Write a program in C to store n elements in an array and print the elements using a pointer.
int main()
{

    int n;

    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", array + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", *(array + i));
    }
    return 0;
}