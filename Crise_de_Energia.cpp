#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

vi vet;
int f(int n, int k)
{
    if (n == 1)
        return 1;
    return (((f(n - 1, k) + k - 1) % n) + 1);
}

int main()
{
    fastio;
    int n, k = 5;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << f(n, k) << endl;
    }
    return 0;
}