#include <bits/stdc++.h>

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
    char tam;
    string cor;
} Aluno;

bool compare(Aluno a, Aluno b)
{
    if (a.cor != b.cor)
    {
        return a.cor < b.cor;
    }
    else if (a.tam != b.tam)
    {
        return a.tam > b.tam;
    }
    else
        return a.nome < b.nome;
}
int main()
{
    // fastio;
    int n;
    string nome, cor;
    char tam, j = 0;
    cin >> n;
    while (true)
    {
        if (n == 0)
            break;
        cin.ignore();
        Aluno a[n];
        // if (j)
        //     printf("\n");
        // else
        //     j++;

        for (int i = 0; i < n; i++)
        {
            read(nome);
            cin >> cor >> tam;
            cin.ignore();
            a[i].nome = nome;
            a[i].cor = cor;
            a[i].tam = tam;
        }
        stable_sort(a, a + n, compare);
        for (int i = 0; i < n; i++)
        {
            // printf("%s %c %s\n", a[i].cor, a[i].tam, a[i].nome);
            cout << a[i].cor << " " << a[i].tam << " " << a[i].nome << "\n";
        }
        cin >> n;
        if (n != 0)
            printf("\n");
    }
    return 0;
}