#include <stdio.h>

/*
 * Find the larger of two numbers provided by a user
 * print the bigger number.
 */
int main() {

    // STAGE 1
    int num1, num2;
    

    // STAGE 2
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);


    // STAGE 3:
    if(num1 > num2) {
        printf("Number 1: %d is bigger than Number 2: %d, ", num1, num2);
    } else {
        printf("Number 2: %d is bigger than Number 1: %d, ", num2, num1);
    }
    return 0;
}