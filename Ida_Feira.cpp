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
    string nome;
    float preco;
    int n;
    cin >> n;
    while (n--)
    {
        map<string, float> mp;
        float acm = 0;
        int m;
        cin >> m;
        while (m--)
        {
            cin >> nome >> preco;
            //mp.insert({nome,preco});
            mp[nome] = preco;
        }
        int p;
        int qtd;
        cin >> p;
        while (p--)
        {
            cin >> nome >> qtd;
            acm += mp[nome] * qtd;
        }
        printf("R$ %.2f\n", acm);
    }
    return 0;
}