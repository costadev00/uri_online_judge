// TODO:SOLVE
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
    int n, m, x;
    cin >> n >> m;
    // int v[n];
    // int c[n];
    priority_queue<int, vector<int>, greater<int>> v;
    priority_queue<int> c;
    FOR(i, 0, n)
    {
        cin >> x;
        v.push(x);
    }
    FOR(i, 0, m)
    {
        cin >> x;
        c.push(x);
    }
    while (!v.empty())
    {
        cout << v.top() << " ";
        v.pop();
    }
    cout << endl;
    while (!c.empty())
    {
        cout << c.top() << " ";
        c.pop();
    }
    cout << endl;
    return 0;
}