// C program for implementation of Bubble sort
#include <stdio.h>
#include <stdlib.h>
void swap(long long int *xp, long long int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(long long int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(long long int arr[], long long int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int np, i, j;
    long long int arr[3000000], p;
    scanf("%d", &np);
    for (i = 0; i < np; i++)
    {
        scanf("%d", &p);
        for (j = 0; j < p; j++)
        {
            scanf("%d", &arr[j]);
        }
        bubbleSort(arr, j);
        printArray(arr, j);
    }
    return 0;
}
