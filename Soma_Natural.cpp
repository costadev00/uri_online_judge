#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    unsigned long long int n1, n2, acm = 0;
    unsigned long long int res;

    cin >> n1 >> n2;
    unsigned long long int vet[n2];

    // for (unsigned long long int i = n1; i <= n2; i++)
    // {
    //     acm += i;
    // }
    acm = (n1 + n2) * (n2 - n1 + 1) / 2;
    cout << acm << endl;
    return 0;
}