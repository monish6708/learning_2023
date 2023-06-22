#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Read input from the user
    printf("Enter Number1: ");
    scanf("%f", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit the program with an error code
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit the program with an error code
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
