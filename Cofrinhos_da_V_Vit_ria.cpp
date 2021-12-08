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
    int n, j, z, t = 1;
    while (cin >> n && n)
    {
        cout << "Teste " << t << endl;
        t++;
        int dif = 0;
        while (n--)
        {
            cin >> j >> z;
            dif +=j-z;
            cout<<dif<<endl;
        }
        cout<<endl;
    }
    return 0;
}