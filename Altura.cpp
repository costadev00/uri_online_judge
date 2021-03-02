#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void counting_sort(int A[], int k, int n)
{
    int i, j;
    int B[15], C[100];
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[A[j]] = C[A[j]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i - 1];
    for (j = n; j >= 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    printf("The Sorted array is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);
}
int main()
{
    fastio;
    int nc, n, k = 0;
    scanf("%d", &nc);
    while (nc--)
    {
        scanf("%d", &n);
        int h[n];
        k = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d" & h[i]);
            if (h[i] > k)
            {
                k = h[i];
            }
        }
        counting_sort()
    }
    return 0;
}