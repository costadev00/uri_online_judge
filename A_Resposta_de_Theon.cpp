#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, menor = 100, res = 0;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    menor = t[0];
    for (int i = 0; i < n; i++)
    {
        if (t[i] < menor)
        {
            menor = t[i];
            res = i;
        }
    }
    printf("%d\n", res + 1);

    return 0;
}