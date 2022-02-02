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
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }   
    for (int i = 0; i < 3; i++)
    {
        int soma = 0;
        for (int j = 0; j < 3; j++)
        {
            soma += mat[i][j];
        }
        cout << "Linha " << i << ": " << soma << endl;
    }
    return 0;
}