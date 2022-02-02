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

typedef struct
{
    string nome, presente;
    int distancia;
} Pessoa;

bool compare(Pessoa p1, Pessoa p2)
{
    return p1.distancia < p2.distancia;
}
int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        Pessoa p[n + 1];
        string nome, presente;
        int distancia;
        for (int i = 0; i < n; i++)
        {
            cin >> nome >> presente >> distancia;
            p[i].nome = nome;
            p[i].presente = presente;
            p[i].distancia = distancia;
        }
        stable_sort(p, p + n, compare);
        for (int i = 0; i < n; i++)
        {
            cout << p[i].nome << " " << p[i].presente << " " << p[i].distancia << endl;
        }
    }
    return 0;
}