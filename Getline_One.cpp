#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    string nome;
    double dist, acm = 0, cont = 0;
    while (read(nome))
    {
        cin >> dist;
        cin.ignore();
        acm += dist;
        cont++;
    }
    printf("%.1lf\n", acm / cont);
    return 0;
}