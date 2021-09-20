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
    cin >> n;
    int x;
    vi vet;
    FOR(i, 0, n)
    {
        cin >> x;
        vet.pb(x);
    }

    sort(vet.begin(), vet.end());
    while (!vet.empty())
    {
        int num = vet[0];
        int cont = 0;
        while (vet[0] == num)
        {
            ++cont;
            vet.erase(vet.begin());
            if (vet.empty())
                break;
        }
        cout << num << " aparece " << cont << " vez(es)" << endl;
    }
    return 0;
}