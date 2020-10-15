/*
!!!!!!!!!!!!!! NAO USE BUBBLE SORT !!!!!!!!!!!!!!!!!!!
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main()
{
    int n, x, acm_par = 0, acm_impar = 0;
    cin >> n;
    int vet_par[n], vet_impar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            vet_par[acm_par] = x;
            acm_par++;
        }
        else
        {
            vet_impar[acm_impar] = x;
            acm_impar++;
        }
    }
    quickSort(vet_par, 0, acm_par - 1);
    quickSort(vet_impar, 0, acm_impar - 1);
    for (int i = 0; i < acm_par; i++)
    {
        printf("%d\n", vet_par[i]);
    }
    for (int i = acm_impar - 1; i >= 0; i--)
    {
        printf("%d\n", vet_impar[i]);
    }
    return 0;
}
// A utility function to swap two elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);     // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
