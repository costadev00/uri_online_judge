//TODO:SOLVE
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

bool isSubSequence(string str1, string str2, int m, int n)
{

    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}
int binarySearch(string arr, int l, int r, char x)
{
    if (r < l)
        return -1;

    int mid = l + (r - l) / 2;

    // If the element is present at the middle
    // itself
    if (arr[mid] == x)
        return mid;

    // If element is smaller than mid, then
    // it can only be present in left subarray
    if (arr[mid] > x)
        return binarySearch(arr, l, mid - 1, x);

    // Else the element can only be present
    // in right subarray
    return binarySearch(arr, mid + 1, r, x);
}
int count(string arr, int n, char x)
{
    int ind = binarySearch(arr, 0, n - 1, x);

    // If element is not present
    if (ind == -1)
        return 0;

    // Count elements on left side.
    int count = 1;
    int left = ind - 1;
    while (left >= 0 && arr[left] == x)
        count++, left--;

    // Count elements on right side.
    int right = ind + 1;
    while (right < n && arr[right] == x)
        count++, right++;

    return count;
}

int main()
{
    fastio;
    int t;
    string a, b;
    while (cin >> t)
    {
        int res = 0;
        FOR(i, 0, t)
        {
            cin >> a;
            cin >> b;
            if (isSubSequence(b, a, b.length(), a.length()))
            {
                int al = a.length();
                int bl = b.length();
                sort(a.begin(), a.end());
                for (int j = 0; j <= bl; j++)
                {
                    int y = b[j];
                    int x = count(a, al, b[j]);
                    res = max(x, res);
                }
                cout << res << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}