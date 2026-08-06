// INSERTION SORT

#include <stdio.h>

void print_arr(int arr[], int n);
void insertion_sort(int arr[], int n);

int main()
{
    int n, i;
    int arr[50];

    printf("Enter the size of Array:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting: ");
    print_arr(arr, n);

    insertion_sort(arr, n);

    printf("After sorting: ");
    print_arr(arr, n);

    return 0;
}

void insertion_sort(int arr[], int n)
{
    int i, j, key;
    int pass = 0;
    int comp = 0;

    for(i = 1; i < n; i++)
    {
        pass++;
        key = arr[i];

        for(j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            comp++;
            arr[j + 1] = arr[j];   // Shift element
        }

        if(j >= 0)
            comp++;

        arr[j + 1] = key;
    }

    printf("\nInsertion Sort\n");
    printf("Passes: %d\n", pass);
    printf("Comparisons: %d\n", comp);
}

void print_arr(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}