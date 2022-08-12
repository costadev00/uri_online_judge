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
    string ans;
    string s;
    vector<string> vet, veto;
    while (read(s))
    {
        int tam = s.size();
        string x;
        veto.push_back(s);
        for (int i = 0; i < tam; i++)
            x.push_back(tolower(s[i]));

        vet.pb(x);
    }
    sort(vet.begin(), vet.end());
    string res = vet[vet.size() - 1];
    int tam = veto.size();
    // for (auto u : veto)
    //     cout << u << endl;
    // debug(res);
    for (int i = 0; i < tam; i++)
    {
        string s = veto[i];
        // debug(s);
        // debug(res);
        // string real = veto[i];
        int sz = s.size();
        if (sz != res.size())
            continue;
        bool isok;
        for (int j = 0; j < sz; j++)
        {
            isok = true;
            char aux = tolower(s[j]);
            char aux2 = toupper(s[j]);
            if (res[j] != aux && res[j] != aux2)
            {
                // cout << "falsou\n";
                isok = false;
                break;
            }
            else
                isok = true;
        }
        if (isok)
        {
            ans = s;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}