#include <stdio.h>

int getSmallestDigit(int num) {
    int smallest = 9;
    int digit;

    while (num > 0) {
        digit = num % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        num /= 10;
    }

    return smallest;
}

int getLargestDigit(int num) {
    int largest = 0;
    int digit;

    while (num > 0) {
        digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }

    return largest;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int i, num;
    int smallestDigit = 9;
    int largestDigit = 0;

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        int smallest = getSmallestDigit(num);
        int largest = getLargestDigit(num);

        if (smallest < smallestDigit) {
            smallestDigit = smallest;
        }

        if (largest > largestDigit) {
            largestDigit = largest;
        }
    }

    if (smallestDigit == largestDigit) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallestDigit);
        printf("Largest digit: %d\n", largestDigit);
    }

    return 0;
}
