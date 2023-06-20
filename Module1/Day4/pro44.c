#include <stdio.h>

int findEvenOddDifference(int arr[], int length)
{
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
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

    int difference = findEvenOddDifference(arr, size);

    printf("Difference between sum of even and odd elements: %d\n", difference);

    return 0;
}
