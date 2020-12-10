/*
TODO:SOLVE
*/
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, q, cont = 0;
    char palavra[n][100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> palavra[i];
    }
    cin >> q;
    char palavra2[q][100];
    for (int i = 0; i < q; i++)
    {
        cin >> palavra2[i];
        for (int j = 0; j < n; j++)
        {
            if (palavra2[i] == palavra[j])
            {
                cont++;
                continue;
            }
        }
    }
    return 0;
}