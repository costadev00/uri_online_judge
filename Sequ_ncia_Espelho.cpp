#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
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
    int inicio, fim;
    //10 11 12 13 31 21 11 01
    vector<string> vet;
    char c;
    while (n--)
    {
        cin >> inicio >> fim;
        for (int i = inicio; i <= fim; i++)
        {
            cout << i;
            string a = to_string(i);
            reverse(a.begin(), a.end());
            vet.pb(a);
        }
        while (!vet.empty())
        {
            cout << vet.back();
            vet.pop_back();
        }
        cout << endl;
    }

    return 0;
}