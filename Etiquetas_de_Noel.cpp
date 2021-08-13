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
    int m = 6;
    cin >> n;
    map<string, string> mp;
    string idi, trad;
    string nome;
    while (n--)
    {
        cin >> idi;
        cin.ignore();
        read(trad);
        mp[idi] = trad;
    }
    // for (auto i : mp)
    //     cout << i.first << " " << i.second << endl;
    cin >> m;
    cin.ignore();
    while (m--)
    {
        read(nome);
        cin >> idi;
        cin.ignore();
        cout << nome << endl;
        cout << mp[idi] << endl;
        cout << endl;
    }
    return 0;
}