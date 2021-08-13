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
    int n = 1;
    vector<string> vet;
    string s;
    int aux = 0;
    while (n != 0)
    {
        cin >> n;
        cin.ignore();
        if (n != 0 && aux > 0)
        {
            cout << endl;
        }
        else if (n == 0)
            break;
        int maior = INT_MIN;
        int tamst;
        aux++;
        while (n--)
        {
            read(s);
            tamst = s.length();
            maior = max(maior, tamst);
            vet.pb(s);
        }
        int tam = vet.size();
        FOR(i, 0, tam)
        {
            cout << setw(maior)
                 << vet[i] << endl;
        }
        vet.clear();
    }
    return 0;
}