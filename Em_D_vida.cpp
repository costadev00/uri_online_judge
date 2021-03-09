#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, acm = 0, cont = 0;
    while (cin >> n && n != -1)
    {
        int p[n], cont = 0, acm = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            acm += p[i];
            if (acm % 100 == 0)
            {
                cont++;
            }
        }
        printf("%d\n", cont);
    }

    return 0;
}