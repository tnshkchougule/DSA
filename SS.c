//SELECTION SORT //
#include<stdio.h>

void display_arr(int arr[],int n);
void selection_sort(int arr[],int);

int main()
{
    int n,i;
    int arr[50];

    printf("Enter the size of Array:\n");
    scanf("%d",&n);

    printf("Enter element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);   
    }

    printf("\nBefore sorting:");
    display_arr(arr,n);        

    selection_sort(arr,n);

    printf("After sorting:");
    display_arr(arr,n);        

    return 0;
}

void selection_sort(int arr[],int n)
{
    int i,j;
    int pass=0;
    int comp=0;

    for(i=0;i<n-1;i++)
    {
        pass++;
        for(j=i+1;j<n;j++)
        {
            comp++;
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nSelection Sort\n");
    printf("Passes      : %d\n", pass);
    printf("Comparisons : %d\n", comp);
}

void display_arr(int arr[],int n)   
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}