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

// Function to compute num (mod a)
int mod(string num, int a)
{
    // Initialize result
    int res = 0;
    // One by one process all digits of 'num'
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;
    return res;
}
int main()
{
    fastio;
    string n1;
    int n2;
    cin >> n1;
    cin >> n2;
    cout << mod(n1, n2) << endl;
    return 0;
}