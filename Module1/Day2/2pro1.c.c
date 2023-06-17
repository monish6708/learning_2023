#include <stdio.h>

void printExponent(double num) {
    // Get the address of the double variable
    unsigned long long *ptr = (unsigned long long *)&num;

    // Extract the exponent bits
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Print exponent in hexadecimal format
    printf("Exponent (Hex): 0x%llx\n", exponent);

    // Convert exponent to binary format
    unsigned long long binaryExponent = 0;
    int i;
    for (i = 0; i < 11; i++) {
        unsigned long long bit = (exponent >> (10 - i)) & 1;
        binaryExponent = (binaryExponent << 1) | bit;
    }

    // Print exponent in binary format
    printf("Exponent (Binary): 0b");
    for (i = 0; i < 11; i++) {
        printf("%llu", (binaryExponent >> (10 - i)) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.82;
    printExponent(x);

    return 0;
}
