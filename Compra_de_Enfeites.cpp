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

class Enfeite
{
public:
    string nome;
    double preco;
    double taxa;
    Enfeite(string nome, double preco, double taxa)
    {
        this->nome = nome;
        this->preco = preco;
        this->taxa = taxa;
    }
};
int main()
{
    fastio;
    int a, b;
    cin >> a >> b;
    string nome, preco, taxa;
    vector<Enfeite> enfeites;
    while (a--)
    {
        cin >> nome >> preco >> taxa;
        Enfeite e(nome, stod(preco), stod(taxa));
        enfeites.push_back(e);
    }
    vector<string> ans;
    sort(enfeites.begin(), enfeites.end(), [](Enfeite a, Enfeite b)
         {
            if(a.preco != b.preco)
                return a.preco<b.preco;
            return a.taxa>b.taxa; });

    for (int i = 0; i < enfeites.size() - 1; i++)
    {
        if (enfeites[i].preco != enfeites[i + 1].preco)
        {
            if (enfeites[i].preco < b)
            {
                ans.push_back(enfeites[i].nome);
                b -= enfeites[i].preco;
            }
        }
        else
        {
            if (enfeites[i].preco <= b)
            {
                ans.push_back(enfeites[i].nome);
                b -= enfeites[i].preco;
            }
        }
    }
    for (auto u : ans)
        cout << u << endl;
    return 0;
}