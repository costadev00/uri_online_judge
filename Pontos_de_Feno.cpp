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

vector<string> split(const string &s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

int main()
{
    fastio;
    int m, n;
    string cargo;
    int valor;
    while (cin >> m >> n)
    {
        map<string, int> mp;
        while (m--)
        {
            cin >> cargo >> valor;
            mp[cargo] = valor;
        }
        // for (auto i : mp)
        //     cout << i.first << " " << i.second << endl;
        while (n--)
        {
            string frase;
            string c;
            while (c[0] != '.')
            {
                read(c);
                if (c[0] == '.')
                    break;
                for (int i = 0; i < c.length(); i++)
                    frase.pb(c[i]);
                frase.pb(' ');
            }
            // cout << frase << endl;
            vector<string> vet = split(frase, ' ');
            // for (auto i : vet)
            //     cout << i << endl;

            int acm = 0;
            for (int i = 0; i < vet.size(); i++)
            {
                acm += mp[vet[i]];
                // debug(vet[i]);
                // debug(acm);
            }
            cout << acm << endl;
        }
    }
    return 0;
}