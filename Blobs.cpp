#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, dias = 0;
    double s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        dias = 0;
        while (s > 1)
        {
            s /= 2;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}