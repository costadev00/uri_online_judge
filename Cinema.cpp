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
    int n,m;
    cin >> n>>m;
    int sum=0;
    if(n<=17) sum+=15;else if(n>=18 && n<=59) sum+=30; else sum+=20;
    if(m<=17) sum+=15;else if(m>=18 && m<=59) sum+=30; else sum+=20;
    cout<<sum;
    return 0;
}