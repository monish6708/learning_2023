#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            // Set 1st bit
            num = num | (1 << 0);
            break;
        case 2:
            // Clear 31st bit
            num = num & (~(1 << 31));
            break;
        case 3:
            // Toggle 16th bit
            num = num ^ (1 << 15);
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return -1;  // Return -1 to indicate an error
    }

    return num;  // Return the modified number
}

int main() {
    int num, oper_type;
    int result;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}

//output - Enter the number: 12345
//Enter the operation type (1, 2, or 3): 1
//Result: 12346
