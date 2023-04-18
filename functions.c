#include <stdio.h>

int sumArray(int *arr, int);

int main()
{
    int values[] = {5, 12, 3, 2, 3};

    printf("Sum: %d\n", sumArray(values, 5));

    return 0;
}

int sumArray(int *array, int size)
{
    int sum = 0;

    int *arrayEnd = array + size;

    for (; array < arrayEnd; ++array)
    {
        sum += *array;
    }

    return sum;
}