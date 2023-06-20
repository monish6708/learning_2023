#include <stdio.h>

void calcSumAvg(int arr[], int length, int* sum, float* average)
{
    *sum = 0;

    for (int i = 0; i < length; i++)
    {
        *sum += arr[i];
    }

    *average = (float)(*sum) / length;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Enter %d elements:\n", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum;
    float average;

    calcSumAvg(arr, length, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
