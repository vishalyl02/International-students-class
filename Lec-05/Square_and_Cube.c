#include <stdio.h>

int main() {
    int num1, num2;
    int result;

    // Taking input for two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculating num1^2 + num2^3
    result = (num1 * num1) + (num2 * num2 * num2);

    // Printing the result
    printf("Result (num1^2 + num2^3): %d\n", result);

    return 0;
}
