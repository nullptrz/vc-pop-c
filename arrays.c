#include <stdio.h>

int main()
{
    // type name_of_your_array = {}
    // Declaration of an Array -> Creating space in the Memory
    int myNum[] = {60, 80, 90, 40, 65};
    // NOTE: Unless we initialize each block in the Array it contains garbage
    int sum = 0;

    // Input --> Processing --> Output

    int size = 5;
    int myArr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArr[i]);
        sum += myArr[i];
    }

    // 60,80,90,40,65 => 335
    printf("%d", sum);
    return 0;
}