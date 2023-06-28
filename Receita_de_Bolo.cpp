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
    int a,b,c;
    cin >> a >> b >> c;
    int ans=0;
    bool flag=true;
    while(1){

        if(a>=2)
            a-=2;
        else flag=false;
        if(b>=3)
            b-=3;
        else flag=false;
        if(c>=5)
            c-=5;
        else flag=false;
        if(flag)
            ans++;
        else break;
    }   
    cout << ans << endl;
    return 0;
}