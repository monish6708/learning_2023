#include <stdio.h>

int findEvenOddIndexedDifference(int arr[], int length)
{
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }

    return sumEven - sumOdd;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int difference = findEvenOddIndexedDifference(arr, size);

    printf("Difference between sum of even-indexed and odd-indexed elements: %d\n", difference);

    return 0;
}
