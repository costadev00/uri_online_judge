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

typedef struct
{
    string nome;
    char regiao;
    int dist;
} Aluno;

bool compare(Aluno p1, Aluno p2)
{
    if (p1.dist != p2.dist)
        return p1.dist < p2.dist;
    else if (p1.regiao != p2.regiao)
        return p1.regiao < p2.regiao;
    else
        return p1.nome < p2.nome;
}
int main()
{
    fastio;
    int n;
    string nome;
    char regiao;
    int dist;
    while (cin >> n)
    {
        Aluno a[n + 1];
        int i = 0;
        int aux = n;
        while (aux--)
        {
            cin >> nome >> regiao >> dist;
            a[i].dist = dist;
            a[i].regiao = regiao;
            a[i].nome = nome;
            i++;
        }
        stable_sort(a, a + n, compare);
        for (int i = 0; i < n; i++)
            cout << a[i].nome << endl;
    }
    return 0;
}