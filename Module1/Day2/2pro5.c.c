#include <stdio.h>

int countSetBits(int num) {
    int count = 0;

    while (num) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

int totalSetBitsInArray(int array[], int size) {
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    return totalSetBits;
}

int main() {
    int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);

    int totalSetBits = totalSetBitsInArray(array, size);

    printf("The total number of set bits in the given array is: %d\n", totalSetBits);

    return 0;
}
