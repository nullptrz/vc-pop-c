#include <stdio.h>

/*
 * Check whether number is 0 or positive
 * or negative
 */
int main() {
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if(number == 0) {
        printf("Number is 0\n");
    } else if (number > 0) {
        printf("Positive");
    } else {
        printf("Negative");
    }

    return 0;
}