#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long int n1, n2;
    while (cin >> n1 >> n2)
    {
        printf("%lld\n", abs(n1 - n2));
    }
    return 0;
}