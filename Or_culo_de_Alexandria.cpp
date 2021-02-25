//TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long int t, n, res = 0, aux = 0, acm = 0, j = 0;
    string k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> k;
        res = n * (n - k.length());
        for (int i = 0; i < k.length(); i++)
        {
            j = i + 1;
            // res += n - i * k.length();
            aux = (n - j * k.length());
            acm += aux;
            printf("acm = %lld\n", acm);
            printf("aux = %lld\n", aux);
        }
        printf("%lld\n", res * acm);
        res = 0;
        acm = 0;
    }
    return 0;
}