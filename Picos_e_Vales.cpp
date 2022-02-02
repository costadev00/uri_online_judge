#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        int x;
        vi vet;
        FOR(i, 0, n)
        {
            cin >> x;
            vet.pb(x);
        }
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (n == 2)
        {
            if (vet[0] != vet[1])
                cout << 1 << endl;
            else
                cout << 0 << endl;
            continue;
        }
        int flag = 0;
        for (int i = 2; i < n; i++)
        {
            if ((vet[i - 2] > vet[i - 1] && vet[i - 1] < vet[i]) || (vet[i - 2] < vet[i - 1] && vet[i - 1] > vet[i]))
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
            // if (vet[i] == vet[i + 1])
            // {
            //     flag = 0;
            //     break;
            // }
        }
        cout << flag << endl;
    }
    return 0;
}