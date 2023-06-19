#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    int digit;

    while (divisor <= num) {
        digit = (num / divisor / 10) * divisor + num % divisor;
        if (digit > largest) {
            largest = digit;
        }
        divisor *= 10;
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a digit: %d\n", largestNumber);

    return 0;
}
