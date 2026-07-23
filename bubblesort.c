#include <stdio.h>

// Function to display array
void display_arr(int arr[], int n)
{
    printf("Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Optimized Bubble Sort
void opt_bubble_sort(int arr[], int n)
{
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }

        // If no swapping happened, array is already sorted
        if (swapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int n;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array:\n");
    display_arr(arr, n);

    // Sort the array
    opt_bubble_sort(arr, n);

    printf("\nSorted Array:\n");
    display_arr(arr, n);

    return 0;
}