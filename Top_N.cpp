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

int main()
{
    fastio;
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "Top 1\n";
    }
    else if (n > 1 && n <= 3)
    {
        cout << "Top 3\n";
    }
    else if (n > 3 && n <= 5)
    {
        cout << "Top 5\n";
    }
    else if (n > 5 && n <= 10)
    {
        cout << "Top 10\n";
    }
    else if (n > 10 && n <= 25)
    {
        cout << "Top 25\n";
    }
    else if (n > 25 && n <= 50)
    {
        cout << "Top 50\n";
    }
    else
    {
        cout << "Top 100\n";
    }
    return 0;
}