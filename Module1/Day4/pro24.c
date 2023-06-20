#include <stdio.h>

void findMinMax(int arr[], int length, int* min, int* max)
{
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < length; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }

        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
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

    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
