// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int x, m, aux, flag, aux2, aux3, aux4, aux800 = 1;
    _Bool flag1 = false;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        aux = 0;
        flag = 0;
        cin >> m;

        int arr[m];
        int n = sizeof(arr) / sizeof(arr[0]);
        int vetTot[m];

        for (int j = 0; j < m; j++)
        {
            cin >> vetTot[j];
            if (vetTot[j] % 2 != 0)
            {
                arr[aux] = vetTot[j];
                aux++;
            }
            // aux4 = aux;
        }
        aux2 = 0;
        aux3 = aux;
        bubbleSort(arr, aux);
        flag1 = false;
        for (int t = 0; t < aux; t++)
        {
            if (flag == 0)
            {
                aux3--;
                if (flag1)
                {
                    printf(" %u", arr[aux3]);
                }
                else
                {
                    printf("%u", arr[aux3]), flag1 = true;
                }
                flag = 1;
            }
            else
            {
                if (flag1)
                {

                    printf(" %u", arr[aux2]);
                }
                else
                {
                    printf("%u", arr[aux2]), flag1 = true;
                }
                aux2++;
                flag = 0;
            }
            aux800++;
        }
        printf("\n");
        // cout << "Sorted array: \n";
        // printArray(arr, aux);
    }
    return 0;
}

// This code is contributed by rathbhupendra
