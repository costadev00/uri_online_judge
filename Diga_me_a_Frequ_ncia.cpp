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
    char letra;
    int cont = 0;
} Freq;

bool compare(Freq a, Freq b)
{
    if (a.cont != b.cont)
        return a.cont < b.cont;
    if (a.cont == b.cont)
        return a.letra > b.letra;
    return a.letra < b.letra;
}
int main()
{
    fastio;
    string st;
    int z = 0;
    while (cin >> st)
    {
        int counter = 0;
        int k = 0;
        int tam = st.length();
        Freq f[1001];
        bool foivisto[1001];
        memset(foivisto, false, sizeof(foivisto));

        for (int i = 0; st[i]; i++)
        {
            counter = 0;
            if (!foivisto[i])
            {

                for (int j = 0; st[j]; j++)
                {

                    if (st[i] == st[j])
                    {
                        foivisto[j] = true;
                        counter++;
                    }
                }
                f[k].letra = st[i];
                f[k].cont = counter;
                k++;
            }
        }

        // for (int i = 0; i < tam; i++)
        // {
        //     if (busca(f, counter, st[i]))
        //     {
        //         f[counter2].cont++;
        //         counter2++;
        //     }
        //     else
        //     {
        //         f[counter].letra = st[i];
        //         f[counter].cont++;
        //         counter++;
        //     }
        // }
        stable_sort(f, f + k, compare);

        if (z)
            printf("\n");
        else
            z++;
        for (int i = 0; i < k; i++)
        {
            printf("%d %d\n", f[i].letra, f[i].cont);
        }
        st.clear();
    }
    return 0;
}