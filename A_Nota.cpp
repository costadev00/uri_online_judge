#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

#define auxcomp 1000000007

using namespace std;

int main()
{
    fastio;
    unsigned long long int n, k;
    while (cin >> n >> k)
    {

        unsigned long long int x, sum = 0;
        vector<unsigned long long int> vet;

        while (n--)
        {
            cin >> x;
            vet.push_back(x);
        }
        sort(vet.begin(), vet.end(), greater<unsigned long long int>());

        for (int i = 0; i < k; ++i)
            sum = ((sum % auxcomp) + (vet[i] % auxcomp)) % auxcomp;
        cout << sum << endl;
    }
    return 0;
}