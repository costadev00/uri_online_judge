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
    int soma = 0;
    cin >> n;
    FOR(i, 0, n)
    {
        string s;
        cin >> s;
        soma += s.size();
    }
    if (soma % n == 0)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}