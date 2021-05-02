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
    char nome[10000];
    int poder, mortes, morreu;
} Deus;

int compare(const void *p1, const void *p2)
{
    Deus *i = (Deus *)p1, *j = (Deus *)p2;
    if (i->poder < j->poder)
        return 1;
    else if (i->poder > j->poder)
        return -1;
    else if (i->mortes < j->mortes)
        return 1;
    else if (i->mortes > j->mortes)
        return -1;
    else if (i->morreu < j->morreu)
        return 1;
    else if (i->morreu > j->morreu)
        return -1;
    else
        return strcmp(i->nome, j->nome);
}

int main()
{
    char nome[1000];
    int n, poder, mortes, morreu, i = 0;
    cin >> n;
    Deus d[n];
    int aux = n;
    while (aux--)
    {
        cin >> nome >> poder >> mortes >> morreu;
        strcpy(d[i].nome, nome);
        d[i].poder = poder;
        d[i].mortes = mortes;
        d[i].morreu = morreu;
        i++;
    }
    qsort(d, n, sizeof(Deus), compare);
    cout << d[0].nome << endl;

    return 0;
}