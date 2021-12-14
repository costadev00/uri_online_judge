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

struct Pessoa
{
    string nome, p1, p2, p3;
};

int main()
{
    fastio;
    int n;
    string nome, p1, p2, p3;
    vector<Pessoa> vet;
    while (cin >> n)
    {
        cin.ignore();
        int i = 0;
        while (n--)
        {
            cin >> nome >> p1 >> p2 >> p3;
            vet.pb({nome, p1, p2, p3});
        }
        string pres;

        int s = vet.size();
        while (cin >> nome >> pres)
        {
            bool tem = false;
            bool achou =false;
            for (int j = 0; j < s; j++)
            {
                if (vet[j].nome == nome)
                {
                    for (int i = 0; i < 3; i++)
                    {
                        if (vet[j].p1 == pres || vet[j].p2 == pres || vet[j].p3 == pres)
                            tem = true;
                    }
                    if (tem)
                        cout << "Uhul! Seu amigo secreto vai adorar o/\n";
                    else
                        cout << "Tente Novamente!\n";
                    achou = true;
                    break;
                }
            }
            if(!achou)
                cout << "Tente Novamente!\n";
        }
    }

    return 0;
}