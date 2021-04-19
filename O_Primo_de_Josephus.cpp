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

#define MAXPRIME 32650
vi vetp;
int j = 0;

bool isPrime(int x)
{
    for (int d = 2; d * d <= x; d++)
    {
        if (x % d == 0)
            return false;
    }
    return true;
}
void fitprime()
{
    for (int i = 2; i < MAXPRIME; i++)
    {
        if (isPrime(i))
        {
            vetp.pb(i);
        }
    }
}

int winner(int n, int k)
{
    if (n == 1)
        return 1;
    k = vetp[j];
    j++;
    return (winner(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    fastio;
    int n;
    fitprime();
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << winner(n, 0) << endl;
        j = 0;
    }
    return 0;
}