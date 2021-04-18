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
    int x;
    int k, n;
    for (int i = 1; i <= 16; i++)
    {
        cin >> x;
        if (x == 1)
            k = i + 15;
        if (x == 9)
            n = i + 15;
    }

    int fases = 0;
    int dist = abs(n - 1);

    while (dist != 0)
    {
        fases++;
        k /= 2;
        n /= 2;
        dist = abs(n - k);
    }
    switch (fases)
    {
    case 1:
        cout << "oitavas\n";
        break;
    case 2:
        cout << "quartas\n";
        break;
    case 3:
        cout << "semifinal\n";
        break;
    case 4:
        cout << "final\n";
        break;
    }
    return 0;
}
