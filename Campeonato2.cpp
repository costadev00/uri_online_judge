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
    int vcor, ecor, saldocor, vfla, efla, saldofla;
    while (cin >> vcor >> ecor >> saldocor >> vfla >> efla >> saldofla)
    {

        int pontosfla = vfla * 3;
        pontosfla += efla;
        int pontoscor = vcor * 3;
        pontoscor += ecor;
        if (pontosfla == pontoscor)
        {
            if (saldofla == saldocor)
                cout << '=' << endl;
            else if (saldofla > saldocor)
                cout << 'F' << endl;
            else
                cout << 'C' << endl;
        }
        else if (pontosfla > pontoscor)
            cout << 'F' << endl;
        else
            cout << 'C' << endl;
    }
    return 0;
}