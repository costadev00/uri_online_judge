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

struct Nomes
{
    string nome;
    int dif;
};

bool compare(Nomes a, Nomes b)
{
    return a.dif < b.dif;
}

int main()
{
    int m, c, h, min, aux;
    cin >> m >> c;
    string nome;
    Nomes nomes[1001];
    int n = 0;
    while (c--)
    {
        scanf("%d:%d", &h, &min);
        cin >> nome;
        if (h == 0)
        {
            if (min <= m)
            {
                nomes[n].nome = nome;
                nomes[n].dif = min;
                n++;
            }
        }
        else
        {
            if (abs(min - 60) <= m)
            {
                nomes[n].nome = nome;
                nomes[n].dif = min - 60;
                n++;
            }
        }
    }
    stable_sort(nomes, nomes + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << nomes[i].nome << endl;
    }
    return 0;
}