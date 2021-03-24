#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] > x)
            return binarySearch(arr, l, m - 1, x);

        return binarySearch(arr, m + 1, r, x);
    }
    return -1;
}

int main()
{
    fastio;
    int n, m, e, new_po, cont = 0, res = 0;
    cin >> n >> m;
    int vetc[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vetc[i];
    }
    int pos = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> e;
        new_po = binarySearch(vetc, 0, n - 1, e);
        res = pos - new_po;
        cont += abs(res);
        pos = new_po;
    }
    cout << cont + 1 << endl;

    return 0;
}