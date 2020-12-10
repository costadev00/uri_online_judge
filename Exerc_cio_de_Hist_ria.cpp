#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        if (n % 100 == 0)
        {
            n = n / 100;
            printf("%d\n", n);
        }
        else
        {
            n = n / 100;
            n++;
            printf("%d\n", n);
        }
    }
    return 0;
}