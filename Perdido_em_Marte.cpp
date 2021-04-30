#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n, x;
    cin >> n;
    char c;
    string str;
    int i = 0;
    while (n--)
    {
        cin >> hex >> x;
        c = x;
        str.push_back(c);
        i++;
    }
    cout << str << endl;
    return 0;
}