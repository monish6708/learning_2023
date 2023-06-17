#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    char temp[size];

    // Copy the data from ptr1 to temp
    char *tempPtr = (char *)ptr1;
    for (size_t i = 0; i < size; i++) {
        temp[i] = tempPtr[i];
    }

    // Copy the data from ptr2 to ptr1
    char *ptr1Ptr = (char *)ptr1;
    char *ptr2Ptr = (char *)ptr2;
    for (size_t i = 0; i < size; i++) {
        ptr1Ptr[i] = ptr2Ptr[i];
    }

    // Copy the data from temp to ptr2
    for (size_t i = 0; i < size; i++) {
        ptr2Ptr[i] = temp[i];
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values using the swap function
    swap(&num1, &num2, sizeof(int));

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
