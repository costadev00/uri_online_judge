// TRY IMPLEMENT COUNTING SORT, THIS DOES NOT WORK
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long int nc, n;
    scanf("%lld", &nc);
    while (nc--)
    {
        scanf("%lld", &n);
        long long int h[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &h[i]);
        }
        stable_sort(h, h + n);
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                printf("%lld\n", h[i]);
                break;
            }
            printf("%lld ", h[i]);
        }
    }
    return 0;