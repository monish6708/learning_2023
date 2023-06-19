#include <stdio.h>

void print_bits(unsigned int num) {
    int i;
    int size = sizeof(num) * 8;  

    for (i = size - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        unsigned int bit = (num & mask) >> i;
        printf("%u", bit);
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("Binary representation: ");
    print_bits(num);
    return 0;
}
