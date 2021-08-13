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
    int t;
    string trad, f;
    map<string, string> mp;
    while (cin >> t)
    {
        while (t--)
        {

            int m, n;
            cin >> m >> n;
            cin.ignore();
            while (m--)
            {
                read(f);
                read(trad);
                mp[f] = trad;
            }
            string s;
            while (n--)
            {
                read(s);
                // cin.ignore();
                vector<string> vet = split(s, ' ');
                // for (auto i : mp)
                //     cout << i.first << " " << i.second << endl;
                // for (auto i : vet)
                //     cout << i << endl;
                for (int i = 0; i < vet.size(); i++)
                {
                    if (i + 1 != vet.size())
                    {
                        if (mp.count(vet[i]))
                            cout << mp[vet[i]] << " ";
                        else
                            cout << vet[i] << " ";
                    }
                    else
                    {
                        if (mp.count(vet[i]))
                            cout << mp[vet[i]];
                        else
                            cout << vet[i];
                    }
                }
                cout << endl;
            }
            mp.clear();
            cout << endl;
        }
    }
    return 0;
}