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
    int m;
    cin >> m;
    set<string> st;
    vector<string> v;
    string s;
    cin.ignore();
    while (m--)
    {
        read(s);
        v = split(s, ' ');
        st.insert(v[0]);
    }
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        read(s);
        v = split(s, ' ');
        st.insert(v[0]);
    }
    for (auto u : st)
        cout << u << endl;
    return 0;
}